#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauz_PP_pT0_1()
{
//=========Macro generated from canvas: cTauz_PP/cTauz
//=========  (Mon Mar 31 21:16:08 2025) by ROOT version 6.32.06
   TCanvas *cTauz_PP = new TCanvas("cTauz_PP", "cTauz",200,1103,1000,800);
   cTauz_PP->Range(0,0,1,1);
   cTauz_PP->SetFillColor(0);
   cTauz_PP->SetBorderMode(0);
   cTauz_PP->SetBorderSize(2);
   cTauz_PP->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_Tauz
   TPad *pad1_Tauz__2 = new TPad("pad1_Tauz", "",0,0,1,1);
   pad1_Tauz__2->Draw();
   pad1_Tauz__2->cd();
   pad1_Tauz__2->Range(-8.75,-0.07268256,8.75,6.674743);
   pad1_Tauz__2->SetFillColor(0);
   pad1_Tauz__2->SetBorderMode(0);
   pad1_Tauz__2->SetBorderSize(2);
   pad1_Tauz__2->SetLogy();
   pad1_Tauz__2->SetFrameBorderMode(0);
   pad1_Tauz__2->SetFrameBorderMode(0);
   
   TH1D *frame_tau_10c5d650__5 = new TH1D("frame_tau_10c5d650__5"," ",80,-10,10);
   frame_tau_10c5d650__5->SetBinContent(1,24146.15);
   frame_tau_10c5d650__5->SetMinimum(4);
   frame_tau_10c5d650__5->SetMaximum(1000000);
   frame_tau_10c5d650__5->SetEntries(2);
   frame_tau_10c5d650__5->SetDirectory(nullptr);
   frame_tau_10c5d650__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_10c5d650__5->SetLineColor(ci);
   frame_tau_10c5d650__5->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_10c5d650__5->GetXaxis()->SetRange(13,68);
   frame_tau_10c5d650__5->GetXaxis()->SetLabelFont(42);
   frame_tau_10c5d650__5->GetXaxis()->SetLabelSize(0.04);
   frame_tau_10c5d650__5->GetXaxis()->SetTitleSize(0.045);
   frame_tau_10c5d650__5->GetXaxis()->SetTitleOffset(1);
   frame_tau_10c5d650__5->GetXaxis()->SetTitleFont(42);
   frame_tau_10c5d650__5->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_10c5d650__5->GetYaxis()->SetLabelFont(42);
   frame_tau_10c5d650__5->GetYaxis()->SetLabelSize(0.04);
   frame_tau_10c5d650__5->GetYaxis()->SetTitleSize(0.045);
   frame_tau_10c5d650__5->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_10c5d650__5->GetYaxis()->SetTitleFont(42);
   frame_tau_10c5d650__5->GetZaxis()->SetLabelFont(42);
   frame_tau_10c5d650__5->GetZaxis()->SetTitleOffset(1);
   frame_tau_10c5d650__5->GetZaxis()->SetTitleFont(42);
   frame_tau_10c5d650__5->Draw("FUNC");
   
   Double_t h_dataw_bkg_fx3003[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_dataw_bkg_fy3003[80] = { 9.703465, 18.46123, 14.46375, 19.57928, 20.90991, 14.12207, 17.57081, 13.81578, 29.11585, 30.96985, 28.27137, 23.73504, 23.72499, 29.71455, 38.90094, 40.85447, 55.66823,
   39.02266, 43.81719, 45.96571, 67.9781, 65.1395, 86.56294, 73.25892, 106.2474, 108.0778, 108.7091, 131.2512, 149.0421, 163.4017, 194.5567, 191.2448, 300.1468,
   269.4823, 316.9644, 484.8773, 700.5435, 1238.808, 3044.583, 12532.12, 17137.16, 5829.902, 2641.214, 1521.015, 899.2856, 675.8835, 481.8195, 412.5955, 321.5296,
   260.2566, 192.7695, 166.6736, 163.8643, 147.0527, 117.0307, 125.5977, 103.6123, 88.51505, 80.7182, 61.46143, 90.07519, 62.68681, 55.5114, 64.92757, 36.14182,
   37.87062, 32.69522, 42.00447, 37.51382, 25.46716, 35.13979, 18.0502, 19.1834, 15.19072, 25.73576, 22.37559, 14.72769, 17.30365, 15.96912, 13.31568 };
   Double_t h_dataw_bkg_felx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fely3003[80] = { 3.477881, 5.01839, 4.545146, 4.98585, 5.491897, 4.667745, 4.953703, 4.485983, 6.281684, 6.298382, 6.372703, 5.626225, 5.585563, 6.433937, 7.274271, 7.38327, 8.775202,
   7.387706, 7.836172, 8.035718, 9.618694, 9.467307, 10.78295, 9.905603, 11.84443, 11.78524, 12.243, 13.20771, 14.09728, 14.74197, 15.79355, 16.12604, 20.02399,
   18.93121, 20.3473, 25.37718, 31.02481, 41.23822, 65.99998, 140.721, 160.285, 88.86677, 59.82194, 45.39474, 34.99902, 30.15988, 25.61173, 23.08024, 20.60997,
   19.01613, 16.08679, 15.02127, 14.92939, 14.04938, 12.50154, 12.96018, 11.74937, 10.61895, 10.18689, 9.245039, 10.93983, 9.164995, 8.762158, 9.462384, 6.784983,
   7.280013, 6.804694, 7.758584, 6.95972, 5.776209, 6.876882, 4.932655, 5.169383, 4.511328, 5.759501, 5.395161, 4.34581, 4.912806, 4.753387, 4.249982 };
   Double_t h_dataw_bkg_fehx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fehy3003[80] = { 3.477881, 5.01839, 4.545146, 4.98585, 5.491897, 4.667745, 4.953703, 4.485983, 6.281684, 6.298382, 6.372703, 5.626225, 5.585563, 6.433937, 7.274271, 7.38327, 8.775202,
   7.387706, 7.836172, 8.035718, 9.618694, 9.467307, 10.78295, 9.905603, 11.84443, 11.78524, 12.243, 13.20771, 14.09728, 14.74197, 15.79355, 16.12604, 20.02399,
   18.93121, 20.3473, 25.37718, 31.02481, 41.23822, 65.99998, 140.721, 160.285, 88.86677, 59.82194, 45.39474, 34.99902, 30.15988, 25.61173, 23.08024, 20.60997,
   19.01613, 16.08679, 15.02127, 14.92939, 14.04938, 12.50154, 12.96018, 11.74937, 10.61895, 10.18689, 9.245039, 10.93983, 9.164995, 8.762158, 9.462384, 6.784983,
   7.280013, 6.804694, 7.758584, 6.95972, 5.776209, 6.876882, 4.932655, 5.169383, 4.511328, 5.759501, 5.395161, 4.34581, 4.912806, 4.753387, 4.249982 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_dataw_bkg_fx3003,h_dataw_bkg_fy3003,h_dataw_bkg_felx3003,h_dataw_bkg_fehx3003,h_dataw_bkg_fely3003,h_dataw_bkg_fehy3003);
   grae->SetName("h_dataw_bkg");
   grae->SetTitle("Histogram of dataw_bkg_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataw_bkg3003 = new TH1F("Graph_h_dataw_bkg3003","Histogram of dataw_bkg_plot__tau",100,-12,12);
   Graph_h_dataw_bkg3003->SetMinimum(5.603025);
   Graph_h_dataw_bkg3003->SetMaximum(19026.56);
   Graph_h_dataw_bkg3003->SetDirectory(nullptr);
   Graph_h_dataw_bkg3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_dataw_bkg3003->SetLineColor(ci);
   Graph_h_dataw_bkg3003->GetXaxis()->SetLabelFont(42);
   Graph_h_dataw_bkg3003->GetXaxis()->SetTitleOffset(1);
   Graph_h_dataw_bkg3003->GetXaxis()->SetTitleFont(42);
   Graph_h_dataw_bkg3003->GetYaxis()->SetLabelFont(42);
   Graph_h_dataw_bkg3003->GetYaxis()->SetTitleFont(42);
   Graph_h_dataw_bkg3003->GetZaxis()->SetLabelFont(42);
   Graph_h_dataw_bkg3003->GetZaxis()->SetTitleOffset(1);
   Graph_h_dataw_bkg3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_dataw_bkg3003);
   
   grae->Draw("p");
   
   Double_t exp_DDS_fx7[91] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.25, -0.125, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125,
   0.1875, 0.25, 0.5, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75,
   4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75,
   8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t exp_DDS_fy7[91] = { 9.070784, 10.04495, 11.12374, 12.3184, 13.64135, 15.10638, 16.72875, 18.52536, 20.51491, 22.71814, 25.15799, 27.85986, 30.85191, 34.1653, 37.83453, 41.89782, 46.39749,
   51.38041, 56.89849, 63.00918, 69.77614, 77.26984, 85.56835, 94.75808, 104.9348, 116.2044, 128.6843, 142.5045, 157.809, 174.7571, 193.5254, 214.3093, 237.3254,
   262.8133, 291.0385, 322.295, 356.9083, 395.2373, 415.9083, 437.6083, 483.386, 505.6501, 514.6937, 517.9943, 520.1551, 520.9938, 520.4348, 518.5287, 515.4396,
   506.6678, 495.9689, 449.9616, 406.4866, 367.0699, 331.4711, 299.3247, 270.2959, 244.0824, 220.411, 199.0353, 179.7327, 162.302, 146.5618, 132.3481, 119.5129,
   107.9224, 97.45597, 88.00459, 79.46982, 71.76276, 64.80314, 58.51846, 52.84329, 47.71849, 43.09071, 38.91173, 35.13803, 31.73031, 28.65307, 25.87427, 23.36496,
   21.099, 19.0528, 17.20504, 15.53648, 14.02973, 12.66912, 11.44045, 10.33095, 9.329042, 9.329042 };
   TGraph *graph = new TGraph(91,exp_DDS_fx7,exp_DDS_fy7);
   graph->SetName("exp_DDS");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_DDS7 = new TH1F("Graph_exp_DDS7","Projection of model2",100,-12,12);
   Graph_exp_DDS7->SetMinimum(8.163705);
   Graph_exp_DDS7->SetMaximum(572.1861);
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
   
   Double_t model1_fx8[129] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1.125, -1, -0.875, -0.8125, -0.75, -0.6875, -0.625, -0.59375, -0.5625, -0.53125, -0.5, -0.46875, -0.4375,
   -0.40625, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625,
   0.09375, 0.125, 0.15625, 0.1875, 0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.53125, 0.5625, 0.59375,
   0.625, 0.6875, 0.75, 0.8125, 0.875, 0.9375, 1, 1.0625, 1.125, 1.25, 1.375, 1.5, 1.625, 1.75, 2, 2.25,
   2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25,
   6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model1_fy8[129] = { 7.82943e-16, 2.363238e-15, 7.133208e-15, 2.15309e-14, 6.498897e-14, 1.96163e-13, 5.920991e-13, 1.787194e-12, 5.394474e-12, 1.62827e-11, 4.914778e-11, 1.483479e-10, 4.477738e-10, 1.351562e-09, 4.079561e-09, 1.231376e-08, 3.716791e-08,
   1.121878e-07, 3.38628e-07, 1.022116e-06, 3.08516e-06, 9.312259e-06, 2.810816e-05, 8.484179e-05, 0.0002560868, 0.0007729734, 0.002333146, 0.007042378, 0.02125674, 0.06416143, 0.1936651, 0.5845596, 1.764437,
   5.325784, 16.07537, 48.52195, 84.29971, 146.4557, 254.4091, 335.2503, 441.6452, 581.4615, 764.7297, 876.4738, 1004.001, 1149.32, 1314.626, 1502.303, 1714.933,
   1955.294, 2226.374, 2531.362, 2873.6, 3256.404, 3682.602, 4153.539, 4667.331, 5216.332, 5784.338, 6344.732, 6861.217, 7292.366, 7599.654, 7756.631, 7755.615,
   7609.032, 7344.887, 6998.6, 6604.701, 5777.55, 5375.481, 4991.091, 4627.049, 4284.199, 3962.52, 3661.591, 3380.794, 3119.387, 2876.536, 2651.34, 2442.848,
   2250.079, 1907.767, 1616.687, 1369.649, 1160.209, 982.7406, 832.3987, 705.0503, 597.1831, 428.4314, 307.3654, 220.5101, 158.1984, 113.4948, 58.41482, 30.06563,
   15.47453, 7.964614, 4.099321, 2.109887, 1.085942, 0.5589252, 0.2876742, 0.1480635, 0.07620709, 0.03922316, 0.02018784, 0.01039052, 0.005347913, 0.002752527, 0.001416703, 0.0007291654,
   0.0003752954, 0.0001931615, 9.941862e-05, 5.116995e-05, 2.633675e-05, 1.355531e-05, 6.976807e-06, 3.590905e-06, 1.848209e-06, 9.512582e-07, 4.896048e-07, 2.519955e-07, 1.297e-07, 6.675554e-08, 3.435853e-08, 3.435853e-08 };
   graph = new TGraph(129,model1_fx8,model1_fy8);
   graph->SetName("model1");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model18 = new TH1F("Graph_model18","Projection of model2",129,-12,12);
   Graph_model18->SetMinimum(7.046487e-16);
   Graph_model18->SetMaximum(8532.294);
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
   
   Double_t resolution_bkg_fx9[110] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625,
   -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375,
   0.375, 0.40625, 0.4375, 0.5, 0.5625, 0.625, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3,
   3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7,
   7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t resolution_bkg_fy9[110] = { 0, 0, 0, 0, 0, 0, 7.493118e-308, 6.230047e-290, 1.519106e-272, 1.086307e-255, 2.278164e-239, 1.401153e-223, 2.527283e-208, 1.336873e-193, 2.073931e-179, 9.43553e-166, 1.258944e-152,
   4.926225e-140, 5.653144e-128, 1.90254e-116, 1.877783e-105, 5.435319e-95, 4.613946e-85, 1.148651e-75, 8.386317e-67, 1.795653e-58, 1.127565e-50, 2.076485e-43, 1.12146e-36, 1.77626e-30, 8.250826e-25, 1.123974e-19, 4.490377e-15,
   5.26111e-11, 1.807756e-07, 0.0001821672, 0.05383548, 4.665893, 27.42164, 118.6013, 219.9843, 379.8258, 488.9433, 626.9935, 812.8053, 1086.274, 1520.842, 2229.722, 3350.86,
   4996.233, 7167.929, 9675.302, 12113.41, 13951.33, 14718.71, 14203.82, 12549.66, 10188.66, 7656.549, 5394.632, 3638.113, 2418.119, 1637.384, 1157.836, 859.0761,
   659.7086, 514.0471, 399.9824, 233.1527, 126.6555, 63.76973, 12.84572, 0.2077304, 0.0009851664, 1.37021e-06, 5.588979e-10, 6.685683e-14, 2.345454e-18, 2.413104e-23, 7.281036e-29, 6.442852e-35,
   1.67198e-41, 1.272483e-48, 2.840145e-56, 1.859076e-64, 3.568796e-73, 2.009158e-82, 3.317222e-92, 1.606212e-102, 2.280862e-113, 9.498678e-125, 1.160099e-136, 4.155231e-149, 4.364787e-162, 1.344618e-175, 1.214794e-189, 3.218653e-204,
   2.501e-219, 5.699295e-235, 3.808873e-251, 7.465172e-268, 4.290926e-285, 7.233194e-303, 0, 0, 0, 0, 0, 0, 0 };
   graph = new TGraph(110,resolution_bkg_fx9,resolution_bkg_fy9);
   graph->SetName("resolution_bkg");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_resolution_bkg9 = new TH1F("Graph_resolution_bkg9","Projection of model2",110,-12,12);
   Graph_resolution_bkg9->SetMinimum(16.19058);
   Graph_resolution_bkg9->SetMaximum(16190.58);
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
   
   Double_t model2_fx10[117] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.875, -0.75, -0.6875, -0.625, -0.5625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125,
   -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875,
   0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.875, 1, 1.125, 1.25,
   1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25,
   5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25,
   9.5, 9.75, 10, 10 };
   Double_t model2_fy10[117] = { 9.070784, 10.04495, 11.12374, 12.3184, 13.64135, 15.10638, 16.72875, 18.52536, 20.51491, 22.71814, 25.15799, 27.85986, 30.85191, 34.1653, 37.83453, 41.89782, 46.39749,
   51.38041, 56.89849, 63.00918, 69.77614, 77.26985, 85.56837, 94.75816, 104.935, 116.2051, 128.6866, 142.5116, 157.8303, 174.8213, 193.7191, 214.8939, 239.0898,
   268.1391, 307.1138, 370.8171, 503.4178, 630.5781, 841.5483, 998.6583, 1208.06, 1489.889, 1870.835, 2383.737, 2701.243, 3066.432, 3486.301, 3972.379, 4546.798,
   5252.262, 6163.532, 7391.891, 9067.567, 11286.22, 14023.16, 17051.21, 19923.77, 22071.14, 22996.34, 22479.87, 20677.22, 18048.99, 15166.55, 12506, 10330.77,
   8691.638, 7503.17, 6633.479, 5964.883, 5416.863, 4943.728, 4522.965, 3802.501, 3216.724, 2741.576, 2354.484, 2036.02, 1548.391, 1199.676, 946.0164, 759.9035,
   519.8349, 383.7907, 302.4972, 250.4766, 214.5099, 187.6973, 166.4014, 148.6717, 133.4341, 120.0718, 108.2101, 97.60403, 88.0808, 79.50905, 71.78295, 64.81353,
   58.52381, 52.84604, 47.71991, 43.09144, 38.9121, 35.13822, 31.73041, 28.65312, 25.87429, 23.36497, 21.09901, 19.0528, 17.20504, 15.53648, 14.02973, 12.66912,
   11.44045, 10.33095, 9.329042, 9.329042 };
   graph = new TGraph(117,model2_fx10,model2_fy10);
   graph->SetName("model2");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model210 = new TH1F("Graph_model210","Projection of model2",117,-12,12);
   Graph_model210->SetMinimum(8.163705);
   Graph_model210->SetMaximum(25295.06);
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
   
   TH1D *frame_tau_10c5d650__6 = new TH1D("frame_tau_10c5d650__6"," ",80,-10,10);
   frame_tau_10c5d650__6->SetBinContent(1,24146.15);
   frame_tau_10c5d650__6->SetMinimum(4);
   frame_tau_10c5d650__6->SetMaximum(1000000);
   frame_tau_10c5d650__6->SetEntries(2);
   frame_tau_10c5d650__6->SetDirectory(nullptr);
   frame_tau_10c5d650__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_10c5d650__6->SetLineColor(ci);
   frame_tau_10c5d650__6->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_10c5d650__6->GetXaxis()->SetRange(13,68);
   frame_tau_10c5d650__6->GetXaxis()->SetLabelFont(42);
   frame_tau_10c5d650__6->GetXaxis()->SetLabelSize(0.04);
   frame_tau_10c5d650__6->GetXaxis()->SetTitleSize(0.045);
   frame_tau_10c5d650__6->GetXaxis()->SetTitleOffset(1);
   frame_tau_10c5d650__6->GetXaxis()->SetTitleFont(42);
   frame_tau_10c5d650__6->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_10c5d650__6->GetYaxis()->SetLabelFont(42);
   frame_tau_10c5d650__6->GetYaxis()->SetLabelSize(0.04);
   frame_tau_10c5d650__6->GetYaxis()->SetTitleSize(0.045);
   frame_tau_10c5d650__6->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_10c5d650__6->GetYaxis()->SetTitleFont(42);
   frame_tau_10c5d650__6->GetZaxis()->SetLabelFont(42);
   frame_tau_10c5d650__6->GetZaxis()->SetTitleOffset(1);
   frame_tau_10c5d650__6->GetZaxis()->SetTitleFont(42);
   frame_tau_10c5d650__6->Draw("AXISSAME");
   TLatex *   tex = new TLatex(0.13,0.85,"ALICE performance, pp, #sqrt{s} = 13.6 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.79,"MFT+MCH+MID");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.74,"2.5 < |#it{y}^{#mu#mu}| < 3.6");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.69,"0 < #it{p}_{T}^{#mu#mu} < 1 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.68,0.69,0.86,0.89,NULL,"brNDC");
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
      tex = new TLatex(0.15,0.59,"#chi^{2}/ndof = 145 / 80 ");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.4724649,0.94,0.5275351,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText(" ");
   pt->Draw();
   pad1_Tauz__2->Modified();
   cTauz_PP->cd();
   cTauz_PP->Modified();
   cTauz_PP->SetSelected(cTauz_PP);

   cTauz_PP->SaveAs("../pdf/cTauz_PP_pT0_1.pdf");
   cTauz_PP->SaveAs("../png/cTauz_PP_pT0_1.png");
}
