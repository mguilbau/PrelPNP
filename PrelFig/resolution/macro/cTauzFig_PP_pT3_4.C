#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauzFig_PP_pT3_4()
{
//=========Macro generated from canvas: cTauzFig_PP/cTauzFig
//=========  (Tue Apr  1 10:47:15 2025) by ROOT version 6.32.06
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
   pad1_TauzPP__1->Range(-6.25,0.07396996,6.25,6.32397);
   pad1_TauzPP__1->SetFillColor(0);
   pad1_TauzPP__1->SetBorderMode(0);
   pad1_TauzPP__1->SetBorderSize(2);
   pad1_TauzPP__1->SetLogy();
   pad1_TauzPP__1->SetFrameBorderMode(0);
   pad1_TauzPP__1->SetFrameBorderMode(0);
   
   TH1D *frame_tau_e2e5680__3 = new TH1D("frame_tau_e2e5680__3"," ",80,-10,10);
   frame_tau_e2e5680__3->SetBinContent(1,42022.27);
   frame_tau_e2e5680__3->SetMinimum(5);
   frame_tau_e2e5680__3->SetMaximum(500000);
   frame_tau_e2e5680__3->SetEntries(3);
   frame_tau_e2e5680__3->SetDirectory(nullptr);
   frame_tau_e2e5680__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_e2e5680__3->SetLineColor(ci);
   frame_tau_e2e5680__3->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_e2e5680__3->GetXaxis()->SetRange(21,60);
   frame_tau_e2e5680__3->GetXaxis()->SetLabelFont(42);
   frame_tau_e2e5680__3->GetXaxis()->SetLabelSize(0.04);
   frame_tau_e2e5680__3->GetXaxis()->SetTitleSize(0.045);
   frame_tau_e2e5680__3->GetXaxis()->SetTitleOffset(1);
   frame_tau_e2e5680__3->GetXaxis()->SetTitleFont(42);
   frame_tau_e2e5680__3->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_e2e5680__3->GetYaxis()->SetLabelFont(42);
   frame_tau_e2e5680__3->GetYaxis()->SetLabelSize(0.04);
   frame_tau_e2e5680__3->GetYaxis()->SetTitleSize(0.045);
   frame_tau_e2e5680__3->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_e2e5680__3->GetYaxis()->SetTitleFont(42);
   frame_tau_e2e5680__3->GetZaxis()->SetLabelFont(42);
   frame_tau_e2e5680__3->GetZaxis()->SetTitleOffset(1);
   frame_tau_e2e5680__3->GetZaxis()->SetTitleFont(42);
   frame_tau_e2e5680__3->Draw("FUNC");
   
   Double_t h_data_sig_cut_fx3002[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_sig_cut_fy3002[80] = { 3.687942, 3.633354, 2.486275, 0.6732866, 3.788111, 9.660707, 9.910184, 4.250082, 6.422176, 9.541133, 7.70547, 10.97318, 1.887665, 5.218003, 11.55902, 1.921667, 9.840452,
   13.3855, 8.704075, 19.10323, 3.07327, 20.48022, 13.50301, 10.3511, 20.51525, 12.44342, 16.91345, 20.70693, 19.58693, 22.26739, 16.25421, 48.18539, 34.46603,
   47.53452, 63.30867, 91.8637, 110.6122, 179.1486, 826.749, 15487.61, 18038.09, 1931.77, 915.8611, 533.8544, 354.8993, 187.391, 117.27, 87.92426, 57.03309,
   39.32471, 35.40235, 16.13477, 23.87245, 16.23478, 14.58506, 11.19526, 10.58979, 16.50639, 7.354443, 10.9437, 11.50079, 7.088418, 11.46047, 10.53714, 8.404647,
   5.791273, 2.586999, 12.03157, 3.45092, 7.981652, 1.277691, 6.058887, 6.133077, 1.104634, 2.665594, -0.2018689, 5.380745, 0.2737879, 5.597408, 1.459471 };
   Double_t h_data_sig_cut_felx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fely3002[80] = { 2.26263, 1.815931, 2.125522, 2.050075, 2.164552, 3.267282, 3.827672, 3.027904, 2.884105, 3.523643, 3.371348, 3.808084, 2.830539, 2.963282, 4.184694, 2.885815, 3.688305,
   4.499695, 3.929031, 5.044113, 3.537146, 5.238737, 4.849544, 4.731186, 6.165363, 4.570567, 6.297897, 5.913061, 6.165542, 6.152805, 7.512397, 9.373887, 8.26212,
   9.417774, 10.8991, 12.81263, 14.2957, 19.903, 37.2128, 144.8166, 159.6313, 60.81233, 41.20998, 30.98379, 24.1486, 18.71976, 15.05248, 13.37109, 10.38975,
   9.547022, 8.633364, 7.302368, 7.193871, 6.090083, 5.808444, 4.907881, 4.572549, 5.332072, 4.334422, 4.874408, 4.430612, 4.427223, 4.287505, 3.979611, 3.301625,
   3.069607, 2.873274, 4.011732, 2.581127, 3.082066, 2.279551, 2.998296, 2.610858, 2.065803, 1.878008, 1.965229, 2.905589, 1.427689, 2.679761, 1.198475 };
   Double_t h_data_sig_cut_fehx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fehy3002[80] = { 2.26263, 1.815931, 2.125522, 2.050075, 2.164552, 3.267282, 3.827672, 3.027904, 2.884105, 3.523643, 3.371348, 3.808084, 2.830539, 2.963282, 4.184694, 2.885815, 3.688305,
   4.499695, 3.929031, 5.044113, 3.537146, 5.238737, 4.849544, 4.731186, 6.165363, 4.570567, 6.297897, 5.913061, 6.165542, 6.152805, 7.512397, 9.373887, 8.26212,
   9.417774, 10.8991, 12.81263, 14.2957, 19.903, 37.2128, 144.8166, 159.6313, 60.81233, 41.20998, 30.98379, 24.1486, 18.71976, 15.05248, 13.37109, 10.38975,
   9.547022, 8.633364, 7.302368, 7.193871, 6.090083, 5.808444, 4.907881, 4.572549, 5.332072, 4.334422, 4.874408, 4.430612, 4.427223, 4.287505, 3.979611, 3.301625,
   3.069607, 2.873274, 4.011732, 2.581127, 3.082066, 2.279551, 2.998296, 2.610858, 2.065803, 1.878008, 1.965229, 2.905589, 1.427689, 2.679761, 1.198475 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_sig_cut_fx3002,h_data_sig_cut_fy3002,h_data_sig_cut_felx3002,h_data_sig_cut_fehx3002,h_data_sig_cut_fely3002,h_data_sig_cut_fehy3002);
   grae->SetName("h_data_sig_cut");
   grae->SetTitle("Histogram of data_sig_cut_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data_sig_cut3002 = new TH1F("Graph_h_data_sig_cut3002","Histogram of data_sig_cut_plot__tau",100,-12,12);
   Graph_h_data_sig_cut3002->SetMinimum(20.0175);
   Graph_h_data_sig_cut3002->SetMaximum(20017.5);
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
   
   Double_t gauss1_fx4[110] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875,
   -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125,
   0.34375, 0.375, 0.4375, 0.5, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5,
   3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5,
   7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t gauss1_fy4[110] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 3.605502e-297, 7.069642e-263, 1.162273e-230, 1.60213e-200, 1.851683e-172, 1.79438e-146, 1.457945e-122, 9.932235e-101,
   5.673249e-81, 2.717038e-63, 1.091035e-47, 3.673333e-34, 1.036958e-22, 2.454376e-13, 4.870797e-06, 0.8104719, 7.754718, 55.03152, 131.0587, 289.6506, 594.0698, 1130.719, 1997.223, 3273.804,
   4980.044, 7030.205, 9209.947, 11196.97, 12632.77, 13226.68, 12851.61, 11588.26, 9696.918, 7530.146, 5426.596, 3629.158, 2252.364, 1297.256, 693.3735, 343.9245,
   158.3118, 67.62665, 9.86257, 1.066792, 7.355509e-06, 4.252308e-13, 2.061179e-22, 8.376948e-34, 2.854532e-47, 8.155731e-63, 1.953754e-80, 3.924245e-100, 6.608778e-122, 9.331797e-146, 1.104812e-171, 1.096707e-199,
   9.127918e-230, 6.36989e-262, 3.727101e-296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   TGraph *graph = new TGraph(110,gauss1_fx4,gauss1_fy4);
   graph->SetName("gauss1");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_gauss14 = new TH1F("Graph_gauss14","Projection of ",110,-12.3003,12.3003);
   Graph_gauss14->SetMinimum(14.54935);
   Graph_gauss14->SetMaximum(14549.35);
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
   
   Double_t DCB_fx5[105] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375,
   -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.375, 0.5, 0.75,
   1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75,
   5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75,
   9, 9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t DCB_fy5[105] = { 0, 3.901355, 3.901355, 4.044112, 4.196027, 4.357953, 4.53085, 4.7158, 4.914026, 5.126918, 5.356058, 5.603258, 5.8706, 6.160485, 6.4757, 6.819493, 7.195671,
   7.608724, 8.063981, 8.567811, 9.127882, 9.753506, 10.45609, 11.24973, 12.15207, 13.18545, 14.37848, 15.76844, 17.40467, 19.35378, 21.70764, 24.59629, 28.20939,
   32.83359, 38.92136, 47.22624, 59.09191, 77.14043, 107.1695, 164.626, 305.9105, 482.0719, 649.1026, 946.6309, 1197.054, 1586.43, 2255.97, 3609.683, 7285.754,
   14422.27, 21987.88, 25818.06, 23348.27, 16262.09, 8723.461, 4128.917, 2480.914, 1707.468, 1271.015, 995.7721, 808.7402, 674.6372, 497.3381, 312.88, 167.0286,
   108.3199, 77.79537, 59.50685, 47.50896, 39.12442, 32.98539, 28.32647, 24.68891, 21.78245, 19.41526, 17.45595, 15.81175, 14.41547, 13.21735, 12.17982, 11.27405,
   10.47755, 9.772561, 9.144896, 8.58308, 8.077748, 7.621189, 7.207002, 6.829831, 6.485164, 6.169175, 5.878603, 5.610649, 5.3629, 5.133267, 4.919932, 4.721305,
   4.535991, 4.362763, 4.200536, 4.048346, 3.905336, 3.905336, 3.905336, 0 };
   graph = new TGraph(105,DCB_fx5,DCB_fy5);
   graph->SetName("DCB");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_DCB5 = new TH1F("Graph_DCB5","Projection of ",105,-12.3003,12.3003);
   Graph_DCB5->SetMinimum(28.39987);
   Graph_DCB5->SetMaximum(28399.87);
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
   
   Double_t model_fx6[110] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625,
   -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375,
   0.375, 0.4375, 0.5, 0.625, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5,
   3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5,
   7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t model_fy6[110] = { 0, 3.901355, 3.901355, 4.044112, 4.196027, 4.357953, 4.53085, 4.7158, 4.914026, 5.126918, 5.356058, 5.603258, 5.8706, 6.160485, 6.4757, 6.819493, 7.195671,
   7.608724, 8.063981, 8.567811, 9.127882, 9.753506, 10.45609, 11.24973, 12.15207, 13.18545, 14.37848, 15.76844, 17.40467, 19.35378, 21.70764, 24.59629, 28.20939,
   32.83359, 38.92136, 47.22624, 59.09191, 77.14043, 107.1695, 164.626, 306.726, 537.5374, 687.1995, 941.3935, 1374.031, 2089.541, 3218.039, 4904.119, 7314.257,
   10777.76, 16738.08, 26035.47, 35290.61, 40021.21, 37471.27, 29339.94, 20024.49, 13289.29, 9507.698, 6877.452, 4991.108, 3681.934, 2810.871, 2248.508, 1886.876,
   1646.878, 1346.79, 1147.507, 862.7038, 661.2747, 401.3728, 251.5549, 162.5339, 108.5967, 75.34511, 54.46168, 41.06039, 32.23922, 26.25924, 22.06968, 19.02983,
   16.74495, 14.96879, 13.54543, 12.37435, 11.38939, 10.54593, 9.813111, 9.16894, 8.597336, 8.0862, 7.626201, 7.209974, 6.831593, 6.486209, 6.169795, 5.878971,
   5.610867, 5.363029, 5.133344, 4.919977, 4.721332, 4.536007, 4.362773, 4.200541, 4.048349, 3.905338, 3.905338, 3.905338, 0 };
   graph = new TGraph(110,model_fx6,model_fy6);
   graph->SetName("model");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model6 = new TH1F("Graph_model6","Projection of ",110,-12.3003,12.3003);
   Graph_model6->SetMinimum(44.02333);
   Graph_model6->SetMaximum(44023.33);
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
   
   TH1D *frame_tau_e2e5680__4 = new TH1D("frame_tau_e2e5680__4"," ",80,-10,10);
   frame_tau_e2e5680__4->SetBinContent(1,42022.27);
   frame_tau_e2e5680__4->SetMinimum(5);
   frame_tau_e2e5680__4->SetMaximum(500000);
   frame_tau_e2e5680__4->SetEntries(3);
   frame_tau_e2e5680__4->SetDirectory(nullptr);
   frame_tau_e2e5680__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_e2e5680__4->SetLineColor(ci);
   frame_tau_e2e5680__4->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_e2e5680__4->GetXaxis()->SetRange(21,60);
   frame_tau_e2e5680__4->GetXaxis()->SetLabelFont(42);
   frame_tau_e2e5680__4->GetXaxis()->SetLabelSize(0.04);
   frame_tau_e2e5680__4->GetXaxis()->SetTitleSize(0.045);
   frame_tau_e2e5680__4->GetXaxis()->SetTitleOffset(1);
   frame_tau_e2e5680__4->GetXaxis()->SetTitleFont(42);
   frame_tau_e2e5680__4->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_e2e5680__4->GetYaxis()->SetLabelFont(42);
   frame_tau_e2e5680__4->GetYaxis()->SetLabelSize(0.04);
   frame_tau_e2e5680__4->GetYaxis()->SetTitleSize(0.045);
   frame_tau_e2e5680__4->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_e2e5680__4->GetYaxis()->SetTitleFont(42);
   frame_tau_e2e5680__4->GetZaxis()->SetLabelFont(42);
   frame_tau_e2e5680__4->GetZaxis()->SetTitleOffset(1);
   frame_tau_e2e5680__4->GetZaxis()->SetTitleFont(42);
   frame_tau_e2e5680__4->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.74,"3 GeV/c < #it{p}_{T}^{#mu#mu} < 4 GeV/c");
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
      tex = new TLatex(0.15,0.64,"#chi^{2}/ndof = 90 / 75 ");
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
