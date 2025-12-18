{
  "topics": [
    {
      "title": "Uncertainty-Aware Deep Learning for Urban Green Space Index Mapping",
      "short_abstract": "This thesis will extend existing deep learning approaches for estimating Urban Green Space (UGS) Index from satellite imagery by explicitly modeling prediction uncertainty at pixel and neighborhood scales. Building on Rahaman et al.’s work on deep learning-based UGS index estimation from satellite images, the project will train segmentation and regression models on Sentinel-2 data and open urban greenspace data cubes and adapt them to a secondary Bangladeshi city (e.g., Khulna). The method will integrate uncertainty-aware techniques (Monte Carlo dropout, deep ensembles) and spatial calibration to provide both UGS values and confidence maps that are usable by urban planners. Public Sentinel-2 archives and an existing global 10 m greenspace dynamic data cube will be combined with a curated, manually annotated local patch dataset. The goal is a reproducible pipeline, open code, and at least one Q1 journal submission to Urban Forestry & Urban Greening or Remote Sensing.",[1][2][3]
      "background_and_motivation": "Urban green spaces are central to climate adaptation, heat mitigation, and public health, but fine-scale, reliable UGS maps are still scarce in rapidly growing cities of the Global South, including Bangladesh. Deep learning has recently enabled automated estimation of UGS index from satellite imagery, including Rahaman et al.’s work on automated UGS index estimation from satellite images.\nTraditional UGS mapping either uses simple NDVI thresholds or coarse land-cover classes, which lack robustness across seasons and cities and rarely quantify uncertainty. For planners, knowing where the model is unsure is as important as the predicted greenness.\nThis topic directly builds on the supervisor’s recent deep learning work in aerial image segmentation and UGS index estimation in Urban Forestry & Urban Greening, while adding methodological innovation through uncertainty modeling and spatial calibration.\nBecause it uses public satellite data (Sentinel-2 and an open greenspace data cube) and a modest amount of local annotation, it is feasible under a single-GPU constraint while still targetable to Q1 journals in remote sensing and urban ecology.",[2][3][4][5][1]
      "research_questions_or_hypotheses": [
        "RQ1: Can uncertainty-aware deep learning models provide more reliable UGS index estimates than deterministic CNN baselines for Bangladeshi cities?",
        "RQ2: How well do models trained on global greenspace data cubes generalize to a new city (e.g., Khulna) with minimal local fine-tuning?",[3][2]
        "RQ3: Do uncertainty maps correlate with known error sources (cloud edges, shadows, mixed land-cover) and help prioritize manual validation?",
        "RQ4: Does neighborhood-level aggregation of pixel-wise uncertainty improve robustness of UGS indicators used in urban planning?"
      ],
      "novel_contribution": "Methodological novelty: integrating uncertainty-aware deep segmentation/regression (Monte Carlo dropout, deep ensembles, and/or evidential regression) into UGS index mapping from Sentinel-2, and systematically calibrating and evaluating spatial uncertainty. Applied novelty: first detailed, uncertainty-aware UGS index maps for a Bangladeshi secondary city, building directly on Rahaman et al.’s UGS index framework and on global greenspace data cubes. Empirical novelty: comprehensive comparison of deterministic vs uncertainty-aware models with ablations on training regimes, loss functions, and calibration strategies, plus open-source code and configuration scripts for full reproducibility.",[1][2][3]
      "methodology_outline": "1) Data preparation: download Sentinel-2 Level-2A surface reflectance for 3–4 years over target city using Google Earth Engine or sentinelhub; co-register and cloud-mask time series. Build 10 m resolution seasonal composites and/or derive NDVI, EVI, and built-up indices.\n2) Labels: use the 10 m, 10-day global greenspace dynamic data cube as soft targets, and manually annotate a few thousand 256×256 patches (fractional greenspace) for Khulna using high-resolution imagery as reference.\n3) Baseline: implement a UNet or DeepLabv3+ model using PyTorch or segmentation-models-pytorch; example: create a conda environment and install torch, torchvision, segmentation-models-pytorch, albumentations, and rasterio. Train on global patches as pretraining, then fine-tune on local labels.\n4) Uncertainty-aware models: implement Monte Carlo dropout and/or deep ensembles; optionally evidential regression for continuous UGS index. Evaluate calibration (ECE), spatial error vs uncertainty, and domain generalization.\n5) Validation: compare models on local held-out areas and cross-city transfer. Produce maps and summary statistics at ward/neighborhood scales for planning use.\n6) Reproducibility: provide training/evaluation scripts, configuration files, and a README that reproduces main tables and figures from raw Sentinel-2 inputs.",[2][3]
      "suggested_datasets_and_data_plan": {
        "public_datasets": [
          "Sentinel-2 Level-2A imagery via Copernicus Open Access Hub or Google Earth Engine (open-access)",[3][2]
          "High-resolution greenspace dynamic data cube (10 m, 10-day, 2019–2022) for 1,028 cities (open-access, research license)",[2][3]
          "OpenStreetMap building/road layers for context (open-access)"
        ],
        "data_collection_plan_if_needed": "Select one Bangladeshi city (e.g., Khulna). Using high-resolution imagery (e.g., free Bing/ESRI basemaps within GIS) and field knowledge, manually delineate greenspace fraction for ~2,000–4,000 256×256 Sentinel-2 patches across seasons. Optionally collaborate with local planners or students to speed annotation and to validate coarse greenspace labels derived from the global data cube.",
        "data_size_estimate": "Training/validation: 50,000–150,000 256×256 patches from global cities plus 2,000–4,000 locally annotated patches; inference over full city extent (~10,000–30,000 patches)."
      },
      "evaluation_metrics_and_baselines": [
        "Primary metrics: mean absolute error (MAE) and RMSE of UGS index at pixel and neighborhood scales; R² at neighborhood scale; calibration metrics (ECE, reliability diagrams) for uncertainty; spatial robustness across seasons.",
        "Baselines: Rahaman et al.’s original UGS index deep model if code is available; vanilla UNet/DeepLabv3+ without uncertainty; NDVI threshold-based greenspace maps; spectral unmixing-based fractional greenspace as used in prior work."[1][3][2]
      ],
      "feasibility_assessment": {
        "estimated_time_breakdown_months": {
          "aggressive": {
            "learning": "8 months (remote sensing, CNNs, PyTorch, Earth Engine)",
            "implementation_and_experiments": "6 months (data processing, modeling, ablations, map production)",
            "analysis_and_writing": "4 months (paper + thesis + revisions)"
          },
          "conservative": {
            "learning": "13 months (including extra time for remote sensing theory and GIS tooling)",
            "implementation_and_experiments": "3 months (focus on one strong model + limited ablations)",
            "analysis_and_writing": "2 months"
          }
        },
        "hardware_and_software_needs": "Single RTX 2060–3060-class GPU (8–12 GB VRAM), 32 GB RAM, ~1–2 TB storage for imagery; Python, PyTorch, segmentation-models-pytorch, Albumentations, Rasterio, GDAL, QGIS, and optionally Google Earth Engine for pre-processing.",[3][2]
        "risk_level": "Medium – main risks are time-consuming annotation and handling large Sentinel-2 collections. Mitigate via (i) limiting to one city and a few seasons initially, (ii) leveraging existing greenspace data cubes as soft labels, and (iii) re-using supervisor’s prior aerial segmentation experience.",[1][2][3]
        "feasibility_score_0_10": 8.5
      },
      "skills_to_learn": [
        "Foundations of remote sensing and vegetation indices (NDVI/EVI)",
        "Deep learning for semantic segmentation and regression (UNet, DeepLabv3+ in PyTorch)",
        "Uncertainty-aware deep learning (Monte Carlo dropout, ensembles, calibration)",
        "Working with Sentinel-2 and Google Earth Engine or equivalent APIs",[2][3]
        "Geospatial data handling in Python (Rasterio, GDAL, Shapely)",
        "Experimental design, ablation studies, and reproducibility practices"
      ],
      "expected_deliverables": [
        "Public GitHub repository with training, evaluation, and mapping scripts plus a README that reproduces the main quantitative and qualitative results",
        "Curated local patch dataset with UGS fraction labels and clear documentation (license permitting sharing)",
        "A submission-ready Q1 manuscript targeting Urban Forestry & Urban Greening or Remote Sensing",
        "MSc thesis document expanding methodological and implementation details",
        "Final presentation for defense and, optionally, a practitioner-oriented briefing for city planners"
      ],
      "potential_q1_journals": [
        "Urban Forestry & Urban Greening",[5][6][1]
        "Remote Sensing",[7][8]
        "Remote Sensing of Environment",[9]
        "Pattern Recognition (for more methodological framing)"[10]
      ],
      "key_references_and_starting_bibliography": [
        "Rahaman G.M.A. et al., \"Deep Learning Based Automated Estimation of Urban Green Space Index from Satellite Image\" in Urban Forestry & Urban Greening – direct supervisor prior work and primary template.",[5][1]
        "Wu S. et al., \"High-resolution greenspace dynamic data cube from Sentinel-2\" – provides global 10 m, 10-day greenspace data cube and code on Google Earth Engine.",[3][2]
        "Overstory & Husqvarna HUGSI project blog on quantifying greenness of cities with satellite imagery and AI – example of applied UGS mapping at scale.",[4]
        "Remote Sensing journal scope and metrics – to understand expectations for remote sensing methodology papers."[8][7]
      ],
      "first_3_milestones_with_deadlines": [
        {
          "milestone": "Literature review on UGS mapping and uncertainty-aware segmentation + Sentinel-2 data pipeline prototype",
          "deadline_months_from_start": 3
        },
        {
          "milestone": "Baseline UNet/DeepLabv3+ trained on global + local data; initial UGS maps for target city",
          "deadline_months_from_start": 8
        },
        {
          "milestone": "Uncertainty-aware model completed, ablation studies finished, and first full paper draft",
          "deadline_months_from_start": 14
        }
      ],
      "quality_checks_for_q1": "Ensure clear methodological novelty beyond prior UGS work (e.g., rigorous uncertainty modeling and calibration), solid cross-city experiments with statistically sound comparisons, ablation studies on model components and training regimes, transparent reporting of data sources and pre-processing, code and configuration files that reproduce main tables and maps, careful error and uncertainty analysis, and discussion of limitations (e.g., cloud contamination, transferability) and policy implications for urban planning."
    },
    {
      "title": "Semi-Supervised Urban Green Segmentation for Low-Resource Cities",
      "short_abstract": "This topic focuses on semi-supervised domain adaptation for urban greenspace segmentation in low-resource cities where only a small amount of labeled data is available. Using Sentinel-2 imagery and global greenspace data cubes as weak supervision, a student–teacher or consistency-regularized segmentation network will be trained on well-studied cities and adapted to Bangladeshi cities (e.g., Khulna, Dhaka peripheries). The project will curate a modest but high-quality benchmark of manually labeled greenspace masks in at least one Bangladeshi city and will systematically compare semi-supervised techniques (pseudo-labeling, Mean Teacher, FixMatch-style consistency). The contributions include both a dataset component and a methodological evaluation tailored to urban green planning and SDG 11, with a target Q1 journal submission in urban greening or remote sensing.",[2][3]
      "background_and_motivation": "Most state-of-the-art urban greenspace mapping methods are developed and validated in data-rich Global North cities, while low- and middle-income cities lack task-specific labeled datasets. This domain gap undermines the utility of off-the-shelf models for Bangladeshi cities.\nRahaman’s prior work on aerial segmentation and UGS index estimation shows that deep learning can capture complex urban patterns from satellite images. However, collecting dense manual labels in every new city is expensive.\nSemi-supervised and domain adaptation methods can leverage abundant unlabeled imagery and weak labels (e.g., from global greenspace cubes) to reduce annotation requirements, but have not been systematically studied for UGS segmentation in South Asian contexts.\nThis topic aligns tightly with the supervisor’s remote sensing work while adding a clear methodological and dataset contribution on semi-supervised learning tailored to low-resource urban environments.",[11][4][1][3][2]
      "research_questions_or_hypotheses": [
        "RQ1: How much manually labeled data is required to reach acceptable UGS segmentation performance in a new city using semi-supervised learning?",
        "RQ2: Which semi-supervised strategy (pseudo-labeling, Mean Teacher, consistency regularization) yields the best trade-off between accuracy and stability for Sentinel-2 based UGS segmentation?",
        "RQ3: Does combining weak labels from a global greenspace cube with a small set of accurate local labels improve performance over either source alone?",[3][2]
        "RQ4: Can the curated Bangladeshi urban greenspace dataset serve as a useful benchmark for future semi-supervised segmentation research?"
      ],
      "novel_contribution": "Dataset novelty: creation and public release (subject to institutional approval) of a pixel-level urban greenspace segmentation benchmark for at least one Bangladeshi city, with detailed annotation protocol and strong baselines. Methodological novelty: systematic comparison and tuning of semi-supervised segmentation strategies for Sentinel-2 UGS mapping, including combinations of strong and weak labels, targeting low-resource settings. Empirical novelty: detailed learning curve analysis (performance vs. labeled fraction) and transfer experiments from data-rich foreign cities to Bangladeshi cities, which is largely unexplored in current UGS literature.",[2][3]
      "methodology_outline": "1) Data assembly: collect multi-season Sentinel-2 composites for several representative cities (European/American cities from existing greenspace cube and one Bangladeshi city). Preprocess to harmonized bands and resolution.\n2) Label strategy: use the global greenspace dynamic cube as soft labels in source cities, and manually annotate 1,000–2,000 patches for the target city into \"green\"/\"non-green\" (or fractional greenspace) using high-resolution imagery and local knowledge.\n3) Baseline model: implement a standard UNet/DeepLabv3+ in PyTorch. Train a fully supervised baseline on all local labels to establish an upper bound. Simple baseline command structure: set up a conda environment, install torch, torchvision, segmentation-models-pytorch, and train with a standard cross-entropy/Dice loss.\n4) Semi-supervised schemes: implement pseudo-labeling, Mean Teacher, and a FixMatch-style consistency method, combining strong local labels, weak cube labels, and large unlabeled pools.\n5) Evaluation: compare methods on held-out local test tiles using IoU/F1 and robustness across seasons. Analyze performance vs. labeled fraction and present ablations on augmentation strength and unlabeled data volume.\n6) Packaging: publish dataset (if permitted), code, and a detailed benchmark report to encourage reuse by the community.",[3][2]
      "suggested_datasets_and_data_plan": {
        "public_datasets": [
          "Sentinel-2 time series for multiple global cities (open-access via Copernicus or Google Earth Engine)",[2][3]
          "High-resolution greenspace dynamic data cube for weak labels in source cities (open-access research data)"[3][2]
        ],
        "data_collection_plan_if_needed": "For the target Bangladeshi city, download cloud-filtered Sentinel-2 composites for 2–4 representative seasons. Define a grid of 256×256 tiles and randomly sample 1,000–2,000 tiles for annotation. Annotate each tile into greenspace vs non-greenspace (or fractional cover) using high-resolution imagery and local knowledge. Document annotation protocol (e.g., minimum patch size, treatment of rooftop greenery). Optionally crowdsource annotations among classmates after a training session.",
        "data_size_estimate": "Source domain: 50,000–100,000 labeled/weakly-labeled patches from global cities. Target domain: 1,000–2,000 strongly labeled patches plus 10,000–30,000 unlabeled patches."
      },
      "evaluation_metrics_and_baselines": [
        "Primary metrics: mean Intersection over Union (mIoU) and F1-score for greenspace class; overall accuracy; robustness across seasons (per-season IoU).",
        "Baselines: fully supervised UNet/DeepLabv3+ trained only on local labels; model trained only on global cube labels; NDVI threshold method; simple domain adaptation baseline (e.g., fine-tuning from source-only model)."
      ],
      "feasibility_assessment": {
        "estimated_time_breakdown_months": {
          "aggressive": {
            "learning": "8 months (semi-supervised learning, segmentation, remote sensing basics)",
            "implementation_and_experiments": "6 months (dataset creation, model training, ablations)",
            "analysis_and_writing": "4 months (paper + thesis)"
          },
          "conservative": {
            "learning": "13 months (including extended time to master semi-supervised methods)",
            "implementation_and_experiments": "3 months (focus on two best semi-supervised schemes)",
            "analysis_and_writing": "2 months"
          }
        },
        "hardware_and_software_needs": "Single RTX 2060–3060-class GPU, 32 GB RAM, 1 TB storage; Python, PyTorch, segmentation-models-pytorch, Albumentations, Rasterio, GDAL, QGIS, Earth Engine or equivalent.",
        "risk_level": "Medium – risk is mainly annotation workload and tuning semi-supervised methods. Mitigate by limiting scope to one target city, using a small but well-annotated set, and focusing on 2–3 semi-supervised methods with strong baselines.",
        "feasibility_score_0_10": 8
      },
      "skills_to_learn": [
        "Remote sensing data handling and Sentinel-2 processing",
        "Semantic segmentation with UNet/DeepLab in PyTorch",
        "Semi-supervised learning methods (pseudo-labeling, Mean Teacher, consistency regularization)",
        "Annotation protocol design and quality control",
        "Experimental design (learning curves, ablations) and result visualization"
      ],
      "expected_deliverables": [
        "Urban greenspace segmentation benchmark for one Bangladeshi city (if institutional and ethical approvals permit sharing)",
        "PyTorch codebase implementing baselines and semi-supervised methods with reproducible scripts",
        "One Q1-targeted manuscript focused on semi-supervised UGS segmentation and dataset release",
        "MSc thesis detailing data curation and method comparison",
        "Oral defense and possible local workshop with urban planners to demonstrate maps"
      ],
      "potential_q1_journals": [
        "Urban Forestry & Urban Greening",[6][12][5]
        "Remote Sensing",[7][8]
        "Remote Sensing of Environment"[9]
      ],
      "key_references_and_starting_bibliography": [
        "Rahaman G.M.A. et al., deep learning-based aerial image segmentation and UGS work – supervisor’s alignment and conceptual baseline.",[11][1]
        "Wu S. et al., greenspace dynamic data cube from Sentinel-2 – for weak labels and methodology inspiration.",[2][3]
        "Urban Forestry & Urban Greening journal scope and expectations – to align framing and contributions.",[6][5]
        "Selected semi-supervised segmentation papers (e.g., Mean Teacher, FixMatch) from computer vision literature (to be gathered via further search)."
      ],
      "first_3_milestones_with_deadlines": [
        {
          "milestone": "Complete literature review on UGS mapping and semi-supervised segmentation; decide on target city and annotation protocol",
          "deadline_months_from_start": 3
        },
        {
          "milestone": "Finish manual annotation of local dataset and train fully supervised baseline models",
          "deadline_months_from_start": 8
        },
        {
          "milestone": "Implement 2–3 semi-supervised methods, run main experiments, and draft key sections of the paper",
          "deadline_months_from_start": 14
        }
      ],
      "quality_checks_for_q1": "Ensure the dataset is clearly described (geographic extent, labeling protocol, class definitions), provide competitive baselines and semi-supervised comparisons with proper statistical reporting, include ablations on labeled fraction and augmentation, open-source code and (where allowed) data, and discuss policy-relevant implications (e.g., how reduced annotation needs enable wider monitoring in low-resource cities) and limitations (e.g., reliance on Sentinel-2 resolution)."
    },
    {
      "title": "Explainable Deep Learning for OCT-Based AMD and DR Detection",
      "short_abstract": "This thesis will develop explainable deep learning models for classifying retinal diseases such as age-related macular degeneration (AMD) and diabetic macular edema (DME) from optical coherence tomography (OCT) images, building on the supervisor’s prior work on CNN interpretability in ophthalmic imaging. Using public OCT datasets (e.g., the Kermany/Mendeley dataset with CNV, DME, drusen, and normal classes), the project will implement baseline CNN and transformer models and extend Advanced Grad-CAM++-style attribution to produce more localized, pathology-aware visual explanations. Quantitative evaluation of explanations (overlap with expert-annotated regions where available) and robustness tests will be emphasized. The end goal is an interpretable diagnostic pipeline suitable for Q1 medical imaging or ophthalmology informatics journals.",[13][14][15][16][17][1]
      "background_and_motivation": "Deep learning has shown excellent performance in OCT-based retinal disease detection, with multiple studies achieving very high accuracies on public datasets. However, such models are often criticized as \"black boxes\", which limits clinician trust and hinders clinical adoption.\nRahaman and collaborators have already contributed to interpretability in retinal imaging, including work on interpreting CNN decisions for OCT-based AMD detection and Advanced Grad-CAM++ for diabetic retinopathy. Extending these ideas to modern architectures (e.g., transformers) and newer OCT datasets is a natural and supervisor-aligned direction.\nRecent surveys on attribution-based XAI in computer vision highlight the need for more rigorous evaluation of explanations and for domain-specific metrics. OCT imaging, with its layered retinal structures, is an ideal testbed for localization-based explainability.\nThis topic combines retinal imaging, explainable CNNs, and the supervisor’s existing expertise, while relying entirely on public datasets and modest compute.",[14][15][17][18][19][20][13][1]
      "research_questions_or_hypotheses": [
        "RQ1: Can Advanced Grad-CAM++-style methods be adapted or improved for OCT architectures (CNNs and vision transformers) to yield sharper and more clinically meaningful explanations?",[13][14][1]
        "RQ2: How do different attribution methods (Grad-CAM++, Advanced Grad-CAM++, integrated gradients, occlusion) compare in localization accuracy against expert-annotated or proxy lesion regions?",
        "RQ3: Does explicitly training with explanation-guided losses (e.g., encouraging focus on retinal layers) improve both classification performance and explanation quality?",
        "RQ4: How robust are explanations to distribution shifts such as different OCT devices or moderate image noise?"
      ],
      "novel_contribution": "Methodological novelty: extension of Advanced Grad-CAM++ (previously used for DR fundus images) to OCT-based models, potentially including transformer backbones and explanation-guided loss terms. Empirical novelty: systematic, quantitative comparison of multiple attribution methods on one or more public OCT datasets with lesion or layer annotations, plus robustness tests under realistic perturbations. Practical novelty: a reproducible pipeline (code + scripts) that ophthalmology researchers can re-use to audit OCT DL models.",[14][13][1]
      "methodology_outline": "1) Data: use publicly available OCT datasets such as the Kermany/Mendeley OCT dataset (CNV, DME, drusen, normal) and optionally newer open datasets like OCTDL and OCTID with detailed labels. Perform standardized preprocessing (resizing, normalization) and train/validation/test splits consistent with prior work.\n2) Baseline models: implement or re-use strong CNN baselines (e.g., ResNet50, DenseNet, EfficientNet) and optionally a vision transformer (e.g., ViT or MobileViT) in PyTorch. Simple starting point: follow standard transfer learning workflows (freeze backbone, fine-tune last layers, then unfreeze deeper layers).\n3) XAI methods: implement Grad-CAM, Grad-CAM++, Advanced Grad-CAM++ (building on supervisor’s prior work), integrated gradients, and simple occlusion maps.\n4) Evaluation of explanations: where lesion or region annotations exist (e.g., for some OCT datasets), compute overlap metrics between explanation maps and lesion regions; otherwise use sanity checks, region perturbation tests, and qualitative ophthalmologist feedback from literature.\n5) Improvements: explore explanation-guided regularization (e.g., penalizing focus outside retinal layers) and architecture tweaks (e.g., skip connections preserving spatial detail).\n6) Packaging: write training and attribution scripts with configuration files so that others can reproduce both accuracy and explanation figures.",[15][16][17][19][20][21][22][13][14][1]
      "suggested_datasets_and_data_plan": {
        "public_datasets": [
          "Kermany/Mendeley labeled OCT dataset (CNV, DME, drusen, normal; open-access)",[17][19][15]
          "OCTDL open-access OCT dataset with multiple retinal pathologies and labels",[16]
          "OCTID dataset (OCT images with several retinal diseases, some with delineations)"[16]
        ],
        "data_collection_plan_if_needed": "No new data collection is strictly necessary. Optionally, if a local clinician collaborator is available, annotate a small subset of OCT B-scans for lesion regions to provide an extra test set for explanation quality; this could be done in a simple annotation tool with clear labeling guidelines.",
        "data_size_estimate": "On the order of 80,000–200,000 OCT B-scans depending on dataset choice (e.g., ~84k images in the Kermany dataset alone)."[19][20][15][17]
      },
      "evaluation_metrics_and_baselines": [
        "Primary classification metrics: accuracy, sensitivity/recall, specificity, F1-score, and AUC per class.",
        "Explanation metrics: intersection-over-union or Dice between attribution maps and lesion masks where available; pointing game accuracy; deletion/insertion curves; sanity checks as recommended in XAI literature.",[18]
        "Baselines: standard Grad-CAM/Grad-CAM++ on CNN baselines; existing interpretability approaches from recent OCT studies."[20][23][24][19]
      ],
      "feasibility_assessment": {
        "estimated_time_breakdown_months": {
          "aggressive": {
            "learning": "8 months (OCT imaging basics, DL for medical imaging, XAI methods)",
            "implementation_and_experiments": "6 months (model training, attribution methods, ablations)",
            "analysis_and_writing": "4 months (paper + thesis)"
          },
          "conservative": {
            "learning": "13 months (including extra time to deeply understand OCT and XAI theory)",
            "implementation_and_experiments": "3 months (focus on 1–2 strong models and a core set of XAI methods)",
            "analysis_and_writing": "2 months"
          }
        },
        "hardware_and_software_needs": "Single RTX 2060–3060-class GPU, 32 GB RAM; Python, PyTorch, MONAI or similar medical imaging library, Captum or custom XAI implementations, standard scientific Python stack.",
        "risk_level": "Low-to-medium – main risks are overfitting and subjective evaluation of explanations. Mitigate with careful dataset splits, regularization, and quantitative explanation metrics, plus grounding in supervisor’s prior interpretability work.",[13][14][1]
        "feasibility_score_0_10": 9
      },
      "skills_to_learn": [
        "Basics of OCT imaging and common retinal pathologies (AMD, DME, CNV, drusen)",
        "Deep CNN and transformer architectures for image classification",
        "Explainable AI techniques (Grad-CAM family, integrated gradients, perturbation tests)",[18]
        "Medical imaging-specific evaluation protocols and common pitfalls",
        "Reproducible ML practices and scripting for large experiments"
      ],
      "expected_deliverables": [
        "Code repository implementing OCT classification models and multiple XAI methods with scripts to reproduce key figures and tables",
        "Pre-trained models for at least one OCT dataset with documented performance",
        "A submission-ready Q1 paper targeting a medical imaging or ophthalmology informatics journal (e.g., Medical Image Analysis, Biomedical Signal Processing and Control for imaging-focused work)",[25][26][27][28][10]
        "Full MSc thesis",
        "Presentation with demo of interactive OCT explanation visualizations"
      ],
      "potential_q1_journals": [
        "Medical Image Analysis",[26][10][25]
        "Biomedical Signal Processing and Control (imaging and signal focus)",[27][28]
        "Computational Visual Media (if emphasizing XAI methodology)"[29][10]
      ],
      "key_references_and_starting_bibliography": [
        "Rahaman G.M.A. and colleagues, work on understanding CNN decisions in OCT-based AMD detection and Advanced Grad-CAM++ for DR – supervisor’s direct interpretability work.",[14][13][1]
        "Attribution-based XAI methods in computer vision survey – comprehensive overview of gradient- and perturbation-based methods.",[18]
        "Kermany et al., \"Deep learning-based classification and referral of treatable human diseases\" and associated OCT dataset – primary OCT dataset and baseline.",[15][17]
        "OCTDL dataset paper introducing an open-access OCT dataset with multiple pathologies and discussion of integrating multiple datasets."[16]
      ],
      "first_3_milestones_with_deadlines": [
        {
          "milestone": "Survey OCT disease classification and XAI literature; reproduce a basic CNN baseline on the Kermany/Mendeley dataset",
          "deadline_months_from_start": 3
        },
        {
          "milestone": "Implement Grad-CAM, Grad-CAM++, and Advanced Grad-CAM++ on chosen models and obtain initial explanation visualizations",
          "deadline_months_from_start": 8
        },
        {
          "milestone": "Complete quantitative explanation evaluation (overlap/robustness) and draft main paper sections",
          "deadline_months_from_start": 14
        }
      ],
      "quality_checks_for_q1": "Demonstrate competitive or clearly explained performance relative to recent OCT classification works; provide rigorous, multi-metric evaluation of explanations (not only qualitative images); include ablations (e.g., different architectures, training regimes, XAI methods); ensure data splits, pre-processing, and hyperparameters are fully documented; release code and trained weights (where licenses permit); include thorough discussion of clinical relevance and limitations; address ethical aspects of automated diagnosis and the limits of XAI for medical decision support."
    },
    {
      "title": "Semi-Supervised Retinal Vessel Segmentation and Registration for DR Analysis",
      "short_abstract": "This topic aims to jointly improve retinal vessel segmentation and image registration using semi-supervised learning, exploiting the supervisor’s strong background in retinal vessel segmentation and registration. Using public fundus datasets such as DRIVE, STARE, CHASEDB1, HRF, and IDRiD, the project will develop a dual-task network that segments vessels and learns features for rigid/non-rigid registration. Semi-supervised techniques (e.g., pseudo-labeling, consistency losses) will leverage unlabeled or weakly labeled images to reduce annotation dependence. The outcome will be improved vessel maps and registration performance, with applications to longitudinal DR monitoring and multi-device alignment, and a Q1-targetable contribution to medical image analysis or biomedical signal processing.",[30][31][32][33][34][13][1]
      "background_and_motivation": "Accurate retinal vessel segmentation and registration are fundamental for diabetic retinopathy (DR) analysis, progression monitoring, and multi-modal fusion. Rahaman and co-authors have proposed innovative methods for retinal blood vessel segmentation and image registration using log-polar transforms and bifurcation descriptors.\nWhile classic methods perform well on small public datasets, deep learning has now become dominant; however, many methods are purely supervised and depend on dense vessel labels, which are time-consuming to obtain.\nSemi-supervised learning can exploit large collections of unlabeled fundus images, which are relatively easy to acquire in screening programs, to improve segmentation and registration robustness. Yet, systematic exploration of semi-supervised joint vessel segmentation and registration remains limited.\nThis project builds directly on the supervisor’s retinal work and leverages multiple open datasets, making it both aligned and feasible within 1.5 years.",[32][34][30][13][1]
      "research_questions_or_hypotheses": [
        "RQ1: Can a joint vessel segmentation and representation-learning architecture improve downstream fundus registration compared to separate pipelines?",[13][1]
        "RQ2: How much performance gain can semi-supervised learning bring when labeled vessel masks are scarce but many unlabeled fundus images are available?",
        "RQ3: Does better vessel segmentation (especially of thin vessels) translate into more accurate and robust registration for DR progression analysis?",
        "RQ4: Can the learned features generalize across datasets (DRIVE, STARE, CHASEDB1, IDRiD) and imaging conditions?"[31][34][30][32]
      ],
      "novel_contribution": "Methodological novelty: a dual-task network that performs vessel segmentation while learning registration-friendly descriptors (e.g., for bifurcation points), trained with semi-supervised objectives. Empirical novelty: cross-dataset evaluation and semi-supervised experiments quantifying gains from unlabeled data across multiple canonical retinal datasets. Practical novelty: open-source implementation of a semi-supervised vessel segmentation and registration pipeline suitable for DR research.",[33][34][30][31][32]
      "methodology_outline": "1) Data: aggregate canonical vessel segmentation datasets (DRIVE, STARE, CHASEDB1, HRF) and DR segmentation datasets like IDRiD for lesions and additional vessels. Standardize resolution, field-of-view cropping, and color normalization.\n2) Baseline: implement a UNet/Double-UNet-style vessel segmentation model and a classical registration method (e.g., log-polar transform with bifurcation-based descriptors, possibly reusing ideas from supervisor’s prior work).\n3) Joint model: design a network with a segmentation head and a feature embedding head; use these features to detect bifurcations and estimate transformations between image pairs.\n4) Semi-supervised training: apply consistency regularization and/or pseudo-labeling on unlabeled fundus images to refine segmentation, and potentially self-supervised contrastive objectives for registration features.\n5) Evaluation: measure segmentation performance (AUC, sensitivity, specificity, F1, Dice) on standard test sets, and registration accuracy (landmark error, overlap of key regions) on datasets with corresponding pairs.\n6) Implementation: use PyTorch or MONAI. Provide training scripts and configuration files to reproduce all experiments.",[34][30][31][32][33][1][13]
      "suggested_datasets_and_data_plan": {
        "public_datasets": [
          "DRIVE, STARE, CHASEDB1, HRF retinal vessel datasets (open-access)",[30][32][34]
          "IDRiD (Indian Diabetic Retinopathy Image Dataset) for DR lesions and additional vessel structure",[31][33]
          "Additional unlabeled fundus images from DR screening datasets such as EyePACS, APTOS, Messidor where permitted"[35][34]
        ],
        "data_collection_plan_if_needed": "New data collection is not essential. If access to local DR screening images is available under an approved protocol, these can be added as unlabeled images for semi-supervised training, ensuring all images are de-identified and ethics approvals are obtained.",
        "data_size_estimate": "Labeled: a few hundred fundus images with vessel masks from DRIVE/CHASEDB1/STARE/HRF; Unlabeled: thousands of additional fundus images from DR screening datasets."[32][34][35][30]
      },
      "evaluation_metrics_and_baselines": [
        "Primary segmentation metrics: AUC, sensitivity, specificity, Dice/F1 for vessel vs background; thin vessel sensitivity.",[30][32]
        "Registration metrics: average landmark error, percentage of correctly matched bifurcation points, overlap of regions-of-interest after registration.",
        "Baselines: classical vessel segmentation + log-polar registration methods from supervisor’s work; supervised-only UNet segmentation; separate registration network trained on keypoints."[1][13]
      ],
      "feasibility_assessment": {
        "estimated_time_breakdown_months": {
          "aggressive": {
            "learning": "8 months (fundus imaging, DR basics, DL segmentation and registration)",
            "implementation_and_experiments": "6 months (model design, training, cross-dataset evaluation)",
            "analysis_and_writing": "4 months"
          },
          "conservative": {
            "learning": "13 months (including more time for registration literature and coding)",
            "implementation_and_experiments": "3 months",
            "analysis_and_writing": "2 months"
          }
        },
        "hardware_and_software_needs": "Single RTX 2060–3060-class GPU, 32 GB RAM; Python, PyTorch or MONAI, OpenCV, SimpleITK (for registration experiments), standard ML libraries.",
        "risk_level": "Medium – main challenges are stabilizing joint training and semi-supervised objectives. Mitigate via starting from strong independent baselines, incrementally adding semi-supervision, and limiting to a subset of datasets if time becomes tight.",
        "feasibility_score_0_10": 8
      },
      "skills_to_learn": [
        "Retinal anatomy and DR progression, focusing on vessel changes",
        "Deep learning for segmentation (UNet, Double-UNet) and representation learning",
        "Image registration fundamentals and feature-based methods",
        "Semi-supervised learning (consistency losses, pseudo-labeling)",
        "Practical ML engineering: data loaders, experiment management, and reproducible pipelines"
      ],
      "expected_deliverables": [
        "Joint vessel segmentation and registration codebase with reproducible scripts",
        "Experimental benchmark across multiple vessel datasets with and without semi-supervision",
        "Manuscript focusing on semi-supervised joint vessel segmentation and registration in DR analysis",
        "MSc thesis report",
        "Defense presentation with visual demos of registration and vessel maps"
      ],
      "potential_q1_journals": [
        "Medical Image Analysis",[10][25][26]
        "Biomedical Signal Processing and Control",[28][27]
        "Computerized Medical Imaging and Graphics"[10]
      ],
      "key_references_and_starting_bibliography": [
        "Saha S. et al., retinal image registration using log-polar transform and robust bifurcation descriptors – supervisor’s registration work.",[13][1]
        "Sayed M.A. et al., innovative approaches for retinal vessel segmentation and semi-supervised methods.",[30][1][13]
        "Comprehensive survey on automated DR detection and list of DR datasets.",[34][32]
        "IDRiD dataset paper describing pixel-level annotations for DR."[33][31]
      ],
      "first_3_milestones_with_deadlines": [
        {
          "milestone": "Survey retinal vessel segmentation and registration literature; consolidate DRIVE/CHASEDB1/STARE/HRF/IDRiD datasets into a unified format",
          "deadline_months_from_start": 3
        },
        {
          "milestone": "Implement and validate supervised vessel segmentation and classical registration baselines",
          "deadline_months_from_start": 8
        },
        {
          "milestone": "Integrate semi-supervised and joint-learning strategies; complete main experiments and initial paper draft",
          "deadline_months_from_start": 14
        }
      ],
      "quality_checks_for_q1": "Show clear improvements over strong supervised baselines or, if performance is comparable, provide detailed semi-supervised analyses (label-efficiency curves, robustness). Include cross-dataset generalization experiments, comprehensive ablations on the joint-learning design, and code/data documentation. Address clinical relevance (e.g., impact on DR progression analysis) and ethical considerations around using retinal images, including anonymization and potential biases across populations."
    },
    {
      "title": "Interpretable Foundation-Model-Based DR Screening for Handheld Fundus Cameras",
      "short_abstract": "This thesis will adapt a retinal foundation model (e.g., RETFound) for interpretable diabetic retinopathy (DR) screening from handheld fundus camera images in low-resource settings, using public datasets such as APTOS-2019, ODIR-5K, EyePACS, IDRiD, and the mBRSET handheld fundus dataset. Building on recent work in federated and privacy-preserving DR learning, the project will fine-tune a foundation model on mixed device data and develop explanation methods (e.g., Advanced Grad-CAM++) tailored to DR lesions. The study will emphasize domain shift (high-end vs handheld devices), fairness across subgroups, and interpretability, targeting Q1 medical imaging or ophthalmology informatics venues.",[36][37][38][35][33][34][14]
      "background_and_motivation": "Low-cost handheld fundus cameras are increasingly used for DR screening in low- and middle-income countries, but images often have lower quality and more artifacts than those from tabletop devices. Foundation models such as RETFound provide strong pretrained representations but require careful fine-tuning and evaluation in these settings.\nRahaman’s research includes DR lesion detection from multispectral retinal images and interpretability-focused work in ophthalmic imaging, making this topic well aligned with his expertise.\nRecent datasets like mBRSET provide handheld fundus photos from high-burden settings, while classical datasets (EyePACS, APTOS, IDRiD, Messidor) provide diverse DR imagery. Combining these to study domain adaptation, interpretability, and fairness is both timely and feasible.\nThis topic connects DR screening, foundation models, explainability, and LMIC-focused deployment questions, providing multiple pathways to Q1 publication.",[37][38][35][36][31][33][34][14][1][13]
      "research_questions_or_hypotheses": [
        "RQ1: How well does a retinal foundation model (e.g., RETFound) transfer to handheld fundus camera images compared to standard CNN baselines?",[36][37][14]
        "RQ2: Can explanation methods (e.g., Advanced Grad-CAM++) highlight DR lesions on handheld images in a way that aligns with ophthalmological expectations?",[14][1][13]
        "RQ3: What is the impact of cross-dataset training (EyePACS, APTOS, ODIR, IDRiD, mBRSET) on performance and fairness across device types and demographic subgroups?",[35][37][33][34]
        "RQ4: How do simple privacy-preserving or federated training strategies affect performance when data cannot be centrally pooled?"[38][36]
      ],
      "novel_contribution": "Methodological novelty: adaptation of a retinal foundation model to handheld camera DR screening with explicit interpretability and fairness analysis; integration of explanation methods into the evaluation loop. Empirical novelty: multi-dataset benchmark (EyePACS, APTOS-2019, ODIR-5K, IDRiD, mBRSET) focusing on cross-device and cross-population generalization with both performance and explanation quality metrics. Practical novelty: open, reproducible training/evaluation code and recommendations for deploying interpretable DR AI in handheld-based screening programs.",[37][31][33][34][35][36]
      "methodology_outline": "1) Data harmonization: collect and standardize multiple DR datasets (APTOS-2019, IDRiD, Messidor-2, EyePACS slices if accessible, ODIR-5K, mBRSET) regarding grading scale and image preprocessing. Define consistent DR categories (e.g., no/mild vs referable DR).\n2) Baselines: implement a standard EfficientNet/ResNet-based classifier and fine-tune on pooled data. Use strong data augmentation and class-balancing techniques.\n3) Foundation model adaptation: obtain RETFound or similar retinal foundation model (weights from public sources where licenses allow) and fine-tune with parameter-efficient techniques (e.g., LoRA) to limit GPU memory requirements.\n4) Interpretability: integrate Advanced Grad-CAM++ and other attribution methods to generate lesion-level explanations. Where lesion annotations exist (IDRiD), compute alignment metrics.\n5) Domain and fairness analysis: perform experiments stratified by dataset/device and relevant demographics where available (e.g., from mBRSET, AI-READI). Evaluate performance gaps and explanation differences.\n6) Optional privacy/federation experiment: simulate federated fine-tuning across datasets using a simple FedAvg setup and compare to centralized training.",[38][31][33][34][35][36][37][18][14][1][13]
      "suggested_datasets_and_data_plan": {
        "public_datasets": [
          "APTOS-2019 Blindness Detection fundus dataset (open-access competition data)",[39][34][35]
          "EyePACS DR dataset (accessible via Kaggle competition archives; semi-open)",[40][34][35]
          "Messidor-2 DR dataset (research-available)",[34][35]
          "IDRiD dataset with lesion annotations",[31][33]
          "ODIR-5K (ODIR) multi-disease retinal dataset (semi-open)",[36]
          "mBRSET handheld fundus dataset for DR and demographic prediction"[37]
        ],
        "data_collection_plan_if_needed": "New collection is optional. If a local screening clinic or ophthalmology department is accessible, collect a small set of handheld images under IRB/ethics approval and informed consent to use as an external test set for qualitative evaluation, ensuring strict de-identification.",
        "data_size_estimate": "Total of ~10,000–60,000 images depending on dataset access (EyePACS alone has >30,000 images; APTOS, IDRiD, Messidor, ODIR, and mBRSET add several thousand more)."[33][35][31][34][37]
      },
      "evaluation_metrics_and_baselines": [
        "Primary classification metrics: per-class accuracy, sensitivity, specificity, F1-score, and AUC; macro-averaged metrics for imbalanced data.",
        "Interpretability metrics: lesion-overlap where annotations exist (e.g., IDRiD), deletion/insertion metrics, qualitative assessment of lesion focus.",
        "Domain/fairness metrics: per-dataset and per-device performance; subgroup performance differences where demographic labels are available.",[38][37]
        "Baselines: non-foundation CNN trained from scratch or with ImageNet pretraining; previous DR screening pipelines summarized in recent surveys."[41][32][34]
      ],
      "feasibility_assessment": {
        "estimated_time_breakdown_months": {
          "aggressive": {
            "learning": "8 months (DR clinical basics, foundation models, fairness/interpretability)",
            "implementation_and_experiments": "6 months (data harmonization, baseline vs foundation model, interpretability and fairness experiments)",
            "analysis_and_writing": "4 months"
          },
          "conservative": {
            "learning": "13 months (extra time for mastering foundation models and fairness concepts)",
            "implementation_and_experiments": "3 months",
            "analysis_and_writing": "2 months"
          }
        },
        "hardware_and_software_needs": "Single RTX 3060-class GPU with 12 GB VRAM, 32 GB RAM; Python, PyTorch, possibly Hugging Face ecosystem for foundation model loading; MONAI or similar; Captum or custom XAI code.",
        "risk_level": "Medium – obtaining and harmonizing multiple datasets and foundation model weights can be non-trivial. Mitigate by starting with APTOS + IDRiD only, then progressively adding datasets; keep model size moderate and use parameter-efficient finetuning.",
        "feasibility_score_0_10": 7.5
      },
      "skills_to_learn": [
        "Diabetic retinopathy grading and handheld fundus imaging characteristics",
        "Deep learning for multi-dataset training and domain adaptation",
        "Working with retinal foundation models (RETFound or similar) and parameter-efficient finetuning",[36][14]
        "Fairness and subgroup analysis in medical AI",
        "Interpretability techniques and integration into evaluation pipelines"
      ],
      "expected_deliverables": [
        "Codebase for multi-dataset DR training and evaluation using a foundation model, with clear scripts to reproduce experiments",
        "Fine-tuned RETFound (or similar) model for handheld DR screening with documented performance and explanation examples",
        "A Q1-ready manuscript emphasizing interpretable foundation-model-based DR screening across devices and populations",
        "MSc thesis document",
        "Defense presentation including qualitative case studies of handheld images and explanations"
      ],
      "potential_q1_journals": [
        "Medical Image Analysis",[25][26][10]
        "Biomedical Signal Processing and Control",[27][28]
        "Radiology: Artificial Intelligence",[42][25]
        "Frontiers in Endocrinology (for DR-focused AI, depending on framing)"[14]
      ],
      "key_references_and_starting_bibliography": [
        "Rahaman G.M.A. and collaborators, works on DR lesion detection and interpretability in ophthalmic imaging.",[1][13][14]
        "mBRSET handheld retina fundus dataset description (portable retina photos for DR and demographic prediction).",[37]
        "Homomorphic encryption-based federated learning for DR classification using RETFound features and APTOS/ODIR-5K.",[36]
        "Recent DR screening surveys and datasets overview, including EyePACS, APTOS, IDRiD, Messidor, DDR, DRIVE, STARE, CHASEDB1."[32][34]
      ],
      "first_3_milestones_with_deadlines": [
        {
          "milestone": "Survey DR screening, foundation models, and interpretability literature; set up APTOS + IDRiD data pipelines and train initial CNN baseline",
          "deadline_months_from_start": 3
        },
        {
          "milestone": "Fine-tune a foundation model on core datasets and integrate Advanced Grad-CAM++ explanations",
          "deadline_months_from_start": 8
        },
        {
          "milestone": "Extend to multi-dataset, cross-device evaluation (including handheld data) and fairness analysis; draft main paper sections",
          "deadline_months_from_start": 14
        }
      ],
      "quality_checks_for_q1": "Demonstrate competitive performance across multiple datasets and devices, with clear evidence that foundation-model adaptation provides value beyond standard CNN baselines; provide detailed interpretability and fairness analyses; release code and detailed experimental settings; discuss ethical and privacy considerations in multi-center DR datasets (consent, de-identification, data sharing), and limitations of applying such models in real clinics."
    },
    {
      "title": "Bangladesh Diabetic Foot Ulcer Image Dataset and CNN Severity Grading",
      "short_abstract": "This thesis will create and release (subject to approvals) a curated photographic dataset of diabetic foot ulcers (DFU) from Bangladeshi clinics and develop baseline deep learning models for ulcer detection and severity grading. Building on Rahaman’s work on diabetic foot ulcer detection using CNNs, the project will focus on low-cost acquisition (smartphone images), rigorous annotation (severity, localization), and strong baselines with explainable visualizations. Public DFU datasets are limited and often lack LMIC representation; this dataset would fill a gap and support future research. The outcome includes a dataset paper plus a methodological paper targeting Q1 biomedical imaging or biomedical signal processing journals.",[1]
      "background_and_motivation": "Diabetic foot ulcers are a major cause of morbidity and amputation in people with diabetes, particularly in low- and middle-income countries. Early detection and severity grading can significantly improve outcomes, but specialist availability is limited.\nRahaman and colleagues have already worked on CNN-based DFU detection, but public datasets that reflect Bangladeshi or broader South Asian populations remain scarce. Existing DFU datasets are often small, controlled, or geographically biased.\nCreating a well-documented, anonymized DFU image dataset with severity labels and baseline models would provide a valuable benchmark for the community and closely aligns with the supervisor’s medical imaging and CNN expertise.\nThe project is data-collection heavy, but the image modality (smartphone photos) and lesion type (external) are practical for a motivated MSc student with clinical collaboration and ethics clearance.",[1]
      "research_questions_or_hypotheses": [
        "RQ1: Can smartphone-acquired DFU images from Bangladeshi clinics be standardized sufficiently to train accurate CNN-based detection and severity grading models?",
        "RQ2: How do models trained on Bangladesh DFU data generalize to (or benefit from) any existing public DFU datasets, and vice versa?",
        "RQ3: Which visual explanation methods best help clinicians trust and audit DFU model predictions?",
        "RQ4: What dataset design choices (e.g., class balance, multi-view per patient, inclusion of context) most affect model robustness?"
      ],
      "novel_contribution": "Dataset novelty: first (or among the first) curated, well-annotated Bangladeshi DFU image dataset with severity labels, metadata, and documentation, filling a geographic and clinical gap. Methodological novelty: baseline CNN and potentially transformer models for DFU detection and severity grading with interpretability and cross-dataset generalization studies. Reproducibility novelty: public code, trained models, and a dataset paper that establishes a benchmark protocol.",
      "methodology_outline": "1) Ethics and collaboration: secure IRB/ethics approval and partner with one or more diabetes clinics/hospitals. Define consent forms, anonymization protocols, and image capture guidelines.\n2) Data collection: capture high-quality DFU photos using standard smartphones, including multiple views per lesion, controlled lighting where possible, and minimal identifiable background. Record basic anonymized metadata (e.g., location on foot, approximate size) without patient identities.\n3) Annotation: have clinicians label presence/absence of DFU, approximate severity grade (e.g., mild/moderate/severe), and optionally segmentation masks or bounding boxes. Double-annotate a subset to assess inter-rater reliability.\n4) Baseline models: implement EfficientNet/ResNet-style classifiers in PyTorch; optionally add segmentation or detection heads. Use strong augmentations to handle variability.\n5) Explainability: integrate Grad-CAM++/Advanced Grad-CAM++ visualizations for clinician review.\n6) Cross-dataset experiments: if public DFU datasets are accessible, perform transfer-learning and domain adaptation experiments.\n7) Packaging: organize the dataset into train/val/test splits with clear documentation and a standardized evaluation protocol.",[13][1]
      "suggested_datasets_and_data_plan": {
        "public_datasets": [
          "Existing DFU datasets from literature (to be identified; many are small and partially open; use primarily for cross-dataset checks)."
        ],
        "data_collection_plan_if_needed": "Work with 1–2 clinics in Bangladesh to recruit consenting diabetic patients with foot ulcers. For each patient, capture 3–5 images per ulcer under standard conditions; immediately de-identify by avoiding faces and other identifiers. Store images on encrypted drives. Have at least two clinicians independently label severity using an agreed scale. Aim for at least several hundred patients to balance classes.",
        "data_size_estimate": "Target 1,000–3,000 images across 300–800 patients, depending on recruitment success and clinic throughput."
      },
      "evaluation_metrics_and_baselines": [
        "Primary metrics: accuracy, sensitivity, specificity, F1-score, AUC for ulcer presence and for severity classes; confusion matrices.",
        "Baselines: simple CNN classifier (e.g., ResNet-18) with ImageNet pretraining; more advanced EfficientNet; any pre-existing DFU models re-trained or fine-tuned on local data if code is available.",
        "Secondary metrics: inter-rater agreement for labels; explanation-quality feedback from clinicians."
      ],
      "feasibility_assessment": {
        "estimated_time_breakdown_months": {
          "aggressive": {
            "learning": "8 months (clinical background on DFU, CNN fundamentals, research ethics)",
            "implementation_and_experiments": "6 months (data collection, labeling, modeling, evaluation)",
            "analysis_and_writing": "4 months (dataset paper + methodological paper + thesis)"
          },
          "conservative": {
            "learning": "13 months (including time to navigate ethics and clinical logistics)",
            "implementation_and_experiments": "3 months (focus on dataset curation and one strong baseline)",
            "analysis_and_writing": "2 months"
          }
        },
        "hardware_and_software_needs": "Standard deep learning setup: single RTX 2060–3060-class GPU, 32 GB RAM; secure storage for sensitive images; Python, PyTorch, standard ML libraries. Additional needs: encrypted drives, institutional ethics infrastructure.",
        "risk_level": "High – dependent on ethics approvals and clinical collaboration; recruitment delays are possible. Mitigate by starting ethics process immediately, keeping the dataset goals modest, and planning a fallback purely methodological topic if data collection fails.",
        "feasibility_score_0_10": 6.5
      },
      "skills_to_learn": [
        "Clinical understanding of DFU and severity grading scales",
        "Research ethics, informed consent, and medical data governance",
        "Deep CNNs and basic object detection/segmentation if pursued",
        "Dataset design and annotation management",
        "Explainable AI for clinicians (visualization and feedback gathering)"
      ],
      "expected_deliverables": [
        "Curated DFU image dataset with documentation and possibly public release (subject to approvals)",
        "Baseline DFU detection and severity-grading models with explainability tools",
        "Dataset/benchmark paper (possibly in a data journal or biomedical informatics venue) plus a methodological paper",
        "MSc thesis and defense presentation",
        "Reproducible GitHub repository for training and evaluation"
      ],
      "potential_q1_journals": [
        "Biomedical Signal Processing and Control",[28][27]
        "Computerized Medical Imaging and Graphics",[10]
        "Medical Image Analysis (if dataset scale and methodology are sufficiently strong)"[26][25][10]
      ],
      "key_references_and_starting_bibliography": [
        "Protik et al., \"Automated Detection of Diabetic Foot Ulcer Using Convolutional Neural Network\" where Rahaman is a co-author – supervisor-aligned starting point.",[1]
        "Recent systematic reviews on AI in diabetic complications and DFU detection (to be gathered).",
        "Journal scopes and requirements for Biomedical Signal Processing and Control and related Q1 venues."[27][28]
      ],
      "first_3_milestones_with_deadlines": [
        {
          "milestone": "Secure ethics approval and clinical partner commitment; finalize DFU image capture and labeling protocol",
          "deadline_months_from_start": 3
        },
        {
          "milestone": "Collect and annotate at least first 400–600 DFU images; train initial baseline CNN model",
          "deadline_months_from_start": 8
        },
        {
          "milestone": "Finalize dataset, run full experiments (including any cross-dataset checks), and draft dataset paper",
          "deadline_months_from_start": 14
        }
      ],
      "quality_checks_for_q1": "Ensure rigorous ethics and privacy practices (consent, de-identification, secure storage); clearly document dataset composition, capture conditions, and labeling processes; provide strong baselines with proper cross-validation; release code and, if possible, the dataset under a suitable license; include clinician feedback on usability and caveats; discuss biases (e.g., geography, skin tone, clinic type) and limitations explicitly."
    },
    {
      "title": "Bangla Social Media Image Forgery Benchmark and Multi-Branch Detector",
      "short_abstract": "This thesis will extend existing social media image forgery datasets (e.g., SMIFD-1000) to Bangla and South Asian contexts by collecting and annotating forged and authentic images from regional social media platforms, and develop a multi-branch CNN-based forgery detector. Building on Rahaman’s SMIFD-1000 database and related forgery-detection work, the project will focus on modern manipulation types (splicing, copy-move, inpainting, enhancement) and real-world compression artifacts. The contributions are twofold: a new benchmark dataset with clear protocols and baseline models, and a methodological paper targeting Q1 digital forensics or computer vision journals.",[13][1]
      "background_and_motivation": "Image forgery in social media contributes to misinformation, political manipulation, and harassment. Rahaman and collaborators created the SMIFD and SMIFD-1000 social media image forgery datasets and baseline CNN-based detectors, but these focus on a particular set of sources and do not explicitly target Bangla-language or South Asian social media.\nRecent surveys on deep learning-based image forgery detection and dataset lists highlight the need for more diverse, realistic benchmarks and standardized protocols. Datasets like TrainFors and scientific forgery benchmarks further emphasize structured benchmarking, but often focus on different domains.\nA curated Bangla-centric social media forgery dataset, with modern manipulations and platform-specific artifacts, would be directly aligned with the supervisor’s forensics work and fill a clear gap in the literature.",[43][44][45][46][13][1]
      "research_questions_or_hypotheses": [
        "RQ1: What kinds of image manipulations and artifacts are most prevalent in Bangla and regional social media contexts, and how do they differ from existing benchmarks like SMIFD-1000?",[13][1]
        "RQ2: Can a multi-branch CNN architecture that combines pixel, frequency, and metadata cues improve forgery detection robustness under heavy compression and re-sharing?",
        "RQ3: How do detectors trained on Bangla-centric data generalize to other forgery datasets (e.g., CASIA, NIST MFC, TrainFors) and vice versa?",[44][45][46]
        "RQ4: How should evaluation protocols be designed to reflect realistic social media threat models (e.g., low-res re-uploads, filters, text overlays)?"
      ],
      "novel_contribution": "Dataset novelty: first dedicated Bangla/South Asian social media image forgery benchmark, extending SMIFD-1000 with region-specific content, manipulations, and artifacts. Methodological novelty: multi-branch CNN-based detector fusing RGB, frequency-domain, and simple metadata features (e.g., EXIF if available) and evaluated under realistic perturbations. Benchmark novelty: consistent protocols and strong baselines, potentially impacting future forgery-detection research.",[13][1]
      "methodology_outline": "1) Policy and ethics: ensure strict adherence to platform terms of service and privacy regulations. Avoid images that reveal private individuals without consent; focus on publicly shared, high-impact content or synthetic forgeries.\n2) Data collection: sample images from major social media platforms and Bangla news/portal sites; collect both known forged and authentic images (e.g., via fact-checking sites). Record basic metadata (source, date, manipulation type where known) without personal identifiers.\n3) Annotation: label each image as forged or authentic and, where possible, mark forgery type and approximate manipulated region (mask or bounding box). Use multiple annotators and cross-check with fact-checking sources.\n4) Baselines: implement CNN-based detectors (e.g., patch-based ResNet) and re-implement the supervisor’s SMIFD-1000 baseline architecture if available. Also evaluate existing architectures from recent surveys.\n5) Multi-branch model: design a network that processes RGB patches, frequency-transformed patches, and simple metadata features, and fuses them late for classification.\n6) Benchmarking: compare models on the new dataset, existing SMIFD-1000, and select public forgery datasets (CASIA v2, Columbia, NIST MFC, TrainFors) where license permits.",[45][46][43][44][1][13]
      "suggested_datasets_and_data_plan": {
        "public_datasets": [
          "SMIFD and SMIFD-1000 social media image forgery datasets (existing; supervisor co-authored)",[1][13]
          "Image forgery datasets such as CASIA v1/v2, Columbia, NIST MFC, TrainFors, and others listed in dataset collections"[46][44][45]
        ],
        "data_collection_plan_if_needed": "Over several months, systematically collect candidate images from Bangla and regional social media and verified fact-checking portals. Use keyword and hashtag searches around known misinformation topics. For each candidate, verify forgery/authenticity via reputable fact-checking sources and manual inspection. Annotate forgery type and approximate manipulated areas using simple polygon tools. Filter out any content that may raise strong privacy or safety concerns.",
        "data_size_estimate": "Target 5,000–10,000 images in the new dataset with a balanced distribution of forged and authentic images and multiple manipulation types."
      },
      "evaluation_metrics_and_baselines": [
        "Primary metrics: accuracy, precision, recall, F1-score, AUC for forgery detection; per-manipulation-type performance.",
        "Robustness metrics: performance under additional compression, resizing, and filtering (simulating re-sharing).",
        "Baselines: SMIFD-1000 original CNN-based detectors, standard ResNet/EfficientNet, and representative methods from recent surveys."[43][46][13][1]
      ],
      "feasibility_assessment": {
        "estimated_time_breakdown_months": {
          "aggressive": {
            "learning": "8 months (digital image forensics, manipulation types, CNN-based detectors)",
            "implementation_and_experiments": "6 months (data collection/annotation, baseline implementation, multi-branch model, benchmarking)",
            "analysis_and_writing": "4 months"
          },
          "conservative": {
            "learning": "13 months (including time for careful dataset policy and tooling)",
            "implementation_and_experiments": "3 months",
            "analysis_and_writing": "2 months"
          }
        },
        "hardware_and_software_needs": "Single RTX 2060–3060-class GPU, 32 GB RAM, 1–2 TB storage for images; Python, PyTorch, OpenCV; secure, backed-up storage for collected images.",
        "risk_level": "Medium-high – main risks are policy/ethics (social media scraping) and annotation workload. Mitigate by working closely with supervisor on legal/ethical boundaries, using fact-checking portals as primary sources, and constraining dataset size while ensuring diversity.",
        "feasibility_score_0_10": 7
      },
      "skills_to_learn": [
        "Digital image forensics principles and common manipulation techniques",
        "CNN-based forgery detection architectures and training strategies",
        "Dataset collection and annotation under social media/platform constraints",
        "Evaluation of robustness under post-processing and re-sharing scenarios",
        "Reproducible benchmark design and documentation"
      ],
      "expected_deliverables": [
        "Bangla/South Asian social media forgery dataset with annotations and documentation (release subject to policy and ethics approval)",
        "Baseline and multi-branch forgery detectors implemented in a reproducible codebase",
        "Q1-oriented paper focusing on the dataset and robustness of detectors under realistic conditions",
        "MSc thesis report and defense",
        "Scripts and README enabling reproduction of main tables and figures"
      ],
      "potential_q1_journals": [
        "Forensic Science International: Digital Investigation",[47][48][49]
        "Pattern Recognition",[10]
        "IEEE Transactions on Information Forensics and Security (if methodological contribution is strong; check latest quartile separately)"
      ],
      "key_references_and_starting_bibliography": [
        "Rahaman G.M.A. et al., SMIFD and SMIFD-1000 social media image forgery detection datasets and related CNN-based work.",[13][1]
        "Recent survey on deep learning-based image forgery detection summarizing architectures and benchmark datasets.",[43]
        "TrainFors benchmark dataset paper for image manipulation detection and localization.",[45]
        "GitHub collection of forgery datasets and their characteristics."[46]
      ],
      "first_3_milestones_with_deadlines": [
        {
          "milestone": "Survey image forgery detection literature; reproduce SMIFD-1000 baseline on existing data if accessible",
          "deadline_months_from_start": 3
        },
        {
          "milestone": "Complete initial round of Bangla social media image collection and annotation (at least 2,000–3,000 images)",
          "deadline_months_from_start": 8
        },
        {
          "milestone": "Finalize dataset scope, train baselines and multi-branch model, and draft dataset/methodology paper",
          "deadline_months_from_start": 14
        }
      ],
      "quality_checks_for_q1": "Ensure clear and ethical data sourcing with strong documentation; describe annotation protocols and inter-annotator agreement; provide competitive baselines and robustness tests; release code and, where permissible, dataset; discuss limitations, biases, and legal considerations (e.g., copyright, platform terms), as well as implications for combating misinformation."
    },
    {
      "title": "Cross-Domain Benchmarking of Deep Image Forgery Detectors on SMIFD-1000 and TrainFors",
      "short_abstract": "This topic will systematically benchmark state-of-the-art deep image forgery detectors across Rahaman’s SMIFD-1000 social media image forgery dataset and the large-scale TrainFors benchmark for image manipulation detection and localization. The project will implement multiple representative architectures (patch-based CNNs, transformer-based detectors, noise/frequency-based models) and evaluate cross-dataset generalization, localization accuracy, and robustness to post-processing. The main contribution is a comprehensive, reproducible benchmark study with standardized protocols and open code, targeting Q1 computer vision or digital forensics journals.",[45][1][13]
      "background_and_motivation": "While many deep models for image forgery detection have been proposed, their evaluation is often fragmented across datasets and pre-processing choices, making fair comparison difficult. SMIFD-1000 provides a realistic social media forgery dataset, while TrainFors offers a large-scale, standardized training dataset for multiple forgery types.\nA recent scientific forgery benchmark and the TrainFors dataset both emphasize the need for coherent evaluation frameworks. However, cross-domain generalization – e.g., from standardized datasets to noisy social media images – remains under-explored.\nA carefully designed benchmark study that includes supervisor-aligned SMIFD-1000 and broader datasets like TrainFors and scientific forgery benchmarks can be impactful, especially if accompanied by open-source implementations and clear recommendations for future work.",[44][46][43][45][1][13]
      "research_questions_or_hypotheses": [
        "RQ1: How do state-of-the-art image forgery detectors trained on large standardized datasets (e.g., TrainFors) perform on realistic social media forgeries like SMIFD-1000 without domain adaptation?",[45][1][13]
        "RQ2: Which model families (patch-based CNNs, transformers, noise/frequency-based, hybrid) deliver the best trade-off between accuracy and robustness across multiple forgery datasets?",[44][46][43]
        "RQ3: How sensitive are these detectors to common social media transformations such as re-compression, resizing, and filtering?",
        "RQ4: What standardized evaluation protocols and reporting practices should be recommended to improve reproducibility in future forgery-detection research?"
      ],
      "novel_contribution": "Empirical novelty: first comprehensive cross-dataset and cross-domain benchmark combining SMIFD-1000, TrainFors, and at least one scientific forgery benchmark. Methodological novelty: careful, standardized training and evaluation protocols for multiple detector types with robust ablation and sensitivity analyses. Community impact: open, well-documented code and configuration files enabling future methods to be compared fairly.",[44][45][1][13]
      "methodology_outline": "1) Dataset preparation: obtain SMIFD-1000, TrainFors, and at least one additional benchmark like the scientific forgery dataset described in recent work. Harmonize labels where possible (e.g., binary forged/authentic; per-pixel masks where available).\n2) Model selection: choose representative architectures from recent surveys: patch-based CNNs, noise/frequency-focused models, and at least one transformer-based detector. Implement in PyTorch or adapt open-source implementations.\n3) Training strategy: mirror recommended training settings for TrainFors for primary training, then evaluate models on SMIFD-1000 and scientific forgery benchmarks without fine-tuning to test domain shift. Optionally explore simple fine-tuning or domain adaptation.\n4) Evaluation: use standard detection metrics (accuracy, F1, AUC) and localization metrics (IoU, F1 for masks). Additionally, test robustness under controlled post-processing (JPEG quality changes, resizing, filters).\n5) Ablations: analyze the impact of input resolution, patch size, augmentation, and loss functions.\n6) Packaging: provide a unified benchmark framework (configuration files, scripts) that others can plug new models into for evaluation.",[43][44][45][1][13]
      "suggested_datasets_and_data_plan": {
        "public_datasets": [
          "SMIFD and SMIFD-1000 social media forgery datasets",[1][13]
          "TrainFors large training dataset for image manipulation detection and localization",[45]
          "Scientific image forgery benchmark dataset from recent work",[44]
          "Standard datasets (CASIA v2, Columbia, NIST MFC) as listed in dataset collections"[46]
        ],
        "data_collection_plan_if_needed": "No new data collection is necessary. Focus on curating and harmonizing existing datasets and ensuring correct license use.",
        "data_size_estimate": "TrainFors alone contains around 1 million images (200k pristine, 800k manipulated); SMIFD-1000 and other datasets add tens of thousands more images."[46][44][45][13][1]
      },
      "evaluation_metrics_and_baselines": [
        "Primary metrics: image-level accuracy, precision, recall, F1-score, AUC for forgery detection; pixel-level IoU and F1 for manipulation localization where masks exist.",
        "Robustness metrics: performance under varying JPEG quality, scaling factors, and simple filters.",
        "Baselines: existing SMIFD-1000 and TrainFors baselines where available; simple CNN patch classifier; frequency-based models referenced in recent surveys."[43][45][13][1]
      ],
      "feasibility_assessment": {
        "estimated_time_breakdown_months": {
          "aggressive": {
            "learning": "8 months (forensics literature, deep architectures for forgery detection, standardized benchmarking)",
            "implementation_and_experiments": "6 months (dataset harmonization, model implementation, extensive benchmarking)",
            "analysis_and_writing": "4 months"
          },
          "conservative": {
            "learning": "13 months (more time for codebase and multiple architectures)",
            "implementation_and_experiments": "3 months",
            "analysis_and_writing": "2 months"
          }
        },
        "hardware_and_software_needs": "Single RTX 3060-class GPU may suffice with careful batching, but access to additional compute (e.g., cloud credits) would speed training on TrainFors; Python, PyTorch, large-storage disk (2–4 TB).",
        "risk_level": "Medium – large dataset size and model training time may be challenging on a single GPU. Mitigate by sub-sampling TrainFors, using mixed precision, and prioritizing a subset of models.",
        "feasibility_score_0_10": 7.5
      },
      "skills_to_learn": [
        "Deep learning architectures for image forensics and manipulation localization",
        "Large-scale dataset handling and efficient training strategies",
        "Benchmark design and implementation (configuration-driven pipelines)",
        "Robustness evaluation under real-world post-processing scenarios",
        "Reproducible research practices for multi-dataset comparisons"
      ],
      "expected_deliverables": [
        "Unified benchmarking codebase for forgery detection across multiple datasets",
        "Comprehensive experimental report comparing multiple architectures and training regimes",
        "Q1-level manuscript on cross-domain performance and robustness of image forgery detectors",
        "MSc thesis detailing methodology and results",
        "Publicly available configuration files and scripts to facilitate future comparisons"
      ],
      "potential_q1_journals": [
        "Forensic Science International: Digital Investigation",[48][49][47]
        "Pattern Recognition",[10]
        "Computer Vision and Image Understanding (depending on methodological emphasis)"
      ],
      "key_references_and_starting_bibliography": [
        "Rahaman G.M.A. et al., SMIFD and SMIFD-1000 datasets and associated CNN-based detection work.",[13][1]
        "TrainFors dataset paper defining a large-scale benchmark for manipulation detection and localization.",[45]
        "Scientific image forgery benchmark paper describing synthetic but realistic manipulations.",[44]
        "Survey on deep learning-based image forgery detection outlining major architectures and datasets.",[43]
        "GitHub dataset list summarizing multiple forgery benchmarks."[46]
      ],
      "first_3_milestones_with_deadlines": [
        {
          "milestone": "Set up SMIFD-1000 and one additional benchmark dataset; reproduce at least one baseline detector",
          "deadline_months_from_start": 3
        },
        {
          "milestone": "Integrate TrainFors and scientific forgery dataset; implement 2–3 representative detector architectures",
          "deadline_months_from_start": 8
        },
        {
          "milestone": "Complete cross-dataset and robustness experiments; write main benchmark analysis and paper draft",
          "deadline_months_from_start": 14
        }
      ],
      "quality_checks_for_q1": "Ensure careful dataset splitting and avoidance of data leakage; document all pre-processing and hyperparameters; include strong baselines and several model families; provide cross-dataset and robustness analyses with clear tables and plots; release code and configurations for full reproducibility; explicitly discuss limitations such as dataset bias and domain mismatch."
    },
    {
      "title": "Multispectral Imaging of Traditional Textiles for Dye and Fiber Classification",
      "short_abstract": "This thesis will apply spectral imaging and deep learning to classify dyes and fibers in traditional Bangladeshi textiles, extending Rahaman’s work on spectral imaging for dye and fiber analysis in cultural heritage. The project will build a small but high-quality multispectral dataset of textile samples using a multispectral or hyperspectral camera (if available) or a controlled narrow-band imaging setup, and develop classification models that leverage both spectral and spatial information. The aim is to support non-destructive analysis of cultural heritage textiles and to demonstrate how spectral imaging and machine learning can be adapted for local contexts, targeting Q1 venues in imaging, color science, or cultural heritage conservation.",[50][51][1][13]
      "background_and_motivation": "Spectral imaging offers non-destructive analysis of dyes and fibers in cultural heritage textiles, helping conservators understand materials, aging, and appropriate restoration strategies. Rahaman has contributed to spectral imaging of dyes and fibers and to enhanced color visualization in cultural heritage applications.\nMost existing datasets and methods, however, focus on European or other high-resource settings. Applying similar techniques to Bangladeshi traditional textiles (e.g., Jamdani, Nakshi Kantha) could both preserve local heritage and provide a new benchmark for spectral imaging research.\nA carefully designed small-scale dataset with controlled acquisition conditions and well-characterized samples can support both supervised classification and exploratory unsupervised analysis of dye/fiber groups.",[51][50][1][13]
      "research_questions_or_hypotheses": [
        "RQ1: Can multispectral imaging combined with deep learning accurately classify dyes and fibers in Bangladeshi traditional textiles under non-destructive conditions?",[50][51][1][13]
        "RQ2: How much spatial context (patch-based vs. pixel-based classification) is needed to robustly distinguish similar dyes?",
        "RQ3: How do simple physics-based or traditional features (e.g., reflectance curves, indices) compare with end-to-end deep learning on spectral cubes?",
        "RQ4: Can the dataset and models provide actionable insights for conservators (e.g., grouping textiles by dye type or degradation patterns)?"
      ],
      "novel_contribution": "Dataset novelty: first multispectral imaging dataset focused on Bangladeshi traditional textiles with labeled dyes and fibers, inspired by earlier spectral dye and fiber datasets but adapted to local materials. Methodological novelty: comparative evaluation of pixel-wise vs. patch-based spectral classifiers (CNNs, 1D/3D networks) and of hand-crafted vs deep features. Applied novelty: case studies highlighting how classification outputs might assist in conservation and documentation.",[51][50][1][13]
      "methodology_outline": "1) Hardware and calibration: secure access to a multispectral/hyperspectral imaging setup (e.g., via supervisor’s lab or collaborators). Calibrate the system using white/black references and wavelength calibration targets.\n2) Sample selection: obtain textile samples (or high-quality replicas) representing key traditional Bangladeshi techniques and known dye/fiber types, ensuring no damage to valuable objects.\n3) Data acquisition: capture spectral image cubes under controlled illumination; record metadata (dye/fiber, weaving technique, age, etc.). Perform reflectance calibration.\n4) Data preprocessing: extract spectral signatures and spatial patches; normalize spectra; optionally reduce dimensionality via PCA.\n5) Modeling: implement baseline classifiers, including (i) classical ML on spectral features and (ii) 1D/2D CNNs that process spectra or small image patches. Optionally explore attention-based models that focus on discriminative wavelengths.\n6) Evaluation: use cross-validation across samples; measure classification accuracy, confusion between similar dyes/fibers; perform ablation on number of bands and spatial context.\n7) Documentation: prepare a dataset description including acquisition protocol, calibration, and intended uses; package code and sample analysis scripts.",
      "suggested_datasets_and_data_plan": {
        "public_datasets": [
          "Previous spectral dye/fiber datasets from Rahaman’s works (for methodological comparison, where accessible)"[50][51][1][13]
        ],
        "data_collection_plan_if_needed": "Coordinate with a local museum, textile institute, or artisan community to access textile samples. Develop a non-destructive imaging protocol using a spectral camera under supervision. For each sample, capture multiple regions to account for weaving variability. Maintain careful records linking images to known dye/fiber information from expert curators.",
        "data_size_estimate": "On the order of tens of samples (e.g., 30–80 textiles) with thousands of spectra or patches per sample, yielding tens of thousands of labeled instances."
      },
      "evaluation_metrics_and_baselines": [
        "Primary metrics: overall and per-class accuracy, confusion matrices for dye and fiber classes.",
        "Baselines: nearest-neighbor or SVM on reflectance spectra; simple MLP classifier; existing spectral classification approaches from Rahaman’s earlier work."[51][50][1][13]
      ],
      "feasibility_assessment": {
        "estimated_time_breakdown_months": {
          "aggressive": {
            "learning": "8 months (spectral imaging fundamentals, color science, textile/fiber basics)",
            "implementation_and_experiments": "6 months (data acquisition, preprocessing, modeling)",
            "analysis_and_writing": "4 months"
          },
          "conservative": {
            "learning": "13 months (including time to secure access to hardware and collections)",
            "implementation_and_experiments": "3 months",
            "analysis_and_writing": "2 months"
          }
        },
        "hardware_and_software_needs": "Access to a multispectral or hyperspectral imaging system and controlled lighting; calibration targets; standard DL hardware (single GPU); Python, libraries for hyperspectral data (e.g., spectral Python), PyTorch/scikit-learn.",
        "risk_level": "High – dependent on access to spectral imaging equipment and cultural heritage samples. Mitigate by confirming access early and keeping dataset scale modest; as a fallback, the methodology can be demonstrated on existing public spectral datasets if needed.",
        "feasibility_score_0_10": 6
      },
      "skills_to_learn": [
        "Spectral imaging and reflectance measurement principles",
        "Basics of color science and dye/fiber properties",
        "Hyperspectral/multispectral data processing",
        "Classical ML and deep learning for spectral data",
        "Documentation and communication with heritage professionals"
      ],
      "expected_deliverables": [
        "Bangladeshi textile spectral imaging dataset with documentation (subject to institutional approval)",
        "Code for spectral classification models and analysis notebooks",
        "Q1-aimed paper at the intersection of spectral imaging, machine learning, and cultural heritage",
        "MSc thesis and defense",
        "Guidelines for conservators on the potential and limitations of spectral ML-based classification"
      ],
      "potential_q1_journals": [
        "Sensors (for spectral imaging and sensing applications)",[52][1]
        "Pattern Recognition (if focusing more on methodological aspects)",[10]
        "Relevant imaging or cultural heritage journals depending on scope"
      ],
      "key_references_and_starting_bibliography": [
        "Rahaman G.M.A. et al., spectral imaging work on dye and fiber classification and cultural heritage visualization.",[50][51][1][13]
        "Spectral imaging and color prediction modeling works associated with printing and material appearance.",[1][13]
        "Recent literature on hyperspectral imaging in cultural heritage conservation (to be gathered specifically)."
      ],
      "first_3_milestones_with_deadlines": [
        {
          "milestone": "Confirm access to spectral imaging equipment and textile samples; complete literature review on spectral imaging in cultural heritage",
          "deadline_months_from_start": 3
        },
        {
          "milestone": "Complete acquisition and calibration of initial subset of textile samples; implement baseline classical ML classifiers",
          "deadline_months_from_start": 8
        },
        {
          "milestone": "Finish full dataset acquisition and deep learning experiments; draft dataset/methodology paper",
          "deadline_months_from_start": 14
        }
      ],
      "quality_checks_for_q1": "Ensure careful description of imaging setup, calibration, and sampling; provide transparency about sample selection and limitations; compare deep learning with interpretable spectral methods; release code and, if possible, processed data; discuss implications for non-destructive testing and for conservation decision-making, as well as generalizability beyond the sampled textiles."
    },
    {
      "title": "Trustworthy Explanations for Deep Aerial Segmentation in Urban Green Planning",
      "short_abstract": "This thesis will investigate explainable AI methods for deep aerial image segmentation used in computing urban green area factors and UGS indices, extending Rahaman’s work on deep aerial segmentation for green area computation. Using public aerial or satellite segmentation datasets and the supervisor’s UGS models where accessible, the project will apply and adapt attribution methods (e.g., Grad-CAM, Layer-wise Relevance Propagation, concept-based explanations) to segmentation outputs relevant to urban planners. It will also explore human-centered evaluation by mapping explanations to interpretable urban features (trees, grass, water) and assessing their stability and usefulness. The outcome is a methodological contribution on interpretable remote sensing segmentation, targeting Q1 journals in computer vision, remote sensing, or urban studies.",[11][1]
      "background_and_motivation": "Deep learning-based aerial segmentation underpins modern urban green mapping, but planners often see outputs as black boxes and have limited insight into model failures. In high-stakes planning decisions (e.g., where to prioritize greening for heat mitigation), understanding why a model believes an area is green matters.\nRahaman’s prior work on deep learning-based aerial segmentation for green area factor computation and UGS index estimation provides a strong starting point, but explanations for those models have not been deeply explored.\nXAI research in computer vision has proposed many attribution and concept-based methods, but their application to dense segmentation tasks in remote sensing and their evaluation in planning contexts remain relatively under-developed.\nThis project aligns remote sensing, segmentation, and XAI, directly leveraging the supervisor’s UGS work, and is feasible with public datasets and moderate compute.",[53][11][18][3][2][1]
      "research_questions_or_hypotheses": [
        "RQ1: Which explanation methods (e.g., Grad-CAM variants, LRP, occlusion, concept-based) produce the most stable and interpretable explanations for aerial segmentation of urban green classes?",[53][18]
        "RQ2: How can explanations be aggregated spatially (e.g., to neighborhood or parcel levels) to be meaningful for urban planners?",
        "RQ3: Do explanation patterns reveal systematic biases (e.g., misclassification of rooftop gardens, shaded areas, or dense informal settlements) in UGS models?",[4][2]
        "RQ4: Can explanation-informed model refinements (e.g., adding auxiliary losses for specific structures) measurably improve UGS mapping quality?"
      ],
      "novel_contribution": "Methodological novelty: adaptation and comparison of multiple XAI methods for dense aerial segmentation, including techniques for aggregating pixel-level explanations into planning-relevant summaries. Empirical novelty: case studies on real cities showing how explanations reveal strengths/weaknesses of UGS models and how explanation-guided refinements affect performance. Applied novelty: guidance for urban planners and model developers on interpreting and improving aerial segmentation outputs.",
      "methodology_outline": "1) Data and models: use existing aerial/satellite segmentation datasets used for green area factor computation, such as the supervisor’s aerial segmentation work, plus public datasets where UGS-like classes exist (e.g., land cover with vegetation classes). Implement or re-use a UNet/DeepLabv3+ model trained for green vs non-green segmentation.\n2) Explanation methods: implement Grad-CAM-style methods adapted to segmentation, Layer-wise Relevance Propagation, occlusion-based sensitivity maps, and optionally concept-based methods if concepts like \"tree canopy\" can be defined.\n3) Evaluation: design quantitative and qualitative metrics for explanations, including stability under small input perturbations, sparsity, and overlap with manually interpreted features (e.g., tree crowns). Consider planner-oriented metrics such as whether explanations highlight recognizable urban structures.\n4) Explanation-guided refinement: identify failure modes via explanations (e.g., confusion between dark roofs and vegetation) and introduce model or data changes (e.g., additional channels, targeted augmentations) to mitigate them; evaluate impact.\n5) Packaging: provide a toolkit that takes in an aerial segmentation model and outputs explanation maps and summary statistics for a given city.",[53][11][18][3][2][1]
      "suggested_datasets_and_data_plan": {
        "public_datasets": [
          "Supervisor’s green area/aerial segmentation data if accessible",[11][1]
          "Public land-cover/vegetation segmentation datasets using Sentinel-2 or aerial imagery (e.g., those underlying greenspace data cubes)"[3][2]
        ],
        "data_collection_plan_if_needed": "If prior models and data are not directly accessible, train a green vs non-green segmentation model on publicly labeled land-cover data for one or two cities using Sentinel-2 or high-resolution aerial images, following standard pre-processing steps described in previous topics.",
        "data_size_estimate": "Tens of thousands of 256×256 patches from one or more cities; sufficient for training a strong segmentation model for 1–3 classes (e.g., tree/grass/other)."
      },
      "evaluation_metrics_and_baselines": [
        "Model performance: mIoU, F1-score for green vs non-green classes, as in prior UGS mapping work.",[2][3][1]
        "Explanation metrics: stability under perturbations, concentration of relevance on visually green structures, qualitative alignment with expert annotations.",
        "Baselines: vanilla Grad-CAM on the last convolutional layer, saliency maps, random relevance maps as sanity checks."[18]
      ],
      "feasibility_assessment": {
        "estimated_time_breakdown_months": {
          "aggressive": {
            "learning": "8 months (XAI theory, aerial segmentation, UGS mapping)",
            "implementation_and_experiments": "6 months (model training if necessary, XAI methods, experiments)",
            "analysis_and_writing": "4 months"
          },
          "conservative": {
            "learning": "13 months (including time to master multiple XAI methods)",
            "implementation_and_experiments": "3 months",
            "analysis_and_writing": "2 months"
          }
        },
        "hardware_and_software_needs": "Single RTX 2060–3060-class GPU, 32 GB RAM; Python, PyTorch, XAI libraries or custom code; GIS tools for visualization.",
        "risk_level": "Low-to-medium – dependent on access to trained segmentation models and datasets; mitigated by training own models if necessary and focusing on a limited set of explanation methods.",
        "feasibility_score_0_10": 8.5
      },
      "skills_to_learn": [
        "Remote sensing segmentation fundamentals",
        "Explainable AI techniques for dense prediction tasks",
        "GIS and visualization for communicating explanations to non-technical stakeholders",
        "Experimental design for XAI evaluation",
        "Scientific writing at the intersection of computer vision and urban studies"
      ],
      "expected_deliverables": [
        "Toolkit for computing and visualizing explanations for aerial segmentation models",
        "Case study report on at least one city showing how explanations reveal model behaviors",
        "Q1-oriented paper in remote sensing or urban greening context focusing on interpretability of UGS models",
        "MSc thesis and defense presentation",
        "Reproducible code and example notebooks"
      ],
      "potential_q1_journals": [
        "Remote Sensing",[8][7]
        "Urban Forestry & Urban Greening",[12][5][6]
        "Pattern Recognition"[10]
      ],
      "key_references_and_starting_bibliography": [
        "Rahaman G.M.A. et al., deep learning-based aerial segmentation for computing green area factor and UGS index.",[11][1]
        "Wu S. et al., greenspace dynamic data cube paper, for context on greenspace mapping from Sentinel-2.",[3][2]
        "Survey on XAI methods in computer vision, especially attribution-based methods.",[18]
        "Recent work on physics-based and interpretable vision models for remote sensing."[54][53]
      ],
      "first_3_milestones_with_deadlines": [
        {
          "milestone": "Obtain or train a working aerial UGS segmentation model and complete XAI literature review",
          "deadline_months_from_start": 3
        },
        {
          "milestone": "Implement core explanation methods (Grad-CAM variants, one perturbation-based method) and generate initial case-study explanations",
          "deadline_months_from_start": 8
        },
        {
          "milestone": "Complete explanation evaluation and explanation-guided refinement experiments; draft main manuscript",
          "deadline_months_from_start": 14
        }
      ],
      "quality_checks_for_q1": "Show both solid segmentation performance and non-trivial insights from explanations; compare multiple XAI methods with quantitative and qualitative evidence; discuss how explanations could be used by planners; release code and, if possible, a small demonstration dataset; be clear about limitations of XAI and risks of misinterpretation."
    }
  ],
  "topic_scoring_rubric": {
    "alignment_with_supervisor": 3.0,
    "novelty": 10.0,
    "feasibility_in_1_5_year": 10.0,
    "data_availability": 4.0,
    "likelihood_of_Q1_acceptance": 10.0,
    "scale": "Each score 0-10; when comparing topics, briefly justify scores for each criterion in terms of supervisor alignment, methodological or dataset novelty, realistic workload within 1.5 years, strength and openness of data sources, and fit to Q1 journal expectations."
  }
}
