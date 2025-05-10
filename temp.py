import itertools

def is_lab(code):
    """Check if course is a lab course (ends in even digit)"""
    return code[-1].isdigit() and int(code[-1]) % 2 == 0

def candidate_blocks(teacher, year, course):
    """
    Return list of possible blocks for scheduling this course:
    - Labs: fixed 3-hour contiguous slot 14-17 on any one available day
    - Theory: any combination of 'credits' one-hour slots from available times
    """
    code = course['code']
    hrs = 3 if is_lab(code) else int(course['credits'])
    avail = teacher['available_time']
    blocks = []
    if is_lab(code):
        # labs: find days where all of [14,15,16] are free
        for day, times in avail.items():
            if all(h in times for h in [14,15,16]):
                slot = [(day, h) for h in [14,15,16]]
                blocks.append(slot)
    else:
        # theory: choose any combination of hrs slots
        slots = [(day, h) for day, times in avail.items() for h in times]
        for combo in itertools.combinations(slots, hrs):
            blocks.append(list(combo))
    return blocks

def schedule(teachers):
    """
    Return dict assignments: {year: {course: [(day,time), ...]}}
    """
    # sort by teacher priority
    teachers = sorted(teachers, key=lambda t: t['rank'])
    assignments = {}
    if _assign(teachers, assignments, t_idx=0, c_idx=0):
        return assignments
    return None

def _assign(teachers, assignments, t_idx, c_idx):
    if t_idx >= len(teachers):
        return True
    teacher = teachers[t_idx]
    # flatten courses list
    courses = [(yr, c) for yr, lst in teacher['courses'].items() for c in lst]
    if c_idx >= len(courses):
        return _assign(teachers, assignments, t_idx+1, 0)
    year, course = courses[c_idx]
    for block in candidate_blocks(teacher, year, course):
        if all(_can_assign(teacher['name'], year, day, time, assignments)
               for day, time in block):
            # assign all slots
            for day, time in block:
                assignments.setdefault(year, {}).setdefault(course['code'], []).append(
                    {'teacher': teacher['name'], 'day': day, 'time': time}
                )
            # recurse
            if _assign(teachers, assignments, t_idx, c_idx+1):
                return True
            # backtrack
            del assignments[year][course['code']]
            if not assignments[year]:
                del assignments[year]
    return False

def _can_assign(teacher_name, year, day, time, assignments):
    # no same-year overlap
    if year in assignments:
        for info in assignments[year].values():
            if any(i['day']==day and i['time']==time for i in info):
                return False
    # no teacher overlap
    for yr, cmap in assignments.items():
        for infos in cmap.values():
            for i in infos:
                if (i['teacher']==teacher_name and i['day']==day and i['time']==time):
                    return False
    return True
