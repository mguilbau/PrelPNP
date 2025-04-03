#ifdef __CLING__
#pragma cling optimize(0)
#endif
void c2DFitbis_pT10_15()
{
//=========Macro generated from canvas: c2DFitbis/c2DFitbis
//=========  (Mon Mar 31 17:01:18 2025) by ROOT version 6.32.06
   TCanvas *c2DFitbis = new TCanvas("c2DFitbis", "c2DFitbis",1667,743,1000,800);
   c2DFitbis->Range(0,0,1,1);
   c2DFitbis->SetFillColor(0);
   c2DFitbis->SetBorderMode(0);
   c2DFitbis->SetBorderSize(2);
   c2DFitbis->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_2DFitbis
   TPad *pad1_2DFitbis__3 = new TPad("pad1_2DFitbis", "",0,0,1,1);
   pad1_2DFitbis__3->Draw();
   pad1_2DFitbis__3->cd();
   pad1_2DFitbis__3->Range(-5,0.1613412,5,5.537629);
   pad1_2DFitbis__3->SetFillColor(0);
   pad1_2DFitbis__3->SetBorderMode(0);
   pad1_2DFitbis__3->SetBorderSize(2);
   pad1_2DFitbis__3->SetLogy();
   pad1_2DFitbis__3->SetFrameBorderMode(0);
   pad1_2DFitbis__3->SetFrameBorderMode(0);
   
   TH1D *frame_tau_fdc6380__7 = new TH1D("frame_tau_fdc6380__7"," ",80,-10,10);
   frame_tau_fdc6380__7->SetBinContent(1,11204.92);
   frame_tau_fdc6380__7->SetMinimum(5);
   frame_tau_fdc6380__7->SetMaximum(100000);
   frame_tau_fdc6380__7->SetEntries(3);
   frame_tau_fdc6380__7->SetDirectory(nullptr);
   frame_tau_fdc6380__7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_fdc6380__7->SetLineColor(ci);
   frame_tau_fdc6380__7->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_fdc6380__7->GetXaxis()->SetRange(25,56);
   frame_tau_fdc6380__7->GetXaxis()->SetLabelFont(42);
   frame_tau_fdc6380__7->GetXaxis()->SetLabelSize(0.04);
   frame_tau_fdc6380__7->GetXaxis()->SetTitleSize(0.045);
   frame_tau_fdc6380__7->GetXaxis()->SetTitleOffset(1);
   frame_tau_fdc6380__7->GetXaxis()->SetTitleFont(42);
   frame_tau_fdc6380__7->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_fdc6380__7->GetYaxis()->SetLabelFont(42);
   frame_tau_fdc6380__7->GetYaxis()->SetLabelSize(0.04);
   frame_tau_fdc6380__7->GetYaxis()->SetTitleSize(0.045);
   frame_tau_fdc6380__7->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_fdc6380__7->GetYaxis()->SetTitleFont(42);
   frame_tau_fdc6380__7->GetZaxis()->SetLabelFont(42);
   frame_tau_fdc6380__7->GetZaxis()->SetTitleOffset(1);
   frame_tau_fdc6380__7->GetZaxis()->SetTitleFont(42);
   frame_tau_fdc6380__7->Draw("FUNC");
   
   Double_t h_data_fx3004[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_fy3004[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1,
   1, 1, 1, 0, 3, 0, 3, 0, 4, 2, 5, 7, 9, 5, 8, 12,
   9, 16, 13, 32, 47, 85, 2566, 3730, 923, 464, 252, 142, 85, 52, 37, 18,
   8, 8, 9, 2, 3, 6, 0, 1, 1, 0, 2, 0, 1, 0, 0, 0,
   1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_data_felx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fely3004[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.8272462, 0, 0, 0, 0, 0.8272462,
   0.8272462, 0.8272462, 0.8272462, 0, 1.632705, 0, 1.632705, 0, 1.914339, 1.291815, 2.159691, 2.58147, 2.943461, 2.159691, 2.768386, 3.415266,
   2.943461, 3.957801, 3.558662, 5.627135, 6.831172, 9.201374, 50.15817, 60.57577, 29.88503, 21.04646, 15.38238, 11.42686, 9.201374, 7.187836, 6.055143, 4.202887,
   2.768386, 2.768386, 2.943461, 1.291815, 1.632705, 2.379931, 0, 0.8272462, 0.8272462, 0, 1.291815, 0, 0.8272462, 0, 0, 0,
   0.8272462, 0.8272462, 1.291815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_data_fehx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fehy3004[80] = { 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 2.299527, 1.147874, 1.147874, 1.147874, 1.147874, 2.299527,
   2.299527, 2.299527, 2.299527, 1.147874, 2.918186, 1.147874, 2.918186, 1.147874, 3.162753, 2.63786, 3.382473, 3.770281, 4.110204, 3.382473, 3.945142, 4.559819,
   4.110204, 5.083066, 4.697573, 6.715753, 7.904289, 10.25573, 51.15817, 61.57577, 30.88503, 22.04646, 16.38238, 12.42686, 10.25573, 8.257346, 7.137555, 5.321007,
   3.945142, 3.945142, 4.110204, 2.63786, 2.918186, 3.583642, 1.147874, 2.299527, 2.299527, 1.147874, 2.63786, 1.147874, 2.299527, 1.147874, 1.147874, 1.147874,
   2.299527, 2.299527, 2.63786, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_fx3004,h_data_fy3004,h_data_felx3004,h_data_fehx3004,h_data_fely3004,h_data_fehy3004);
   grae->SetName("h_data");
   grae->SetTitle("Histogram of data_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data3004 = new TH1F("Graph_h_data3004","Histogram of data_plot__tau",100,-12,12);
   Graph_h_data3004->SetMinimum(4.170733);
   Graph_h_data3004->SetMaximum(4170.733);
   Graph_h_data3004->SetDirectory(nullptr);
   Graph_h_data3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_data3004->SetLineColor(ci);
   Graph_h_data3004->GetXaxis()->SetLabelFont(42);
   Graph_h_data3004->GetXaxis()->SetTitleOffset(1);
   Graph_h_data3004->GetXaxis()->SetTitleFont(42);
   Graph_h_data3004->GetYaxis()->SetLabelFont(42);
   Graph_h_data3004->GetYaxis()->SetTitleFont(42);
   Graph_h_data3004->GetZaxis()->SetLabelFont(42);
   Graph_h_data3004->GetZaxis()->SetTitleOffset(1);
   Graph_h_data3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_data3004);
   
   grae->Draw("p");
   
   Double_t model2_fx11[112] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.375, 0.4375,
   0.5, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 1, 1.125, 1.25, 1.375, 1.5, 1.75, 2, 2.25, 2.5,
   2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5,
   6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model2_fy11[112] = { 0.002466281, 0.00313901, 0.003995241, 0.005085026, 0.006472074, 0.008237467, 0.01048441, 0.01334425, 0.01698417, 0.02161696, 0.02751344, 0.0350183, 0.04457028, 0.05672775, 0.07220143, 0.09189588, 0.1169624,
   0.1488663, 0.1894728, 0.2411554, 0.3069356, 0.3906587, 0.497219, 0.6328459, 0.8054678, 1.025176, 1.304814, 1.660729, 2.113728, 2.690292, 3.424128, 4.35815, 5.547056,
   7.060999, 8.992876, 11.4852, 14.88284, 20.72528, 26.60574, 38.38133, 48.88746, 65.00707, 90.13369, 107.7154, 130.0084, 158.6764, 196.3577, 247.0699, 316.3439,
   415.2115, 591.9253, 965.6521, 1482.113, 1663.417, 1355.968, 1012.286, 840.3282, 751.3037, 684.7948, 628.8811, 580.4789, 537.3871, 498.188, 428.7775, 369.3188,
   318.2982, 274.5038, 236.9011, 204.6045, 176.8558, 153.0055, 132.4976, 99.67217, 75.33166, 57.23958, 43.75402, 33.66899, 20.38981, 12.76738, 8.286364, 5.574524,
   3.877753, 2.777371, 2.037668, 1.523468, 1.155396, 0.8854781, 0.6837457, 0.5307929, 0.4135948, 0.3231095, 0.2528725, 0.1981473, 0.1553968, 0.1219404, 0.09572499, 0.07516591,
   0.0590333, 0.04636906, 0.03642479, 0.02861485, 0.02248037, 0.0176615, 0.01387585, 0.01090178, 0.008565229, 0.006729505, 0.005287241, 0.004154093, 0.003263805, 0.002564323, 0.002564323 };
   TGraph *graph = new TGraph(112,model2_fx11,model2_fy11);
   graph->SetName("model2");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model211 = new TH1F("Graph_model211","Projection of Fit_Total",112,-12,12);
   Graph_model211->SetMinimum(0.002219653);
   Graph_model211->SetMaximum(1829.758);
   Graph_model211->SetDirectory(nullptr);
   Graph_model211->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_model211->SetLineColor(ci);
   Graph_model211->GetXaxis()->SetLabelFont(42);
   Graph_model211->GetXaxis()->SetTitleOffset(1);
   Graph_model211->GetXaxis()->SetTitleFont(42);
   Graph_model211->GetYaxis()->SetLabelFont(42);
   Graph_model211->GetYaxis()->SetTitleFont(42);
   Graph_model211->GetZaxis()->SetLabelFont(42);
   Graph_model211->GetZaxis()->SetTitleOffset(1);
   Graph_model211->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_model211);
   
   graph->Draw("l");
   
   Double_t tausigModel_fx12[98] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0,
   0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.375, 0.5, 0.75, 1, 1.25, 1.5, 1.75, 2,
   2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6,
   6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10,
   10 };
   Double_t tausigModel_fy12[98] = { 0.3514962, 0.3627355, 0.3746424, 0.3872756, 0.4007013, 0.4149933, 0.430235, 0.4465205, 0.4639565, 0.4826646, 0.5027836, 0.5244728, 0.547916, 0.5733261, 0.6009515, 0.6310828, 0.6640631,
   0.7002992, 0.740278, 0.7845859, 0.833936, 0.889203, 0.951472, 1.022104, 1.102828, 1.195873, 1.304161, 1.43159, 1.583477, 1.767254, 1.993611, 2.278476, 2.646586,
   3.138428, 3.824802, 4.840877, 6.478184, 9.491408, 16.54534, 25.01284, 55.12268, 86.2066, 155.1165, 297.2344, 562.8126, 1069.129, 2816.17, 6420.703, 8661.122,
   6404.23, 2803.827, 1065.792, 561.2881, 296.3912, 154.6889, 86.00962, 55.03466, 24.9994, 16.53902, 9.489098, 6.477026, 4.840193, 3.824355, 3.138116, 2.646357,
   2.278301, 1.993474, 1.767143, 1.583387, 1.431515, 1.304097, 1.195819, 1.102781, 1.022063, 0.951436, 0.8891712, 0.8339076, 0.7845605, 0.7402551, 0.7002785, 0.6640443,
   0.6310657, 0.6009358, 0.5733117, 0.5479027, 0.5244605, 0.5027722, 0.4826541, 0.4639467, 0.4465113, 0.4302264, 0.4149852, 0.4006937, 0.3872685, 0.3746357, 0.3627292, 0.3514902,
   0.3514902 };
   graph = new TGraph(98,tausigModel_fx12,tausigModel_fy12);
   graph->SetName("tausigModel");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_tausigModel12 = new TH1F("Graph_tausigModel12","Projection of Fit_Total",100,-12,12);
   Graph_tausigModel12->SetMinimum(0.3163412);
   Graph_tausigModel12->SetMaximum(9527.199);
   Graph_tausigModel12->SetDirectory(nullptr);
   Graph_tausigModel12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tausigModel12->SetLineColor(ci);
   Graph_tausigModel12->GetXaxis()->SetLabelFont(42);
   Graph_tausigModel12->GetXaxis()->SetTitleOffset(1);
   Graph_tausigModel12->GetXaxis()->SetTitleFont(42);
   Graph_tausigModel12->GetYaxis()->SetLabelFont(42);
   Graph_tausigModel12->GetYaxis()->SetTitleFont(42);
   Graph_tausigModel12->GetZaxis()->SetLabelFont(42);
   Graph_tausigModel12->GetZaxis()->SetTitleOffset(1);
   Graph_tausigModel12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tausigModel12);
   
   graph->Draw("l");
   
   Double_t exp_np_fx13[116] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.25, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625,
   0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.53125, 0.5625,
   0.59375, 0.625, 0.65625, 0.6875, 0.75, 0.8125, 0.875, 0.9375, 1, 1.0625, 1.125, 1.1875, 1.25, 1.375, 1.5, 1.625,
   1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5,
   5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5,
   9.75, 10, 10 };
   Double_t exp_np_fy13[116] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2.970738e-268, 1.093433e-221, 1.506442e-179, 7.786493e-142,
   1.514782e-108, 1.114286e-79, 3.121601e-55, 3.36968e-35, 1.431882e-19, 2.505902e-08, 0.20424, 2.386655, 6.559852, 15.9216, 37.31146, 97.39473, 256.7737, 528.118, 777.1056, 881.8918,
   875.9501, 830.9483, 776.8766, 721.5158, 667.7782, 617.0559, 569.833, 526.1174, 485.7284, 448.4341, 414.0022, 382.2139, 352.8664, 325.7723, 300.7585, 277.6654,
   256.3454, 236.6624, 218.4908, 201.7144, 171.9272, 146.5386, 124.8992, 106.4553, 90.73501, 77.33614, 65.91589, 56.18207, 47.88564, 34.78728, 25.27177, 18.35908,
   13.33724, 7.038766, 3.714727, 1.960457, 1.034636, 0.5460321, 0.2881699, 0.1520824, 0.08026188, 0.04235842, 0.02235477, 0.01179779, 0.006226313, 0.003285953, 0.00173417, 0.000915213,
   0.0004830061, 0.0002549077, 0.0001345282, 7.099762e-05, 3.746918e-05, 1.977446e-05, 1.043602e-05, 5.507638e-06, 2.906671e-06, 1.534003e-06, 8.095741e-07, 4.272549e-07, 2.254849e-07, 1.190002e-07, 6.280269e-08, 3.314428e-08,
   1.749198e-08, 9.23144e-09, 9.23144e-09 };
   graph = new TGraph(116,exp_np_fx13,exp_np_fy13);
   graph->SetName("exp_np");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_np13 = new TH1F("Graph_exp_np13","Projection of Fit_Total",116,-12,12);
   Graph_exp_np13->SetMinimum(0.970081);
   Graph_exp_np13->SetMaximum(970.081);
   Graph_exp_np13->SetDirectory(nullptr);
   Graph_exp_np13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_exp_np13->SetLineColor(ci);
   Graph_exp_np13->GetXaxis()->SetLabelFont(42);
   Graph_exp_np13->GetXaxis()->SetTitleOffset(1);
   Graph_exp_np13->GetXaxis()->SetTitleFont(42);
   Graph_exp_np13->GetYaxis()->SetLabelFont(42);
   Graph_exp_np13->GetYaxis()->SetTitleFont(42);
   Graph_exp_np13->GetZaxis()->SetLabelFont(42);
   Graph_exp_np13->GetZaxis()->SetTitleOffset(1);
   Graph_exp_np13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_exp_np13);
   
   graph->Draw("l");
   
   Double_t Fit_Total_fx14[102] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125,
   0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.3125, 0.375, 0.5, 0.625, 0.75, 0.875, 1,
   1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5,
   5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9,
   9.25, 9.5, 9.75, 10, 10 };
   Double_t Fit_Total_fy14[102] = { 0.3539625, 0.3658745, 0.3786376, 0.3923606, 0.4071733, 0.4232307, 0.4407194, 0.4598647, 0.4809407, 0.5042816, 0.530297, 0.5594911, 0.5924862, 0.6300539, 0.6731529, 0.7229787, 0.7810255,
   0.8491656, 0.9297507, 1.025741, 1.140872, 1.279862, 1.448691, 1.65495, 1.908296, 2.221049, 2.608975, 3.09232, 3.697206, 4.457546, 5.41774, 6.636626, 8.193642,
   10.19943, 12.81768, 16.32608, 21.36103, 30.21668, 54.92667, 90.02015, 123.471, 185.3353, 245.6348, 353.8608, 550.8642, 895.0781, 1521.652, 3505.49, 7643.128,
   10671.35, 8844.753, 5041.687, 2954.028, 2232.565, 1824.572, 1560.999, 1382.669, 1252.569, 1057.608, 902.211, 660.6095, 485.7091, 358.2721, 265.1222, 196.8842,
   109.9654, 62.76512, 36.86517, 22.45251, 14.27939, 9.528455, 6.679533, 4.90679, 3.757353, 2.979648, 2.431476, 2.030617, 1.728163, 1.494027, 1.308992, 1.160303,
   1.039167, 0.9393177, 0.8561583, 0.7862396, 0.7269252, 0.6761727, 0.6323825, 0.5942915, 0.5608957, 0.5313926, 0.5051374, 0.4816098, 0.460388, 0.4411286, 0.4235507, 0.4074233,
   0.3925558, 0.3787898, 0.3659931, 0.3540546, 0.3540546 };
   graph = new TGraph(102,Fit_Total_fx14,Fit_Total_fy14);
   graph->SetName("Fit_Total");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Fit_Total14 = new TH1F("Graph_Fit_Total14","Projection of Fit_Total",102,-12,12);
   Graph_Fit_Total14->SetMinimum(0.3185662);
   Graph_Fit_Total14->SetMaximum(11738.45);
   Graph_Fit_Total14->SetDirectory(nullptr);
   Graph_Fit_Total14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Fit_Total14->SetLineColor(ci);
   Graph_Fit_Total14->GetXaxis()->SetLabelFont(42);
   Graph_Fit_Total14->GetXaxis()->SetTitleOffset(1);
   Graph_Fit_Total14->GetXaxis()->SetTitleFont(42);
   Graph_Fit_Total14->GetYaxis()->SetLabelFont(42);
   Graph_Fit_Total14->GetYaxis()->SetTitleFont(42);
   Graph_Fit_Total14->GetZaxis()->SetLabelFont(42);
   Graph_Fit_Total14->GetZaxis()->SetTitleOffset(1);
   Graph_Fit_Total14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Fit_Total14);
   
   graph->Draw("l");
   
   TH1D *frame_tau_fdc6380__8 = new TH1D("frame_tau_fdc6380__8"," ",80,-10,10);
   frame_tau_fdc6380__8->SetBinContent(1,11204.92);
   frame_tau_fdc6380__8->SetMinimum(5);
   frame_tau_fdc6380__8->SetMaximum(100000);
   frame_tau_fdc6380__8->SetEntries(3);
   frame_tau_fdc6380__8->SetDirectory(nullptr);
   frame_tau_fdc6380__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_fdc6380__8->SetLineColor(ci);
   frame_tau_fdc6380__8->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_fdc6380__8->GetXaxis()->SetRange(25,56);
   frame_tau_fdc6380__8->GetXaxis()->SetLabelFont(42);
   frame_tau_fdc6380__8->GetXaxis()->SetLabelSize(0.04);
   frame_tau_fdc6380__8->GetXaxis()->SetTitleSize(0.045);
   frame_tau_fdc6380__8->GetXaxis()->SetTitleOffset(1);
   frame_tau_fdc6380__8->GetXaxis()->SetTitleFont(42);
   frame_tau_fdc6380__8->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_fdc6380__8->GetYaxis()->SetLabelFont(42);
   frame_tau_fdc6380__8->GetYaxis()->SetLabelSize(0.04);
   frame_tau_fdc6380__8->GetYaxis()->SetTitleSize(0.045);
   frame_tau_fdc6380__8->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_fdc6380__8->GetYaxis()->SetTitleFont(42);
   frame_tau_fdc6380__8->GetZaxis()->SetLabelFont(42);
   frame_tau_fdc6380__8->GetZaxis()->SetTitleOffset(1);
   frame_tau_fdc6380__8->GetZaxis()->SetTitleFont(42);
   frame_tau_fdc6380__8->Draw("AXISSAME");
   TLatex *   tex = new TLatex(0.13,0.85,"ALICE preliminary, pp, #sqrt{s} = 13.6 TeV");
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
      tex = new TLatex(0.15,0.69,"10 < #it{p}_{T}^{#mu#mu} < 15 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.54,"N_{J/#psi} = 5934#pm92");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.49,"N_{bkg} = 2644#pm72");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.44,"f_{B} = 0.306#pm0.009");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.66,0.66,0.86,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.04);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Fit_Total","Total fit","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tausigModel","Prompt","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("exp_np","Non-prompt","l");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","Background","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.15,0.39,"#chi^{2}/ndof = 27 / 32 ");
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
   pad1_2DFitbis__3->Modified();
   c2DFitbis->cd();
   c2DFitbis->Modified();
   c2DFitbis->SetSelected(c2DFitbis);

   c2DFitbis->SaveAs("../pdf/c2DFitbis_pT10_15.pdf");
   c2DFitbis->SaveAs("../png/c2DFitbis_pT10_15.png");
}
