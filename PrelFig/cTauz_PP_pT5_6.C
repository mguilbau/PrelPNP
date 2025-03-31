#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauz_PP_pT5_6()
{
//=========Macro generated from canvas: cTauz_PP/cTauz
//=========  (Mon Mar 31 12:18:11 2025) by ROOT version 6.32.06
   TCanvas *cTauz_PP = new TCanvas("cTauz_PP", "cTauz",200,1103,1000,800);
   cTauz_PP->Range(0,0,1,1);
   cTauz_PP->SetFillColor(0);
   cTauz_PP->SetBorderMode(0);
   cTauz_PP->SetBorderSize(2);
   cTauz_PP->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_Tauz
   TPad *pad1_Tauz__4 = new TPad("pad1_Tauz", "",0,0.23,1,1);
   pad1_Tauz__4->Draw();
   pad1_Tauz__4->cd();
   pad1_Tauz__4->Range(-12.5,0.1760913,12.5,6.647101);
   pad1_Tauz__4->SetFillColor(0);
   pad1_Tauz__4->SetBorderMode(0);
   pad1_Tauz__4->SetBorderSize(2);
   pad1_Tauz__4->SetLogy();
   pad1_Tauz__4->SetBottomMargin(0);
   pad1_Tauz__4->SetFrameBorderMode(0);
   pad1_Tauz__4->SetFrameBorderMode(0);
   
   TH1D *frame_tau_fc808b0__9 = new TH1D("frame_tau_fc808b0__9"," ",80,-10,10);
   frame_tau_fc808b0__9->SetBinContent(1,4848.805);
   frame_tau_fc808b0__9->SetMinimum(1.5);
   frame_tau_fc808b0__9->SetMaximum(1000000);
   frame_tau_fc808b0__9->SetEntries(2);
   frame_tau_fc808b0__9->SetDirectory(nullptr);
   frame_tau_fc808b0__9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_fc808b0__9->SetLineColor(ci);
   frame_tau_fc808b0__9->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_fc808b0__9->GetXaxis()->SetLabelFont(42);
   frame_tau_fc808b0__9->GetXaxis()->SetLabelSize(0.04);
   frame_tau_fc808b0__9->GetXaxis()->SetTitleSize(0.045);
   frame_tau_fc808b0__9->GetXaxis()->SetTitleOffset(1);
   frame_tau_fc808b0__9->GetXaxis()->SetTitleFont(42);
   frame_tau_fc808b0__9->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_fc808b0__9->GetYaxis()->SetLabelFont(42);
   frame_tau_fc808b0__9->GetYaxis()->SetLabelSize(0.04);
   frame_tau_fc808b0__9->GetYaxis()->SetTitleSize(0.045);
   frame_tau_fc808b0__9->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_fc808b0__9->GetYaxis()->SetTitleFont(42);
   frame_tau_fc808b0__9->GetZaxis()->SetLabelFont(42);
   frame_tau_fc808b0__9->GetZaxis()->SetTitleOffset(1);
   frame_tau_fc808b0__9->GetZaxis()->SetTitleFont(42);
   frame_tau_fc808b0__9->Draw("FUNC");
   
   Double_t h_dataw_bkg_fx3005[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_dataw_bkg_fy3005[80] = { 0.03171001, -0.07423908, 1.852669, -0.1529712, -0.1509266, 0, 1.446353, 1.701362, -0.1321654, 0, 0.1528905, 0, 0, 3.584319, 1.503201, 2.299558, 1.454046,
   2.718592, 0.5870438, 1.936388, 0.733227, 6.481102, 4.864339, 1.521251, 5.268997, 4.54529, 9.782431, 9.01065, 8.476456, 15.26248, 8.393655, 12.73289, 19.42049,
   19.15635, 23.32258, 52.47463, 56.99369, 93.72899, 237.6383, 1774.232, 2907.837, 1078.134, 500.6755, 275.5379, 155.4526, 86.02122, 77.63836, 48.86007, 50.65107,
   30.47363, 21.06688, 8.549297, 11.16994, 3.769831, 15.73659, 7.244922, 9.592253, 6.555098, 6.316082, -0.1655737, 2.919929, 4.369376, 6.742045, 4.610223, -0.2026455,
   2.726174, 2.588428, 1.515696, 1.355726, 1.623497, 0, 1.835713, 0, -0.1553052, -0.2666061, 0.7983027, 1.403457, 0, -0.09732388, 0 };
   Double_t h_dataw_bkg_felx3005[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fely3005[80] = { 0.03171001, 0.07423907, 1.434674, 0.1529712, 0.1509266, 0, 1.565407, 1.563216, 0.1321654, 0, 0.1528905, 0, 0, 2.355473, 1.570658, 1.729152, 1.418322,
   2.20189, 1.606188, 1.730442, 1.569667, 3.104877, 2.688733, 1.652029, 2.512419, 2.742614, 3.541657, 3.595311, 3.166386, 4.785422, 3.63488, 4.390212, 5.137202,
   5.184149, 5.74246, 8.650119, 8.787581, 11.26282, 18.26971, 54.49713, 68.60829, 39.64586, 27.13909, 20.0339, 14.98239, 11.16808, 10.47547, 8.404655, 8.226568,
   6.617407, 5.548676, 3.511323, 3.838265, 2.470138, 4.922014, 3.297238, 3.519978, 2.934315, 2.92294, 0.6495555, 1.756248, 2.408822, 3.283589, 2.692746, 0.143292,
   1.943339, 2.143208, 1.515696, 1.355726, 1.56424, 0, 1.554167, 0, 0.1553052, 0.1909517, 0.7983027, 1.485359, 0, 0.09732388, 0 };
   Double_t h_dataw_bkg_fehx3005[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fehy3005[80] = { 0.03171001, 0.07423907, 1.434674, 0.1529712, 0.1509266, 0, 1.565407, 1.563216, 0.1321654, 0, 0.1528905, 0, 0, 2.355473, 1.570658, 1.729152, 1.418322,
   2.20189, 1.606188, 1.730442, 1.569667, 3.104877, 2.688733, 1.652029, 2.512419, 2.742614, 3.541657, 3.595311, 3.166386, 4.785422, 3.63488, 4.390212, 5.137202,
   5.184149, 5.74246, 8.650119, 8.787581, 11.26282, 18.26971, 54.49713, 68.60829, 39.64586, 27.13909, 20.0339, 14.98239, 11.16808, 10.47547, 8.404655, 8.226568,
   6.617407, 5.548676, 3.511323, 3.838265, 2.470138, 4.922014, 3.297238, 3.519978, 2.934315, 2.92294, 0.6495555, 1.756248, 2.408822, 3.283589, 2.692746, 0.143292,
   1.943339, 2.143208, 1.515696, 1.355726, 1.56424, 0, 1.554167, 0, 0.1553052, 0.1909517, 0.7983027, 1.485359, 0, 0.09732388, 0 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_dataw_bkg_fx3005,h_dataw_bkg_fy3005,h_dataw_bkg_felx3005,h_dataw_bkg_fehx3005,h_dataw_bkg_fely3005,h_dataw_bkg_fehy3005);
   grae->SetName("h_dataw_bkg");
   grae->SetTitle("Histogram of dataw_bkg_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataw_bkg3005 = new TH1F("Graph_h_dataw_bkg3005","Histogram of dataw_bkg_plot__tau",100,-12,12);
   Graph_h_dataw_bkg3005->SetMinimum(3.274116);
   Graph_h_dataw_bkg3005->SetMaximum(3274.116);
   Graph_h_dataw_bkg3005->SetDirectory(nullptr);
   Graph_h_dataw_bkg3005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_dataw_bkg3005->SetLineColor(ci);
   Graph_h_dataw_bkg3005->GetXaxis()->SetLabelFont(42);
   Graph_h_dataw_bkg3005->GetXaxis()->SetTitleOffset(1);
   Graph_h_dataw_bkg3005->GetXaxis()->SetTitleFont(42);
   Graph_h_dataw_bkg3005->GetYaxis()->SetLabelFont(42);
   Graph_h_dataw_bkg3005->GetYaxis()->SetTitleFont(42);
   Graph_h_dataw_bkg3005->GetZaxis()->SetLabelFont(42);
   Graph_h_dataw_bkg3005->GetZaxis()->SetTitleOffset(1);
   Graph_h_dataw_bkg3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_dataw_bkg3005);
   
   grae->Draw("p");
   
   Double_t exp_DDS_fx7[101] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.625, -1.5, -1.375, -1.25, -1.125, -1, -0.875, -0.75, -0.625, -0.5, -0.375, -0.25, -0.125, -0.0625, -0.03125,
   0, 0.03125, 0.0625, 0.09375, 0.125, 0.25, 0.375, 0.5, 0.625, 0.75, 0.875, 1, 1.125, 1.25, 1.375, 1.5,
   1.625, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25,
   5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25,
   9.5, 9.75, 10, 10 };
   Double_t exp_DDS_fy7[101] = { 0.1600911, 0.186614, 0.2175309, 0.25357, 0.2955799, 0.3445496, 0.4016323, 0.4681722, 0.5457359, 0.6361498, 0.7415429, 0.8643969, 1.007605, 1.174538, 1.369128, 1.595956, 1.860363,
   2.168576, 2.527852, 2.946649, 3.434831, 4.003891, 4.66723, 5.440466, 6.341807, 7.392476, 8.617213, 10.04486, 11.70902, 13.6489, 15.91016, 18.54605, 21.61863,
   25.20027, 27.20781, 29.37528, 31.71542, 34.24199, 36.96983, 39.91498, 43.09475, 46.52783, 50.2344, 54.23626, 58.55691, 63.22115, 68.19957, 70.59363, 71.57622,
   72.23348, 72.41955, 72.08527, 71.31637, 70.26889, 65.32088, 60.50606, 56.0416, 51.90654, 48.07659, 44.52923, 41.24361, 38.20043, 35.38179, 32.77113, 30.35309,
   28.11347, 26.0391, 22.33825, 19.16338, 16.43975, 14.10322, 12.09878, 10.37922, 8.904051, 7.638547, 6.552904, 5.621561, 4.822586, 4.137168, 3.549165, 3.044734,
   2.611995, 2.240761, 1.922289, 1.64908, 1.414701, 1.213634, 1.041144, 0.8931698, 0.7662264, 0.6573251, 0.5639016, 0.483756, 0.4150013, 0.3560185, 0.3054187, 0.2620105,
   0.2247718, 0.1928257, 0.16542, 0.16542 };
   TGraph *graph = new TGraph(101,exp_DDS_fx7,exp_DDS_fy7);
   graph->SetName("exp_DDS");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_DDS7 = new TH1F("Graph_exp_DDS7","Projection of model2",101,-12,12);
   Graph_exp_DDS7->SetMinimum(0.144082);
   Graph_exp_DDS7->SetMaximum(79.64549);
   Graph_exp_DDS7->SetDirectory(nullptr);
   Graph_exp_DDS7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_exp_DDS7->SetLineColor(ci);
   Graph_exp_DDS7->GetXaxis()->SetLabelFont(42);
   Graph_exp_DDS7->GetXaxis()->SetTitleOffset(1);
   Graph_exp_DDS7->GetXaxis()->SetTitleFont(42);
   Graph_exp_DDS7->GetYaxis()->SetLabelFont(42);
   Graph_exp_DDS7->GetYaxis()->SetTitleFont(42);
   Graph_exp_DDS7->GetZaxis()->SetLabelFont(42);
   Graph_exp_DDS7->GetZaxis()->SetTitleOffset(1);
   Graph_exp_DDS7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_exp_DDS7);
   
   graph->Draw("l");
   
   Double_t model1_fx8[122] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.875, -0.75, -0.625, -0.5625, -0.5, -0.46875, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125,
   -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.1875, 0.21875, 0.25,
   0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.53125, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 0.9375,
   1, 1.0625, 1.125, 1.25, 1.375, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4,
   4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8,
   8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model1_fy8[122] = { 8.798816e-29, 5.392127e-28, 3.304426e-27, 2.025032e-26, 1.240989e-25, 7.605079e-25, 4.660576e-24, 2.856114e-23, 1.750296e-22, 1.072624e-21, 6.573296e-21, 4.028275e-20, 2.468624e-19, 1.512833e-18, 9.271005e-18, 5.681496e-17, 3.481758e-16,
   2.133706e-15, 1.307586e-14, 8.013206e-14, 4.910686e-13, 3.009387e-12, 1.844225e-11, 1.130186e-10, 6.926053e-10, 4.244453e-09, 2.601103e-08, 1.594019e-07, 9.768534e-07, 5.986394e-06, 3.668607e-05, 0.0002248211, 0.001377758,
   0.008443235, 0.05174219, 0.3170886, 1.943196, 4.810437, 11.90837, 29.47952, 46.38253, 72.9774, 91.53883, 114.8213, 144.0254, 180.657, 226.6033, 284.2244, 356.4525,
   446.8722, 559.7089, 699.5981, 870.942, 1076.529, 1314.515, 1572.178, 1818.09, 2004.431, 2091.046, 2073.908, 1983.858, 1858.724, 1589.66, 1462.506, 1343.908,
   1234.335, 1133.514, 1040.882, 955.8097, 877.6894, 805.9541, 740.0818, 679.5934, 624.0488, 573.044, 483.1999, 407.4419, 343.5616, 289.6967, 244.2769, 205.9782,
   173.6841, 146.4532, 123.4917, 87.80425, 62.42999, 44.38856, 22.44019, 11.34441, 5.735053, 2.899298, 1.465711, 0.7409755, 0.3745927, 0.1893716, 0.09573489, 0.04839781,
   0.02446703, 0.01236906, 0.006253053, 0.003161168, 0.001598097, 0.0008079017, 0.0004084266, 0.0002064759, 0.0001043818, 5.276919e-05, 2.667693e-05, 1.348625e-05, 6.81784e-06, 3.44669e-06, 1.74244e-06, 8.808728e-07,
   4.453164e-07, 2.251252e-07, 1.138098e-07, 5.753539e-08, 2.908644e-08, 1.470436e-08, 7.43364e-09, 3.758002e-09, 3.758002e-09 };
   graph = new TGraph(122,model1_fx8,model1_fy8);
   graph->SetName("model1");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model18 = new TH1F("Graph_model18","Projection of model2",122,-12,12);
   Graph_model18->SetMinimum(7.918934e-29);
   Graph_model18->SetMaximum(2300.151);
   Graph_model18->SetDirectory(nullptr);
   Graph_model18->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_model18->SetLineColor(ci);
   Graph_model18->GetXaxis()->SetLabelFont(42);
   Graph_model18->GetXaxis()->SetTitleOffset(1);
   Graph_model18->GetXaxis()->SetTitleFont(42);
   Graph_model18->GetYaxis()->SetLabelFont(42);
   Graph_model18->GetYaxis()->SetTitleFont(42);
   Graph_model18->GetZaxis()->SetLabelFont(42);
   Graph_model18->GetZaxis()->SetTitleOffset(1);
   Graph_model18->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_model18);
   
   graph->Draw("l");
   
   Double_t resolution_bkg_fx9[100] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0,
   0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.375, 0.5, 0.75, 1, 1.25, 1.5,
   1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5,
   5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5,
   9.75, 10, 10 };
   Double_t resolution_bkg_fy9[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6.423306e-317, 4.449147e-270, 5.933018e-227, 1.523282e-187, 7.529925e-152, 7.166494e-120,
   1.313193e-91, 4.632934e-67, 3.146947e-46, 4.115555e-29, 1.036271e-15, 5.023699e-06, 0.01414127, 4.689842, 14.34324, 38.56226, 92.38809, 203.7113, 430.0338, 864.9847, 1540.274, 2221.328,
   2454.444, 2048.941, 1325.986, 711.643, 347.1017, 162.7836, 72.38267, 29.28482, 10.49952, 3.303488, 0.2192468, 0.000194215, 2.490932e-13, 6.151014e-26, 2.924403e-42, 2.676909e-62,
   4.717758e-86, 1.600823e-113, 1.04582e-144, 1.315455e-179, 3.185672e-218, 1.48536e-260, 1.333424e-306, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0 };
   graph = new TGraph(100,resolution_bkg_fx9,resolution_bkg_fy9);
   graph->SetName("resolution_bkg");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_resolution_bkg9 = new TH1F("Graph_resolution_bkg9","Projection of model2",100,-12,12);
   Graph_resolution_bkg9->SetMinimum(2.699888);
   Graph_resolution_bkg9->SetMaximum(2699.888);
   Graph_resolution_bkg9->SetDirectory(nullptr);
   Graph_resolution_bkg9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_resolution_bkg9->SetLineColor(ci);
   Graph_resolution_bkg9->GetXaxis()->SetLabelFont(42);
   Graph_resolution_bkg9->GetXaxis()->SetTitleOffset(1);
   Graph_resolution_bkg9->GetXaxis()->SetTitleFont(42);
   Graph_resolution_bkg9->GetYaxis()->SetLabelFont(42);
   Graph_resolution_bkg9->GetYaxis()->SetTitleFont(42);
   Graph_resolution_bkg9->GetZaxis()->SetLabelFont(42);
   Graph_resolution_bkg9->GetZaxis()->SetTitleOffset(1);
   Graph_resolution_bkg9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_resolution_bkg9);
   
   graph->Draw("l");
   
   Double_t model2_fx10[113] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5625, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875,
   -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125,
   0.34375, 0.375, 0.4375, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.875, 1, 1.125, 1.25, 1.5, 1.75, 2, 2.25,
   2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25,
   6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model2_fy10[113] = { 0.1600911, 0.186614, 0.2175309, 0.25357, 0.2955799, 0.3445496, 0.4016323, 0.4681722, 0.5457359, 0.6361498, 0.7415429, 0.8643969, 1.007605, 1.174538, 1.369128, 1.595956, 1.860363,
   2.168576, 2.527852, 2.946649, 3.434831, 4.003891, 4.66723, 5.440466, 6.341807, 7.392476, 8.617213, 10.04486, 11.70902, 13.6489, 15.91019, 18.54627, 21.62001,
   25.20871, 29.42703, 34.55908, 41.85817, 58.4362, 79.71393, 98.57952, 127.2137, 171.1768, 239.2281, 286.3669, 345.4054, 419.817, 514.7832, 638.4948, 803.8447,
   1030.271, 1348.44, 1813.984, 2507.757, 3429.94, 4297.993, 4617.909, 4194.935, 3381.16, 2640.636, 2139.578, 1820.278, 1601.462, 1438.514, 1308.92, 1199.687,
   1103.468, 1016.535, 864.1936, 735.6352, 626.9785, 535.1065, 457.3968, 391.6382, 288.8061, 214.9277, 161.6921, 123.186, 74.74165, 48.47929, 33.68266, 24.89844,
   19.33905, 15.56893, 12.83975, 10.75381, 9.093423, 7.734282, 6.601302, 5.646028, 4.834955, 4.143421, 3.552326, 3.046332, 2.612803, 2.241169, 1.922495, 1.649184,
   1.414754, 1.213661, 1.041158, 0.8931766, 0.7662299, 0.6573268, 0.5639025, 0.4837565, 0.4150016, 0.3560186, 0.3054188, 0.2620106, 0.2247718, 0.1928257, 0.16542, 0.16542 };
   graph = new TGraph(113,model2_fx10,model2_fy10);
   graph->SetName("model2");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model210 = new TH1F("Graph_model210","Projection of model2",113,-12,12);
   Graph_model210->SetMinimum(0.144082);
   Graph_model210->SetMaximum(5079.684);
   Graph_model210->SetDirectory(nullptr);
   Graph_model210->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_model210->SetLineColor(ci);
   Graph_model210->GetXaxis()->SetLabelFont(42);
   Graph_model210->GetXaxis()->SetTitleOffset(1);
   Graph_model210->GetXaxis()->SetTitleFont(42);
   Graph_model210->GetYaxis()->SetLabelFont(42);
   Graph_model210->GetYaxis()->SetTitleFont(42);
   Graph_model210->GetZaxis()->SetLabelFont(42);
   Graph_model210->GetZaxis()->SetTitleOffset(1);
   Graph_model210->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_model210);
   
   graph->Draw("l");
   
   TH1D *frame_tau_fc808b0__10 = new TH1D("frame_tau_fc808b0__10"," ",80,-10,10);
   frame_tau_fc808b0__10->SetBinContent(1,4848.805);
   frame_tau_fc808b0__10->SetMinimum(1.5);
   frame_tau_fc808b0__10->SetMaximum(1000000);
   frame_tau_fc808b0__10->SetEntries(2);
   frame_tau_fc808b0__10->SetDirectory(nullptr);
   frame_tau_fc808b0__10->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_fc808b0__10->SetLineColor(ci);
   frame_tau_fc808b0__10->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_fc808b0__10->GetXaxis()->SetLabelFont(42);
   frame_tau_fc808b0__10->GetXaxis()->SetLabelSize(0.04);
   frame_tau_fc808b0__10->GetXaxis()->SetTitleSize(0.045);
   frame_tau_fc808b0__10->GetXaxis()->SetTitleOffset(1);
   frame_tau_fc808b0__10->GetXaxis()->SetTitleFont(42);
   frame_tau_fc808b0__10->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_fc808b0__10->GetYaxis()->SetLabelFont(42);
   frame_tau_fc808b0__10->GetYaxis()->SetLabelSize(0.04);
   frame_tau_fc808b0__10->GetYaxis()->SetTitleSize(0.045);
   frame_tau_fc808b0__10->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_fc808b0__10->GetYaxis()->SetTitleFont(42);
   frame_tau_fc808b0__10->GetZaxis()->SetLabelFont(42);
   frame_tau_fc808b0__10->GetZaxis()->SetTitleOffset(1);
   frame_tau_fc808b0__10->GetZaxis()->SetTitleFont(42);
   frame_tau_fc808b0__10->Draw("AXISSAME");
   TLatex *   tex = new TLatex(0.13,0.85,"ALICE performance, pp, #sqrt{s} = 13.6 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.79,"2.5 < |#it{y}^{#mu#mu}| < 3.6");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.74,"5 GeV/c < #it{p}_{T}^{#mu#mu} < 6 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.72,0.69,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.035);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","exp_{DSS} + exp_{DF}","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("exp_DDS","exp_{DDS}","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resolution_bkg","delta","l");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","Total fit","l");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.15,0.64,"#chi^{2}/ndof = 73 / 58 ");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.4764729,0.94,0.5235271,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText(" ");
   pt->Draw();
   pad1_Tauz__4->Modified();
   cTauz_PP->cd();
  
// ------------>Primitives in pad: pad2_Tauz
   TPad *pad2_Tauz__5 = new TPad("pad2_Tauz", "",0,0,1,0.228);
   pad2_Tauz__5->Draw();
   pad2_Tauz__5->cd();
   pad2_Tauz__5->Range(-12.5,-11.43333,12.5,4.9);
   pad2_Tauz__5->SetFillColor(0);
   pad2_Tauz__5->SetBorderMode(0);
   pad2_Tauz__5->SetBorderSize(2);
   pad2_Tauz__5->SetTopMargin(0);
   pad2_Tauz__5->SetBottomMargin(0.4);
   pad2_Tauz__5->SetFrameBorderMode(0);
   pad2_Tauz__5->SetFrameBorderMode(0);
   
   TH1D *frame_tau_fc805b0__11 = new TH1D("frame_tau_fc805b0__11"," ",100,-10,10);
   frame_tau_fc805b0__11->SetMinimum(-4.9);
   frame_tau_fc805b0__11->SetMaximum(4.9);
   frame_tau_fc805b0__11->SetDirectory(nullptr);
   frame_tau_fc805b0__11->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_fc805b0__11->SetLineColor(ci);
   frame_tau_fc805b0__11->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_fc805b0__11->GetXaxis()->SetLabelFont(42);
   frame_tau_fc805b0__11->GetXaxis()->SetLabelSize(0.12);
   frame_tau_fc805b0__11->GetXaxis()->SetTitleSize(0.14);
   frame_tau_fc805b0__11->GetXaxis()->SetTitleOffset(0.95);
   frame_tau_fc805b0__11->GetXaxis()->SetTitleFont(42);
   frame_tau_fc805b0__11->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_tau_fc805b0__11->GetYaxis()->SetNdivisions(6);
   frame_tau_fc805b0__11->GetYaxis()->SetLabelFont(42);
   frame_tau_fc805b0__11->GetYaxis()->SetLabelSize(0.12);
   frame_tau_fc805b0__11->GetYaxis()->SetTitleSize(0.12);
   frame_tau_fc805b0__11->GetYaxis()->SetTitleOffset(0.35);
   frame_tau_fc805b0__11->GetYaxis()->SetTitleFont(42);
   frame_tau_fc805b0__11->GetZaxis()->SetLabelFont(42);
   frame_tau_fc805b0__11->GetZaxis()->SetTitleOffset(1);
   frame_tau_fc805b0__11->GetZaxis()->SetTitleFont(42);
   frame_tau_fc805b0__11->Draw("FUNC");
   
   Double_t hpull_fx3006[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t hpull_fy3006[80] = { -4.466809, -3.721915, 1.127168, -2.794945, -3.120666, 0, 0.6461264, 0.7640712, -5.471237, 0, -4.251928, 0, 0, 0.9817501, 0.01315354, 0.33045, -0.3951318,
   0.1682092, -1.338702, -0.7248738, -1.9024, 0.6910231, -0.07048247, -2.645163, -0.6360979, -1.261407, 0.1274533, -0.5190901, -1.327225, 0.1009177, -2.4305, -1.674236, -0.7774418,
   -1.574321, -1.509888, 1.649226, 0.779111, 0.7707333, -1.616638, 0.4925354, -0.002768019, 0.9613607, -1.66196, -1.023597, -0.66224, -1.158895, 1.530041, 0.9255694, 2.59653,
   1.262562, 0.6511267, -1.610517, -0.1633127, -2.491272, 1.487753, 0.02339225, 0.9854003, 0.4480112, 0.6250193, -6.17876, -0.2160286, 0.6392372, 1.314129, 0.938964, -13.87715,
   0.6145118, 0.5945391, 0.2561772, 0.2866056, 0.5074629, 0, 0.7882667, 0, -3.893522, -3.415084, 0.5857227, 0.7538526, 0, -3.145401, 0 };
   Double_t hpull_felx3006[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t hpull_fely3006[80] = { 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0 };
   Double_t hpull_fehx3006[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t hpull_fehy3006[80] = { 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0 };
   grae = new TGraphAsymmErrors(80,hpull_fx3006,hpull_fy3006,hpull_felx3006,hpull_fehx3006,hpull_fely3006,hpull_fehy3006);
   grae->SetName("hpull");
   grae->SetTitle("Pull of Histogram of dataw_bkg_plot__tau and Projection of model2");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_hpull3006 = new TH1F("Graph_hpull3006","Pull of Histogram of dataw_bkg_plot__tau and Projection of model2",100,-11.85,11.85);
   Graph_hpull3006->SetMinimum(-16.72452);
   Graph_hpull3006->SetMaximum(5.443898);
   Graph_hpull3006->SetDirectory(nullptr);
   Graph_hpull3006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_hpull3006->SetLineColor(ci);
   Graph_hpull3006->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   Graph_hpull3006->GetXaxis()->SetRange(8,93);
   Graph_hpull3006->GetXaxis()->SetLabelFont(42);
   Graph_hpull3006->GetXaxis()->SetTitleOffset(1);
   Graph_hpull3006->GetXaxis()->SetTitleFont(42);
   Graph_hpull3006->GetYaxis()->SetTitle("(Data - curve) / #sigma_{data}");
   Graph_hpull3006->GetYaxis()->SetLabelFont(42);
   Graph_hpull3006->GetYaxis()->SetTitleFont(42);
   Graph_hpull3006->GetZaxis()->SetLabelFont(42);
   Graph_hpull3006->GetZaxis()->SetTitleOffset(1);
   Graph_hpull3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_hpull3006);
   
   grae->Draw("px");
   
   TH1D *frame_tau_fc805b0__12 = new TH1D("frame_tau_fc805b0__12"," ",100,-10,10);
   frame_tau_fc805b0__12->SetMinimum(-4.9);
   frame_tau_fc805b0__12->SetMaximum(4.9);
   frame_tau_fc805b0__12->SetDirectory(nullptr);
   frame_tau_fc805b0__12->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_fc805b0__12->SetLineColor(ci);
   frame_tau_fc805b0__12->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_fc805b0__12->GetXaxis()->SetLabelFont(42);
   frame_tau_fc805b0__12->GetXaxis()->SetLabelSize(0.12);
   frame_tau_fc805b0__12->GetXaxis()->SetTitleSize(0.14);
   frame_tau_fc805b0__12->GetXaxis()->SetTitleOffset(0.95);
   frame_tau_fc805b0__12->GetXaxis()->SetTitleFont(42);
   frame_tau_fc805b0__12->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_tau_fc805b0__12->GetYaxis()->SetNdivisions(6);
   frame_tau_fc805b0__12->GetYaxis()->SetLabelFont(42);
   frame_tau_fc805b0__12->GetYaxis()->SetLabelSize(0.12);
   frame_tau_fc805b0__12->GetYaxis()->SetTitleSize(0.12);
   frame_tau_fc805b0__12->GetYaxis()->SetTitleOffset(0.35);
   frame_tau_fc805b0__12->GetYaxis()->SetTitleFont(42);
   frame_tau_fc805b0__12->GetZaxis()->SetLabelFont(42);
   frame_tau_fc805b0__12->GetZaxis()->SetTitleOffset(1);
   frame_tau_fc805b0__12->GetZaxis()->SetTitleFont(42);
   frame_tau_fc805b0__12->Draw("AXISSAME");
   TLine *line = new TLine(-10,0,10,0);
   line->Draw();
   line = new TLine(-10,2,10,2);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-10,-2,10,-2);
   line->SetLineStyle(2);
   line->Draw();
   
   pt = new TPaveText(0.485992,0.94,0.514008,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText(" ");
   pt->Draw();
   pad2_Tauz__5->Modified();
   cTauz_PP->cd();
   cTauz_PP->Modified();
   cTauz_PP->SetSelected(cTauz_PP);
}
