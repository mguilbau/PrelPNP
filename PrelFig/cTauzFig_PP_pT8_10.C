#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauzFig_PP_pT8_10()
{
//=========Macro generated from canvas: cTauzFig_PP/cTauzFig
//=========  (Mon Mar 31 12:43:02 2025) by ROOT version 6.32.06
   TCanvas *cTauzFig_PP = new TCanvas("cTauzFig_PP", "cTauzFig",200,1103,1000,800);
   cTauzFig_PP->Range(0,0,1,1);
   cTauzFig_PP->SetFillColor(0);
   cTauzFig_PP->SetBorderMode(0);
   cTauzFig_PP->SetBorderSize(2);
   cTauzFig_PP->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_TauzPP
   TPad *pad1_TauzPP__2 = new TPad("pad1_TauzPP", "",0,0.23,1,1);
   pad1_TauzPP__2->Draw();
   pad1_TauzPP__2->cd();
   pad1_TauzPP__2->Range(-12.5,0.1760913,12.5,5.318523);
   pad1_TauzPP__2->SetFillColor(0);
   pad1_TauzPP__2->SetBorderMode(0);
   pad1_TauzPP__2->SetBorderSize(2);
   pad1_TauzPP__2->SetLogy();
   pad1_TauzPP__2->SetBottomMargin(0);
   pad1_TauzPP__2->SetFrameBorderMode(0);
   pad1_TauzPP__2->SetFrameBorderMode(0);
   
   TH1D *frame_tau_ce2e940__5 = new TH1D("frame_tau_ce2e940__5"," ",80,-10,10);
   frame_tau_ce2e940__5->SetBinContent(1,12059.14);
   frame_tau_ce2e940__5->SetMinimum(1.5);
   frame_tau_ce2e940__5->SetMaximum(63720.6);
   frame_tau_ce2e940__5->SetEntries(4);
   frame_tau_ce2e940__5->SetDirectory(nullptr);
   frame_tau_ce2e940__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_ce2e940__5->SetLineColor(ci);
   frame_tau_ce2e940__5->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_ce2e940__5->GetXaxis()->SetLabelFont(42);
   frame_tau_ce2e940__5->GetXaxis()->SetLabelSize(0.04);
   frame_tau_ce2e940__5->GetXaxis()->SetTitleSize(0.045);
   frame_tau_ce2e940__5->GetXaxis()->SetTitleOffset(1);
   frame_tau_ce2e940__5->GetXaxis()->SetTitleFont(42);
   frame_tau_ce2e940__5->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_ce2e940__5->GetYaxis()->SetLabelFont(42);
   frame_tau_ce2e940__5->GetYaxis()->SetLabelSize(0.04);
   frame_tau_ce2e940__5->GetYaxis()->SetTitleSize(0.045);
   frame_tau_ce2e940__5->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_ce2e940__5->GetYaxis()->SetTitleFont(42);
   frame_tau_ce2e940__5->GetZaxis()->SetLabelFont(42);
   frame_tau_ce2e940__5->GetZaxis()->SetTitleOffset(1);
   frame_tau_ce2e940__5->GetZaxis()->SetTitleFont(42);
   frame_tau_ce2e940__5->Draw("FUNC");
   
   Double_t h_data_sig_cut_fx3003[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_sig_cut_fy3003[80] = { 0, 0, -0.5748624, -0.1628902, 0, 0, 0, 0, 0, 0, 0, -0.3756616, 0, 1.142948, 0, 0, 1.242213,
   2.213816, 0.8568834, 0, 0.8630706, 0, 1.998393, -1.328782, 1.254118, -0.2606352, 2.011878, 1.643933, 2.141202, 0.9863762, 4.165549, 5.732921, 6.688198,
   8.273822, 6.019939, 5.135425, 8.038696, 14.51732, 53.27709, 2817.769, 3540.311, 478.9787, 266.3979, 152.31, 76.84367, 26.24694, 34.02293, 16.73544, 3.87493,
   5.463583, 5.360893, 6.832522, 3.091072, 4.146949, 1.003062, 2.612742, 1.01965, 4.444781, 0, 0.6255628, -0.5746259, 0, 0, -0.4498616, 1.075548,
   1.641819, -0.0611758, 0, 1.805265, 0, 0, 0, 1.147444, 0, 0, 0, 0, 2.130529, 0, 0 };
   Double_t h_data_sig_cut_felx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fely3003[80] = { 0, 0, 0.5748624, 0.1628902, 0, 0, 0, 0, 0, 0, 0, 0.3756616, 0, 1.142948, 0, 0, 1.270135,
   1.566241, 0.8568834, 0, 1.180719, 0, 1.779195, 1.24058, 1.656941, 1.419588, 1.328976, 1.651473, 1.79907, 0.8686034, 2.544914, 2.498505, 3.030508,
   3.430637, 3.562908, 3.256607, 4.381798, 5.509875, 9.340685, 57.7713, 66.03911, 27.20135, 19.95243, 14.82633, 11.15923, 6.869305, 7.105636, 5.248672, 3.685545,
   3.634113, 2.465376, 2.572172, 2.526193, 2.326438, 1.334339, 1.936824, 1.01965, 2.248797, 0, 1.220484, 0.5746259, 0, 0, 0.582965, 1.075548,
   1.189158, 0.06117581, 0, 1.308849, 0, 0, 0, 1.147444, 0, 0, 0, 0, 1.508452, 0, 0 };
   Double_t h_data_sig_cut_fehx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fehy3003[80] = { 0, 0, 0.5748624, 0.1628902, 0, 0, 0, 0, 0, 0, 0, 0.3756616, 0, 1.142948, 0, 0, 1.270135,
   1.566241, 0.8568834, 0, 1.180719, 0, 1.779195, 1.24058, 1.656941, 1.419588, 1.328976, 1.651473, 1.79907, 0.8686034, 2.544914, 2.498505, 3.030508,
   3.430637, 3.562908, 3.256607, 4.381798, 5.509875, 9.340685, 57.7713, 66.03911, 27.20135, 19.95243, 14.82633, 11.15923, 6.869305, 7.105636, 5.248672, 3.685545,
   3.634113, 2.465376, 2.572172, 2.526193, 2.326438, 1.334339, 1.936824, 1.01965, 2.248797, 0, 1.220484, 0.5746259, 0, 0, 0.582965, 1.075548,
   1.189158, 0.06117581, 0, 1.308849, 0, 0, 0, 1.147444, 0, 0, 0, 0, 1.508452, 0, 0 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_sig_cut_fx3003,h_data_sig_cut_fy3003,h_data_sig_cut_felx3003,h_data_sig_cut_fehx3003,h_data_sig_cut_fely3003,h_data_sig_cut_fehy3003);
   grae->SetName("h_data_sig_cut");
   grae->SetTitle("Histogram of data_sig_cut_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data_sig_cut3003 = new TH1F("Graph_h_data_sig_cut3003","Histogram of data_sig_cut_plot__tau",100,-12,12);
   Graph_h_data_sig_cut3003->SetMinimum(3.967118);
   Graph_h_data_sig_cut3003->SetMaximum(3967.118);
   Graph_h_data_sig_cut3003->SetDirectory(nullptr);
   Graph_h_data_sig_cut3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_data_sig_cut3003->SetLineColor(ci);
   Graph_h_data_sig_cut3003->GetXaxis()->SetLabelFont(42);
   Graph_h_data_sig_cut3003->GetXaxis()->SetTitleOffset(1);
   Graph_h_data_sig_cut3003->GetXaxis()->SetTitleFont(42);
   Graph_h_data_sig_cut3003->GetYaxis()->SetLabelFont(42);
   Graph_h_data_sig_cut3003->GetYaxis()->SetTitleFont(42);
   Graph_h_data_sig_cut3003->GetZaxis()->SetLabelFont(42);
   Graph_h_data_sig_cut3003->GetZaxis()->SetTitleOffset(1);
   Graph_h_data_sig_cut3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_data_sig_cut3003);
   
   grae->Draw("p");
   
   Double_t gauss1_fx4[100] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125,
   0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.5, 0.75, 1, 1.25, 1.5, 1.75, 2,
   2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6,
   6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10,
   10, 10.25, 10.25025 };
   Double_t gauss1_fy4[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.478922e-305,
   5.551533e-247, 1.432689e-194, 2.541922e-148, 3.100588e-108, 2.600143e-74, 1.499069e-46, 5.941794e-25, 1.619142e-09, 3.033357, 16.13194, 68.73167, 234.6036, 641.534, 1405.439, 2466.675, 3468.319,
   3906.912, 3525.782, 2549.088, 1476.459, 685.1181, 254.6929, 75.85348, 18.09846, 3.459514, 2.106046e-09, 8.814387e-25, 2.536225e-46, 5.017123e-74, 6.823279e-108, 6.379739e-148, 4.100946e-194,
   1.812327e-246, 5.506308e-305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0 };
   TGraph *graph = new TGraph(100,gauss1_fx4,gauss1_fy4);
   graph->SetName("gauss1");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_gauss14 = new TH1F("Graph_gauss14","Projection of ",100,-12.3003,12.3003);
   Graph_gauss14->SetMinimum(4.297603);
   Graph_gauss14->SetMaximum(4297.603);
   Graph_gauss14->SetDirectory(nullptr);
   Graph_gauss14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gauss14->SetLineColor(ci);
   Graph_gauss14->GetXaxis()->SetLabelFont(42);
   Graph_gauss14->GetXaxis()->SetTitleOffset(1);
   Graph_gauss14->GetXaxis()->SetTitleFont(42);
   Graph_gauss14->GetYaxis()->SetLabelFont(42);
   Graph_gauss14->GetYaxis()->SetTitleFont(42);
   Graph_gauss14->GetZaxis()->SetLabelFont(42);
   Graph_gauss14->GetZaxis()->SetTitleOffset(1);
   Graph_gauss14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gauss14);
   
   graph->Draw("l");
   
   Double_t DCB_fx5[100] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.25, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125,
   0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.25, 0.375, 0.5, 0.75, 1, 1.25, 1.5, 1.75, 2,
   2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6,
   6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10,
   10, 10.25, 10.25025 };
   Double_t DCB_fy5[100] = { 0, 0.2047521, 0.2047521, 0.2133056, 0.2224533, 0.232254, 0.2427739, 0.2540881, 0.266282, 0.2794531, 0.2937131, 0.3091904, 0.3260338, 0.3444156, 0.3645373, 0.3866351, 0.4109878,
   0.4379266, 0.4678471, 0.501226, 0.5386414, 0.5808012, 0.6285793, 0.6830668, 0.7456403, 0.8180585, 0.9026, 1.002263, 1.121061, 1.264475, 1.440164, 1.659112, 1.937574,
   2.300499, 2.78793, 3.467786, 4.463612, 6.021852, 8.700832, 14.0284, 27.73875, 45.38395, 92.52003, 156.332, 220.5704, 341.8833, 625.2919, 1659.832, 4869.563,
   7097.823, 5129.454, 1837.925, 660.7838, 355.04, 226.9911, 159.9913, 94.07609, 45.87231, 27.9582, 14.10095, 8.734258, 6.040253, 4.474935, 3.475306, 2.79321,
   2.304365, 1.940501, 1.661389, 1.441973, 1.265941, 1.122266, 1.003268, 0.9034486, 0.818782, 0.7462629, 0.683607, 0.6290514, 0.5812165, 0.539009, 0.5015531, 0.4681397,
   0.4381894, 0.411225, 0.3868499, 0.3647326, 0.3445937, 0.3261967, 0.30934, 0.2938506, 0.27958, 0.2663994, 0.2541969, 0.242875, 0.2323481, 0.222541, 0.2133875, 0.2048288,
   0.2048288, 0.2048288, 0 };
   graph = new TGraph(100,DCB_fx5,DCB_fy5);
   graph->SetName("DCB");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_DCB5 = new TH1F("Graph_DCB5","Projection of ",100,-12.3003,12.3003);
   Graph_DCB5->SetMinimum(7.807606);
   Graph_DCB5->SetMaximum(7807.606);
   Graph_DCB5->SetDirectory(nullptr);
   Graph_DCB5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_DCB5->SetLineColor(ci);
   Graph_DCB5->GetXaxis()->SetLabelFont(42);
   Graph_DCB5->GetXaxis()->SetTitleOffset(1);
   Graph_DCB5->GetXaxis()->SetTitleFont(42);
   Graph_DCB5->GetYaxis()->SetLabelFont(42);
   Graph_DCB5->GetYaxis()->SetTitleFont(42);
   Graph_DCB5->GetZaxis()->SetLabelFont(42);
   Graph_DCB5->GetZaxis()->SetTitleOffset(1);
   Graph_DCB5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_DCB5);
   
   graph->Draw("l");
   
   Double_t model_fx6[104] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625,
   -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.3125, 0.375, 0.5, 0.625, 0.75, 1,
   1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5,
   5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9,
   9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t model_fy6[104] = { 0, 0.2047521, 0.2047521, 0.2133056, 0.2224533, 0.232254, 0.2427739, 0.2540881, 0.266282, 0.2794531, 0.2937131, 0.3091904, 0.3260338, 0.3444156, 0.3645373, 0.3866351, 0.4109878,
   0.4379266, 0.4678471, 0.501226, 0.5386414, 0.5808012, 0.6285793, 0.6830668, 0.7456403, 0.8180585, 0.9026, 1.002263, 1.121061, 1.264475, 1.440164, 1.659112, 1.937574,
   2.300499, 2.78793, 3.467786, 4.463612, 6.021852, 8.700832, 14.0284, 27.73875, 45.38437, 95.58911, 134.0831, 226.0917, 459.2234, 996.6124, 2068.155, 4226.445,
   8582.969, 11484.9, 9357.283, 5196.867, 2956.944, 1826.597, 1220.631, 924.0531, 776.8954, 689.746, 571.949, 482.8868, 350.4228, 257.0931, 189.6731, 104.3279,
   58.0881, 32.8134, 18.90473, 11.19406, 6.878373, 4.430909, 3.01734, 2.180247, 1.667908, 1.341126, 1.122431, 0.9683288, 0.8541073, 0.7654964, 0.6940791, 0.6347532,
   0.5843209, 0.5406993, 0.5024734, 0.4686407, 0.4384622, 0.4113735, 0.3869308, 0.3647766, 0.3446177, 0.3262098, 0.3093471, 0.2938545, 0.2795821, 0.2664006, 0.2541975, 0.2428753,
   0.2323482, 0.2225411, 0.2133876, 0.2048288, 0.2048288, 0.2048288, 0 };
   graph = new TGraph(104,model_fx6,model_fy6);
   graph->SetName("model");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model6 = new TH1F("Graph_model6","Projection of ",104,-12.3003,12.3003);
   Graph_model6->SetMinimum(12.63339);
   Graph_model6->SetMaximum(12633.39);
   Graph_model6->SetDirectory(nullptr);
   Graph_model6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_model6->SetLineColor(ci);
   Graph_model6->GetXaxis()->SetLabelFont(42);
   Graph_model6->GetXaxis()->SetTitleOffset(1);
   Graph_model6->GetXaxis()->SetTitleFont(42);
   Graph_model6->GetYaxis()->SetLabelFont(42);
   Graph_model6->GetYaxis()->SetTitleFont(42);
   Graph_model6->GetZaxis()->SetLabelFont(42);
   Graph_model6->GetZaxis()->SetTitleOffset(1);
   Graph_model6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_model6);
   
   graph->Draw("l");
   
   TH1D *frame_tau_ce2e940__6 = new TH1D("frame_tau_ce2e940__6"," ",80,-10,10);
   frame_tau_ce2e940__6->SetBinContent(1,12059.14);
   frame_tau_ce2e940__6->SetMinimum(1.5);
   frame_tau_ce2e940__6->SetMaximum(63720.6);
   frame_tau_ce2e940__6->SetEntries(4);
   frame_tau_ce2e940__6->SetDirectory(nullptr);
   frame_tau_ce2e940__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_ce2e940__6->SetLineColor(ci);
   frame_tau_ce2e940__6->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_ce2e940__6->GetXaxis()->SetLabelFont(42);
   frame_tau_ce2e940__6->GetXaxis()->SetLabelSize(0.04);
   frame_tau_ce2e940__6->GetXaxis()->SetTitleSize(0.045);
   frame_tau_ce2e940__6->GetXaxis()->SetTitleOffset(1);
   frame_tau_ce2e940__6->GetXaxis()->SetTitleFont(42);
   frame_tau_ce2e940__6->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_ce2e940__6->GetYaxis()->SetLabelFont(42);
   frame_tau_ce2e940__6->GetYaxis()->SetLabelSize(0.04);
   frame_tau_ce2e940__6->GetYaxis()->SetTitleSize(0.045);
   frame_tau_ce2e940__6->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_ce2e940__6->GetYaxis()->SetTitleFont(42);
   frame_tau_ce2e940__6->GetZaxis()->SetLabelFont(42);
   frame_tau_ce2e940__6->GetZaxis()->SetTitleOffset(1);
   frame_tau_ce2e940__6->GetZaxis()->SetTitleFont(42);
   frame_tau_ce2e940__6->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.74,"8 GeV/c < #it{p}_{T}^{#mu#mu} < 10 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.72,0.71,0.89,0.85,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.035);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gauss1","Gauss","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("DCB","DCB","l");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("model","Total fit","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.15,0.64,"#chi^{2}/ndof = 35 / 39 ");
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
   pad1_TauzPP__2->Modified();
   cTauzFig_PP->cd();
  
// ------------>Primitives in pad: pad2_TauzPP
   TPad *pad2_TauzPP__3 = new TPad("pad2_TauzPP", "",0,0,1,0.228);
   pad2_TauzPP__3->Draw();
   pad2_TauzPP__3->cd();
   pad2_TauzPP__3->Range(-12.5,-13.76667,12.5,5.9);
   pad2_TauzPP__3->SetFillColor(0);
   pad2_TauzPP__3->SetBorderMode(0);
   pad2_TauzPP__3->SetBorderSize(2);
   pad2_TauzPP__3->SetTopMargin(0);
   pad2_TauzPP__3->SetBottomMargin(0.4);
   pad2_TauzPP__3->SetFrameBorderMode(0);
   pad2_TauzPP__3->SetFrameBorderMode(0);
   
   TH1D *frame_tau_f10ab70__7 = new TH1D("frame_tau_f10ab70__7"," ",100,-10,10);
   frame_tau_f10ab70__7->SetMinimum(-5.9);
   frame_tau_f10ab70__7->SetMaximum(5.9);
   frame_tau_f10ab70__7->SetDirectory(nullptr);
   frame_tau_f10ab70__7->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_f10ab70__7->SetLineColor(ci);
   frame_tau_f10ab70__7->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_f10ab70__7->GetXaxis()->SetLabelFont(42);
   frame_tau_f10ab70__7->GetXaxis()->SetLabelSize(0.12);
   frame_tau_f10ab70__7->GetXaxis()->SetTitleSize(0.14);
   frame_tau_f10ab70__7->GetXaxis()->SetTitleOffset(0.95);
   frame_tau_f10ab70__7->GetXaxis()->SetTitleFont(42);
   frame_tau_f10ab70__7->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_tau_f10ab70__7->GetYaxis()->SetNdivisions(6);
   frame_tau_f10ab70__7->GetYaxis()->SetLabelFont(42);
   frame_tau_f10ab70__7->GetYaxis()->SetLabelSize(0.12);
   frame_tau_f10ab70__7->GetYaxis()->SetTitleSize(0.12);
   frame_tau_f10ab70__7->GetYaxis()->SetTitleOffset(0.35);
   frame_tau_f10ab70__7->GetYaxis()->SetTitleFont(42);
   frame_tau_f10ab70__7->GetZaxis()->SetLabelFont(42);
   frame_tau_f10ab70__7->GetZaxis()->SetTitleOffset(1);
   frame_tau_f10ab70__7->GetZaxis()->SetTitleFont(42);
   frame_tau_f10ab70__7->Draw("FUNC");
   
   Double_t hpull_fx3004[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t hpull_fy3004[80] = { 0, 0, -1.395492, -2.458123, 0, 0, 0, 0, 0, 0, 0, -1.943606, 0, 0.6510677, 0, 0, 0.5965324,
   1.081495, 0.3467941, 0, 0.1755266, 0, 0.6837607, -1.764587, 0.1820742, -0.931465, 0.6163466, 0.1765781, 0.3288164, -0.9347962, 0.804158, 1.276245, 1.174833,
   1.255779, 0.2181386, -0.683508, -0.7590308, -1.155426, -0.02644959, 0.1262083, -0.04561847, -0.6953729, 0.1417017, 0.3581097, -0.3910977, -2.795597, 1.148928, 0.3212318, -1.400414,
   -0.05257365, 0.6639024, 1.645974, 0.4619577, 1.135827, -0.1714074, 0.8092433, 0.106342, 1.61641, 0, -0.03183433, -2.060754, 0, 0, -1.604588, 0.5783066,
   1.02333, -7.524673, 0, 1.108278, 0, 0, 0, 0.7501244, 0, 0, 0, 0, 1.261614, 0, 0 };
   Double_t hpull_felx3004[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t hpull_fely3004[80] = { 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1,
   1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1,
   1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0 };
   Double_t hpull_fehx3004[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t hpull_fehy3004[80] = { 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1,
   1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1,
   1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0 };
   grae = new TGraphAsymmErrors(80,hpull_fx3004,hpull_fy3004,hpull_felx3004,hpull_fehx3004,hpull_fely3004,hpull_fehy3004);
   grae->SetName("hpull");
   grae->SetTitle("Pull of Histogram of data_sig_cut_plot__tau and Projection of ");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_hpull3004 = new TH1F("Graph_hpull3004","Pull of Histogram of data_sig_cut_plot__tau and Projection of ",100,-11.85,11.85);
   Graph_hpull3004->SetMinimum(-9.641738);
   Graph_hpull3004->SetMaximum(3.763039);
   Graph_hpull3004->SetDirectory(nullptr);
   Graph_hpull3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_hpull3004->SetLineColor(ci);
   Graph_hpull3004->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   Graph_hpull3004->GetXaxis()->SetRange(8,93);
   Graph_hpull3004->GetXaxis()->SetLabelFont(42);
   Graph_hpull3004->GetXaxis()->SetTitleOffset(1);
   Graph_hpull3004->GetXaxis()->SetTitleFont(42);
   Graph_hpull3004->GetYaxis()->SetTitle("(Data - curve) / #sigma_{data}");
   Graph_hpull3004->GetYaxis()->SetLabelFont(42);
   Graph_hpull3004->GetYaxis()->SetTitleFont(42);
   Graph_hpull3004->GetZaxis()->SetLabelFont(42);
   Graph_hpull3004->GetZaxis()->SetTitleOffset(1);
   Graph_hpull3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_hpull3004);
   
   grae->Draw("px");
   
   TH1D *frame_tau_f10ab70__8 = new TH1D("frame_tau_f10ab70__8"," ",100,-10,10);
   frame_tau_f10ab70__8->SetMinimum(-5.9);
   frame_tau_f10ab70__8->SetMaximum(5.9);
   frame_tau_f10ab70__8->SetDirectory(nullptr);
   frame_tau_f10ab70__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_f10ab70__8->SetLineColor(ci);
   frame_tau_f10ab70__8->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_f10ab70__8->GetXaxis()->SetLabelFont(42);
   frame_tau_f10ab70__8->GetXaxis()->SetLabelSize(0.12);
   frame_tau_f10ab70__8->GetXaxis()->SetTitleSize(0.14);
   frame_tau_f10ab70__8->GetXaxis()->SetTitleOffset(0.95);
   frame_tau_f10ab70__8->GetXaxis()->SetTitleFont(42);
   frame_tau_f10ab70__8->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_tau_f10ab70__8->GetYaxis()->SetNdivisions(6);
   frame_tau_f10ab70__8->GetYaxis()->SetLabelFont(42);
   frame_tau_f10ab70__8->GetYaxis()->SetLabelSize(0.12);
   frame_tau_f10ab70__8->GetYaxis()->SetTitleSize(0.12);
   frame_tau_f10ab70__8->GetYaxis()->SetTitleOffset(0.35);
   frame_tau_f10ab70__8->GetYaxis()->SetTitleFont(42);
   frame_tau_f10ab70__8->GetZaxis()->SetLabelFont(42);
   frame_tau_f10ab70__8->GetZaxis()->SetTitleOffset(1);
   frame_tau_f10ab70__8->GetZaxis()->SetTitleFont(42);
   frame_tau_f10ab70__8->Draw("AXISSAME");
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
   pad2_TauzPP__3->Modified();
   cTauzFig_PP->cd();
   cTauzFig_PP->Modified();
   cTauzFig_PP->SetSelected(cTauzFig_PP);
}
