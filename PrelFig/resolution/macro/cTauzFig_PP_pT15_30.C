#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauzFig_PP_pT15_30()
{
//=========Macro generated from canvas: cTauzFig_PP/cTauzFig
//=========  (Mon Mar 31 16:57:44 2025) by ROOT version 6.32.06
   TCanvas *cTauzFig_PP = new TCanvas("cTauzFig_PP", "cTauzFig",1667,743,1000,800);
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
   
   TH1D *frame_tau_f30acc0__3 = new TH1D("frame_tau_f30acc0__3"," ",80,-10,10);
   frame_tau_f30acc0__3->SetBinContent(1,2032.803);
   frame_tau_f30acc0__3->SetMinimum(5);
   frame_tau_f30acc0__3->SetMaximum(50000);
   frame_tau_f30acc0__3->SetEntries(3);
   frame_tau_f30acc0__3->SetDirectory(nullptr);
   frame_tau_f30acc0__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_f30acc0__3->SetLineColor(ci);
   frame_tau_f30acc0__3->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_f30acc0__3->GetXaxis()->SetRange(25,56);
   frame_tau_f30acc0__3->GetXaxis()->SetLabelFont(42);
   frame_tau_f30acc0__3->GetXaxis()->SetLabelSize(0.04);
   frame_tau_f30acc0__3->GetXaxis()->SetTitleSize(0.045);
   frame_tau_f30acc0__3->GetXaxis()->SetTitleOffset(1);
   frame_tau_f30acc0__3->GetXaxis()->SetTitleFont(42);
   frame_tau_f30acc0__3->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_f30acc0__3->GetYaxis()->SetLabelFont(42);
   frame_tau_f30acc0__3->GetYaxis()->SetLabelSize(0.04);
   frame_tau_f30acc0__3->GetYaxis()->SetTitleSize(0.045);
   frame_tau_f30acc0__3->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_f30acc0__3->GetYaxis()->SetTitleFont(42);
   frame_tau_f30acc0__3->GetZaxis()->SetLabelFont(42);
   frame_tau_f30acc0__3->GetZaxis()->SetTitleOffset(1);
   frame_tau_f30acc0__3->GetZaxis()->SetTitleFont(42);
   frame_tau_f30acc0__3->Draw("FUNC");
   
   Double_t h_data_sig_cut_fx3002[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_sig_cut_fy3002[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.5171168,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.125456,
   0.9254085, 1.264973, 6.489223, 4.639126, -2.585299, 9.865561, 363.7293, 681.674, 107.5453, 86.39513, 43.16569, 19.67181, 15.5698, 5.912787, 2.281767, -0.07200348,
   2.095826, -0.57381, 0.3451366, 2.003801, 0, 0, 0, -3.880054e-05, 0, 0, 0, 0, 0.4965547, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_data_sig_cut_felx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fely3002[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.5171168,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.753651,
   1.467583, 0.8996312, 2.915251, 2.688818, 1.960336, 4.008868, 22.87188, 31.79419, 15.58703, 11.88456, 8.49102, 6.052125, 4.797396, 3.214429, 2.596023, 1.87412,
   2.06427, 0.8761453, 1.109611, 1.906422, 0, 0, 0, 3.880054e-05, 0, 0, 0, 0, 0.4965547, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_data_sig_cut_fehx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fehy3002[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.5171168,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.753651,
   1.467583, 0.8996312, 2.915251, 2.688818, 1.960336, 4.008868, 22.87188, 31.79419, 15.58703, 11.88456, 8.49102, 6.052125, 4.797396, 3.214429, 2.596023, 1.87412,
   2.06427, 0.8761453, 1.109611, 1.906422, 0, 0, 0, 3.880054e-05, 0, 0, 0, 0, 0.4965547, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_sig_cut_fx3002,h_data_sig_cut_fy3002,h_data_sig_cut_felx3002,h_data_sig_cut_fehx3002,h_data_sig_cut_fely3002,h_data_sig_cut_fehy3002);
   grae->SetName("h_data_sig_cut");
   grae->SetTitle("Histogram of data_sig_cut_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data_sig_cut3002 = new TH1F("Graph_h_data_sig_cut3002","Histogram of data_sig_cut_plot__tau",100,-12,12);
   Graph_h_data_sig_cut3002->SetMinimum(0.7850736);
   Graph_h_data_sig_cut3002->SetMaximum(785.0736);
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.754187e-301, 7.206201e-249,
   2.896539e-201, 1.139186e-158, 4.383821e-121, 1.650644e-88, 6.0813e-61, 2.19221e-38, 7.732328e-21, 2.668584e-08, 0.000655722, 0.034858, 0.901144, 3.496479, 11.32908, 30.65391, 69.26347, 130.6923,
   205.9314, 270.9709, 297.7488, 273.215, 209.3564, 133.9662, 71.58653, 31.9444, 11.90379, 3.704275, 0.9626054, 0.03785473, 0.0007239372, 3.045013e-08, 9.424809e-21, 2.854292e-38,
   8.457986e-61, 2.452325e-88, 6.957152e-121, 1.931201e-158, 5.24525e-201, 1.39395e-248, 3.624691e-301, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   Graph_gauss14->SetMinimum(0.3275236);
   Graph_gauss14->SetMaximum(327.5236);
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
   Double_t DCB_fy5[100] = { 0, 0.06539578, 0.06539578, 0.06762316, 0.06998758, 0.07250144, 0.07517864, 0.07803481, 0.0810876, 0.08435697, 0.08786561, 0.09163943, 0.09570806, 0.1001057, 0.1048716, 0.1100519, 0.1156999,
   0.1218787, 0.1286626, 0.1361403, 0.144418, 0.1536242, 0.1639155, 0.175485, 0.1885726, 0.2034808, 0.2205952, 0.2404151, 0.2635977, 0.2910241, 0.3239017, 0.3639271, 0.4135549,
   0.4764629, 0.5584011, 0.6688442, 0.8244849, 1.05745, 1.437627, 2.147532, 3.836344, 5.878921, 11.10127, 18.1063, 25.32703, 39.78373, 79.54567, 313.1853, 1000.456,
   1490.673, 1035.987, 335.8257, 82.99132, 40.78618, 25.77699, 18.35472, 11.20591, 5.913003, 3.852403, 2.153309, 1.440476, 1.059109, 0.8255555, 0.6695849, 0.5589403,
   0.4768706, 0.4138727, 0.3641809, 0.3241084, 0.2911953, 0.2637415, 0.2405375, 0.2207003, 0.203572, 0.1886524, 0.1755553, 0.1639779, 0.1536798, 0.1444679, 0.1361853, 0.1287033,
   0.1219157, 0.1157337, 0.1100828, 0.1049, 0.1001318, 0.09573225, 0.09166183, 0.08788642, 0.08437633, 0.08110566, 0.0780517, 0.07519445, 0.07251627, 0.07000152, 0.06763629, 0.06540815,
   0.06540815, 0.06540815, 0 };
   graph = new TGraph(100,DCB_fx5,DCB_fy5);
   graph->SetName("DCB");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_DCB5 = new TH1F("Graph_DCB5","Projection of ",100,-12.3003,12.3003);
   Graph_DCB5->SetMinimum(1.63974);
   Graph_DCB5->SetMaximum(1639.74);
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
   Double_t model_fy6[104] = { 0, 0.06539578, 0.06539578, 0.06762316, 0.06998758, 0.07250144, 0.07517864, 0.07803481, 0.0810876, 0.08435697, 0.08786561, 0.09163943, 0.09570806, 0.1001057, 0.1048716, 0.1100519, 0.1156999,
   0.1218787, 0.1286626, 0.1361403, 0.144418, 0.1536242, 0.1639155, 0.175485, 0.1885726, 0.2034808, 0.2205952, 0.2404151, 0.2635977, 0.2910241, 0.3239017, 0.3639271, 0.4135549,
   0.4764629, 0.5584011, 0.6688442, 0.8244849, 1.05745, 1.437627, 2.147532, 3.836344, 5.879591, 12.02972, 17.47553, 29.86817, 57.32398, 112.6345, 219.1577, 543.4207,
   1339.568, 1936.003, 1531.143, 797.4941, 467.054, 349.5372, 279.5544, 236.469, 208.839, 189.0864, 159.3339, 135.5622, 98.84377, 72.38848, 53.14713, 28.81527,
   15.75461, 8.714478, 4.904562, 2.832385, 1.697315, 1.069038, 0.7158908, 0.5129154, 0.3925517, 0.3181523, 0.2697466, 0.2363805, 0.2119895, 0.1931711, 0.177981, 0.1652801,
   0.1543789, 0.1448432, 0.1363867, 0.1288115, 0.1219738, 0.1157649, 0.1100995, 0.104909, 0.1001366, 0.09573484, 0.09166322, 0.08788716, 0.08437673, 0.08110588, 0.07805181, 0.07519451,
   0.07251631, 0.07000154, 0.0676363, 0.06540816, 0.06540816, 0.06540816, 0 };
   graph = new TGraph(104,model_fx6,model_fy6);
   graph->SetName("model");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model6 = new TH1F("Graph_model6","Projection of ",104,-12.3003,12.3003);
   Graph_model6->SetMinimum(2.129603);
   Graph_model6->SetMaximum(2129.603);
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
   
   TH1D *frame_tau_f30acc0__4 = new TH1D("frame_tau_f30acc0__4"," ",80,-10,10);
   frame_tau_f30acc0__4->SetBinContent(1,2032.803);
   frame_tau_f30acc0__4->SetMinimum(5);
   frame_tau_f30acc0__4->SetMaximum(50000);
   frame_tau_f30acc0__4->SetEntries(3);
   frame_tau_f30acc0__4->SetDirectory(nullptr);
   frame_tau_f30acc0__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_f30acc0__4->SetLineColor(ci);
   frame_tau_f30acc0__4->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_f30acc0__4->GetXaxis()->SetRange(25,56);
   frame_tau_f30acc0__4->GetXaxis()->SetLabelFont(42);
   frame_tau_f30acc0__4->GetXaxis()->SetLabelSize(0.04);
   frame_tau_f30acc0__4->GetXaxis()->SetTitleSize(0.045);
   frame_tau_f30acc0__4->GetXaxis()->SetTitleOffset(1);
   frame_tau_f30acc0__4->GetXaxis()->SetTitleFont(42);
   frame_tau_f30acc0__4->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_f30acc0__4->GetYaxis()->SetLabelFont(42);
   frame_tau_f30acc0__4->GetYaxis()->SetLabelSize(0.04);
   frame_tau_f30acc0__4->GetYaxis()->SetTitleSize(0.045);
   frame_tau_f30acc0__4->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_f30acc0__4->GetYaxis()->SetTitleFont(42);
   frame_tau_f30acc0__4->GetZaxis()->SetLabelFont(42);
   frame_tau_f30acc0__4->GetZaxis()->SetTitleOffset(1);
   frame_tau_f30acc0__4->GetZaxis()->SetTitleFont(42);
   frame_tau_f30acc0__4->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.74,"15 GeV/c < #it{p}_{T}^{#mu#mu} < 30 GeV/c");
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
      tex = new TLatex(0.15,0.64,"#chi^{2}/ndof = 21 / 14 ");
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
}
