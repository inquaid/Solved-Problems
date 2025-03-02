bool comp(tuple<string, int, vector<int>> a,
          tuple<string, int, vector<int>> b) {
    if (get<1>(a) != get<1>(b)) {
        return get<1>(a) > get<1>(b);
    }
    for (int i = 0; i < 60; ++i) {
        if (get<2>(a)[i] != get<2>(b)[i]) {
            return get<2>(a)[i] >= get<2>(b)[i];
        }
    }
    return get<0>(a) < get<0>(b);
}
bool comp2(tuple<string, int, vector<int>> a,
           tuple<string, int, vector<int>> b) {
    for (int i = 0; i < 60; ++i) {
        if (get<2>(a)[i] != get<2>(b)[i]) {
            return get<2>(a)[i] >= get<2>(b)[i];
        }
        if (get<1>(a) != get<1>(b)) {
            return get<1>(a) > get<1>(b);
        }
    }
    return get<0>(a) < get<0>(b);
}