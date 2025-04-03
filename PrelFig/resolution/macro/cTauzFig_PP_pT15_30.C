#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauzFig_PP_pT15_30()
{
//=========Macro generated from canvas: cTauzFig_PP/cTauzFig
//=========  (Tue Apr  1 11:19:44 2025) by ROOT version 6.32.06
   TCanvas *cTauzFig_PP = new TCanvas("cTauzFig_PP", "cTauzFig",40,63,1000,800);
   cTauzFig_PP->Range(0,0,1,1);
   cTauzFig_PP->SetFillColor(0);
   cTauzFig_PP->SetBorderMode(0);
   cTauzFig_PP->SetBorderSize(2);
   cTauzFig_PP->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_TauzPP
   TPad *pad1_TauzPP__1 = new TPad("pad1_TauzPP", "",0,0,1,1);
   pad1_TauzPP__1->Draw();
   pad1_TauzPP__1->cd();
   pad1_TauzPP__1->Range(-5,0.19897,5,5.19897);
   pad1_TauzPP__1->SetFillColor(0);
   pad1_TauzPP__1->SetBorderMode(0);
   pad1_TauzPP__1->SetBorderSize(2);
   pad1_TauzPP__1->SetLogy();
   pad1_TauzPP__1->SetFrameBorderMode(0);
   pad1_TauzPP__1->SetFrameBorderMode(0);
   
   TH1D *frame_tau_e842e60__3 = new TH1D("frame_tau_e842e60__3"," ",80,-10,10);
   frame_tau_e842e60__3->SetBinContent(1,2125.907);
   frame_tau_e842e60__3->SetMinimum(5);
   frame_tau_e842e60__3->SetMaximum(50000);
   frame_tau_e842e60__3->SetEntries(3);
   frame_tau_e842e60__3->SetDirectory(nullptr);
   frame_tau_e842e60__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_e842e60__3->SetLineColor(ci);
   frame_tau_e842e60__3->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_e842e60__3->GetXaxis()->SetRange(25,56);
   frame_tau_e842e60__3->GetXaxis()->SetLabelFont(42);
   frame_tau_e842e60__3->GetXaxis()->SetLabelSize(0.04);
   frame_tau_e842e60__3->GetXaxis()->SetTitleSize(0.045);
   frame_tau_e842e60__3->GetXaxis()->SetTitleOffset(1);
   frame_tau_e842e60__3->GetXaxis()->SetTitleFont(42);
   frame_tau_e842e60__3->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_e842e60__3->GetYaxis()->SetLabelFont(42);
   frame_tau_e842e60__3->GetYaxis()->SetLabelSize(0.04);
   frame_tau_e842e60__3->GetYaxis()->SetTitleSize(0.045);
   frame_tau_e842e60__3->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_e842e60__3->GetYaxis()->SetTitleFont(42);
   frame_tau_e842e60__3->GetZaxis()->SetLabelFont(42);
   frame_tau_e842e60__3->GetZaxis()->SetTitleOffset(1);
   frame_tau_e842e60__3->GetZaxis()->SetTitleFont(42);
   frame_tau_e842e60__3->Draw("FUNC");
   
   Double_t h_data_sig_cut_fx3002[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_sig_cut_fy3002[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.6272066,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.16629,
   1.070215, 1.5744, 6.677588, 5.337523, -2.55752, 10.83103, 381.0176, 711.8044, 113.4203, 91.47411, 47.15934, 21.7481, 15.81255, 6.218328, 2.61746, 0.02135849,
   2.297565, -0.08301955, 0.3200912, 1.83833, 0, 0, 0, 0.2432974, 0, 0, 0, 0, 0.609502, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_data_sig_cut_felx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fely3002[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.6272065,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.828144,
   1.446277, 1.126048, 2.916422, 2.866623, 2.102155, 4.129906, 23.16189, 32.21789, 15.88329, 12.05745, 8.745441, 6.222999, 4.829838, 3.255572, 2.708652, 1.997197,
   2.091778, 1.082292, 1.286074, 1.918636, 0, 0, 0, 0.2432974, 0, 0, 0, 0, 0.609502, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_data_sig_cut_fehx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fehy3002[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.6272065,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.828144,
   1.446277, 1.126048, 2.916422, 2.866623, 2.102155, 4.129906, 23.16189, 32.21789, 15.88329, 12.05745, 8.745441, 6.222999, 4.829838, 3.255572, 2.708652, 1.997197,
   2.091778, 1.082292, 1.286074, 1.918636, 0, 0, 0, 0.2432974, 0, 0, 0, 0, 0.609502, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_sig_cut_fx3002,h_data_sig_cut_fy3002,h_data_sig_cut_felx3002,h_data_sig_cut_fehx3002,h_data_sig_cut_fely3002,h_data_sig_cut_fehy3002);
   grae->SetName("h_data_sig_cut");
   grae->SetTitle("Histogram of data_sig_cut_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data_sig_cut3002 = new TH1F("Graph_h_data_sig_cut3002","Histogram of data_sig_cut_plot__tau",100,-12,12);
   Graph_h_data_sig_cut3002->SetMinimum(0.8186803);
   Graph_h_data_sig_cut3002->SetMaximum(818.6803);
   Graph_h_data_sig_cut3002->SetDirectory(nullptr);
   Graph_h_data_sig_cut3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_data_sig_cut3002->SetLineColor(ci);
   Graph_h_data_sig_cut3002->GetXaxis()->SetLabelFont(42);
   Graph_h_data_sig_cut3002->GetXaxis()->SetTitleOffset(1);
   Graph_h_data_sig_cut3002->GetXaxis()->SetTitleFont(42);
   Graph_h_data_sig_cut3002->GetYaxis()->SetLabelFont(42);
   Graph_h_data_sig_cut3002->GetYaxis()->SetTitleFont(42);
   Graph_h_data_sig_cut3002->GetZaxis()->SetLabelFont(42);
   Graph_h_data_sig_cut3002->GetZaxis()->SetTitleOffset(1);
   Graph_h_data_sig_cut3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_data_sig_cut3002);
   
   grae->Draw("p");
   
   Double_t gauss1_fx4[104] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375,
   -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.3125, 0.375, 0.5, 0.75, 1,
   1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5,
   5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9,
   9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t gauss1_fy4[104] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.83392e-301, 7.533741e-249,
   3.028193e-201, 1.190965e-158, 4.583077e-121, 1.72567e-88, 6.357711e-61, 2.291851e-38, 8.083781e-21, 2.789878e-08, 0.0006855262, 0.03644239, 0.9421033, 3.655402, 11.84402, 32.04721, 72.41167, 136.6325,
   215.2915, 283.2872, 311.2822, 285.6333, 218.8722, 140.0553, 74.84032, 33.39635, 12.44485, 3.872644, 1.006358, 0.03957532, 0.000756842, 3.183416e-08, 9.85319e-21, 2.984027e-38,
   8.842422e-61, 2.563789e-88, 7.273372e-121, 2.018979e-158, 5.48366e-201, 1.457309e-248, 3.789443e-301, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0 };
   TGraph *graph = new TGraph(104,gauss1_fx4,gauss1_fy4);
   graph->SetName("gauss1");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_gauss14 = new TH1F("Graph_gauss14","Projection of ",104,-12.3003,12.3003);
   Graph_gauss14->SetMinimum(0.3424104);
   Graph_gauss14->SetMaximum(342.4104);
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
   Double_t DCB_fy5[100] = { 0, 0.06836819, 0.06836819, 0.0706968, 0.07316869, 0.07579681, 0.0785957, 0.08158169, 0.08477323, 0.0881912, 0.09185933, 0.09580467, 0.1000582, 0.1046557, 0.1096383, 0.115054, 0.1209588,
   0.1274184, 0.1345107, 0.1423282, 0.1509822, 0.1606068, 0.1713659, 0.1834612, 0.1971437, 0.2127295, 0.2306218, 0.2513426, 0.2755789, 0.3042518, 0.3386239, 0.3804685, 0.432352,
   0.4981193, 0.5837819, 0.6992448, 0.8619599, 1.105514, 1.50297, 2.245142, 4.010716, 6.146133, 11.60585, 18.92928, 26.47821, 41.592, 83.16123, 327.4203, 1045.929,
   1558.428, 1083.075, 351.0898, 86.76348, 42.64002, 26.94862, 19.18899, 11.71524, 6.181764, 4.027504, 2.251182, 1.50595, 1.107249, 0.8630791, 0.7000193, 0.5843455,
   0.4985456, 0.4326842, 0.3807338, 0.33884, 0.3044308, 0.2757292, 0.2514705, 0.2307317, 0.2128249, 0.1972271, 0.1835347, 0.1714311, 0.160665, 0.1510343, 0.1423752, 0.1345532,
   0.1274571, 0.1209941, 0.1150863, 0.109668, 0.1046831, 0.1000835, 0.09582809, 0.09188108, 0.08821145, 0.08479212, 0.08159934, 0.07861223, 0.07581232, 0.07318327, 0.07071052, 0.06838112,
   0.06838112, 0.06838112, 0 };
   graph = new TGraph(100,DCB_fx5,DCB_fy5);
   graph->SetName("DCB");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_DCB5 = new TH1F("Graph_DCB5","Projection of ",100,-12.3003,12.3003);
   Graph_DCB5->SetMinimum(1.714271);
   Graph_DCB5->SetMaximum(1714.271);
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
   Double_t model_fy6[104] = { 0, 0.06836819, 0.06836819, 0.0706968, 0.07316869, 0.07579681, 0.0785957, 0.08158169, 0.08477323, 0.0881912, 0.09185933, 0.09580467, 0.1000582, 0.1046557, 0.1096383, 0.115054, 0.1209588,
   0.1274184, 0.1345107, 0.1423282, 0.1509822, 0.1606068, 0.1713659, 0.1834612, 0.1971437, 0.2127295, 0.2306218, 0.2513426, 0.2755789, 0.3042518, 0.3386239, 0.3804685, 0.432352,
   0.4981193, 0.5837819, 0.6992448, 0.8619599, 1.105514, 1.50297, 2.245142, 4.010716, 6.146833, 12.57661, 18.27033, 31.2276, 59.93534, 117.7699, 229.159, 568.2287,
   1400.758, 2024.674, 1601.821, 835.1014, 489.793, 367.0275, 293.9262, 248.9232, 220.0611, 199.4209, 168.3042, 143.4077, 104.8707, 77.02367, 56.7105, 30.91613,
   16.98991, 9.440342, 5.332079, 3.085841, 1.849452, 1.162227, 0.7747156, 0.5516057, 0.4193327, 0.3377808, 0.2849808, 0.2488286, 0.2225979, 0.2025049, 0.1863849, 0.1729703,
   0.1614962, 0.1514832, 0.1426177, 0.1346842, 0.1275278, 0.1210323, 0.115107, 0.1096792, 0.1046891, 0.1000868, 0.09582984, 0.09188203, 0.08821196, 0.08479239, 0.08159949, 0.07861231,
   0.07581236, 0.07318329, 0.07071054, 0.06838113, 0.06838113, 0.06838113, 0 };
   graph = new TGraph(104,model_fx6,model_fy6);
   graph->SetName("model");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model6 = new TH1F("Graph_model6","Projection of ",104,-12.3003,12.3003);
   Graph_model6->SetMinimum(2.227141);
   Graph_model6->SetMaximum(2227.141);
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
   
   TH1D *frame_tau_e842e60__4 = new TH1D("frame_tau_e842e60__4"," ",80,-10,10);
   frame_tau_e842e60__4->SetBinContent(1,2125.907);
   frame_tau_e842e60__4->SetMinimum(5);
   frame_tau_e842e60__4->SetMaximum(50000);
   frame_tau_e842e60__4->SetEntries(3);
   frame_tau_e842e60__4->SetDirectory(nullptr);
   frame_tau_e842e60__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_e842e60__4->SetLineColor(ci);
   frame_tau_e842e60__4->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_e842e60__4->GetXaxis()->SetRange(25,56);
   frame_tau_e842e60__4->GetXaxis()->SetLabelFont(42);
   frame_tau_e842e60__4->GetXaxis()->SetLabelSize(0.04);
   frame_tau_e842e60__4->GetXaxis()->SetTitleSize(0.045);
   frame_tau_e842e60__4->GetXaxis()->SetTitleOffset(1);
   frame_tau_e842e60__4->GetXaxis()->SetTitleFont(42);
   frame_tau_e842e60__4->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_e842e60__4->GetYaxis()->SetLabelFont(42);
   frame_tau_e842e60__4->GetYaxis()->SetLabelSize(0.04);
   frame_tau_e842e60__4->GetYaxis()->SetTitleSize(0.045);
   frame_tau_e842e60__4->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_e842e60__4->GetYaxis()->SetTitleFont(42);
   frame_tau_e842e60__4->GetZaxis()->SetLabelFont(42);
   frame_tau_e842e60__4->GetZaxis()->SetTitleOffset(1);
   frame_tau_e842e60__4->GetZaxis()->SetTitleFont(42);
   frame_tau_e842e60__4->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.69,"15 < #it{p}_{T}^{#mu#mu} < 30 GeV/c");
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
      //tex = new TLatex(0.15,0.64,"#chi^{2}/ndof = 22 / 15 ");
      tex = new TLatex(0.15,0.59,"#chi^{2}/ndof = 22 / 15 ");
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
   pad1_TauzPP__1->Modified();
   cTauzFig_PP->cd();
   cTauzFig_PP->Modified();
   cTauzFig_PP->SetSelected(cTauzFig_PP);

   cTauzFig_PP->SaveAs("../pdf/cTauzFig_PP_pT15_30.pdf");
   cTauzFig_PP->SaveAs("../png/cTauzFig_PP_pT15_30.png");
}