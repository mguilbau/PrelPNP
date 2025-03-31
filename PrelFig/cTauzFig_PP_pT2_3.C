#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauzFig_PP_pT2_3()
{
//=========Macro generated from canvas: cTauzFig_PP/cTauzFig
//=========  (Mon Mar 31 11:23:40 2025) by ROOT version 6.32.06
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
   pad1_TauzPP__2->Range(-12.5,0.1760913,12.5,6.216105);
   pad1_TauzPP__2->SetFillColor(0);
   pad1_TauzPP__2->SetBorderMode(0);
   pad1_TauzPP__2->SetBorderSize(2);
   pad1_TauzPP__2->SetLogy();
   pad1_TauzPP__2->SetBottomMargin(0);
   pad1_TauzPP__2->SetFrameBorderMode(0);
   pad1_TauzPP__2->SetFrameBorderMode(0);
   
   TH1D *frame_tau_f3ee7a0__5 = new TH1D("frame_tau_f3ee7a0__5"," ",80,-10,10);
   frame_tau_f3ee7a0__5->SetBinContent(1,48554.33);
   frame_tau_f3ee7a0__5->SetMinimum(1.5);
   frame_tau_f3ee7a0__5->SetMaximum(409358.3);
   frame_tau_f3ee7a0__5->SetEntries(3);
   frame_tau_f3ee7a0__5->SetDirectory(nullptr);
   frame_tau_f3ee7a0__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_f3ee7a0__5->SetLineColor(ci);
   frame_tau_f3ee7a0__5->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_f3ee7a0__5->GetXaxis()->SetLabelFont(42);
   frame_tau_f3ee7a0__5->GetXaxis()->SetLabelSize(0.04);
   frame_tau_f3ee7a0__5->GetXaxis()->SetTitleSize(0.045);
   frame_tau_f3ee7a0__5->GetXaxis()->SetTitleOffset(1);
   frame_tau_f3ee7a0__5->GetXaxis()->SetTitleFont(42);
   frame_tau_f3ee7a0__5->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_f3ee7a0__5->GetYaxis()->SetLabelFont(42);
   frame_tau_f3ee7a0__5->GetYaxis()->SetLabelSize(0.04);
   frame_tau_f3ee7a0__5->GetYaxis()->SetTitleSize(0.045);
   frame_tau_f3ee7a0__5->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_f3ee7a0__5->GetYaxis()->SetTitleFont(42);
   frame_tau_f3ee7a0__5->GetZaxis()->SetLabelFont(42);
   frame_tau_f3ee7a0__5->GetZaxis()->SetTitleOffset(1);
   frame_tau_f3ee7a0__5->GetZaxis()->SetTitleFont(42);
   frame_tau_f3ee7a0__5->Draw("FUNC");
   
   Double_t h_data_sig_cut_fx3003[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_sig_cut_fy3003[80] = { 6.767132, 4.025765, 0.310771, 7.152844, 7.590422, 6.967578, 5.796264, 6.167176, 3.64009, 3.288531, 12.87307, 12.15344, 4.277908, 6.396082, 4.778317, 3.146639, 13.69329,
   8.236341, 20.10978, 14.44133, 11.06733, 30.43319, 30.4966, 16.13927, 15.32477, 25.31221, 21.66134, 33.47678, 53.79794, 48.57102, 36.08363, 53.76139, 54.45513,
   66.9253, 82.60425, 115.8293, 205.7653, 371.8326, 1592.925, 20527.36, 22742.26, 2367.377, 1109.242, 696.5833, 375.0099, 277.8141, 145.1522, 122.7147, 63.38018,
   58.5585, 68.97895, 16.52462, 48.96322, 31.27823, 15.70488, 30.93077, 13.40732, 23.3471, 10.2081, 11.06664, 7.615989, 1.574565, 2.929531, 6.81006, 7.397443,
   8.152495, 4.752176, 8.074797, 0.5996339, 12.18921, 11.62887, 7.213536, 1.425334, 1.826634, 4.201326, 5.576701, 3.005865, 1.800395, 2.732383, 5.330128 };
   Double_t h_data_sig_cut_felx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fely3003[80] = { 2.862335, 2.297466, 2.287665, 3.694767, 3.209995, 3.749232, 3.84723, 3.668268, 3.434436, 3.673045, 4.271291, 4.466582, 3.212004, 3.844632, 3.221191, 4.073793, 5.51478,
   4.393517, 6.16515, 5.602686, 5.727421, 6.890159, 6.975466, 6.368915, 6.439693, 6.706825, 7.557701, 8.118411, 10.08794, 9.903942, 9.832185, 10.90643, 11.68359,
   12.48681, 14.05825, 17.15161, 21.51984, 27.92765, 52.55325, 170.226, 184.6986, 72.84368, 49.76758, 37.49128, 28.89595, 24.02232, 18.66203, 15.91713, 13.51777,
   12.02975, 11.79967, 9.241901, 10.10966, 8.860083, 7.160703, 7.723544, 6.727831, 6.971764, 5.352486, 5.952217, 5.182401, 4.950974, 4.625448, 5.113319, 4.555344,
   4.150601, 3.956158, 4.400219, 3.615598, 4.46312, 4.195549, 3.482004, 3.278868, 2.835563, 3.003632, 2.798727, 3.100984, 2.697595, 2.603717, 3.403311 };
   Double_t h_data_sig_cut_fehx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fehy3003[80] = { 2.862335, 2.297466, 2.287665, 3.694767, 3.209995, 3.749232, 3.84723, 3.668268, 3.434436, 3.673045, 4.271291, 4.466582, 3.212004, 3.844632, 3.221191, 4.073793, 5.51478,
   4.393517, 6.16515, 5.602686, 5.727421, 6.890159, 6.975466, 6.368915, 6.439693, 6.706825, 7.557701, 8.118411, 10.08794, 9.903942, 9.832185, 10.90643, 11.68359,
   12.48681, 14.05825, 17.15161, 21.51984, 27.92765, 52.55325, 170.226, 184.6986, 72.84368, 49.76758, 37.49128, 28.89595, 24.02232, 18.66203, 15.91713, 13.51777,
   12.02975, 11.79967, 9.241901, 10.10966, 8.860083, 7.160703, 7.723544, 6.727831, 6.971764, 5.352486, 5.952217, 5.182401, 4.950974, 4.625448, 5.113319, 4.555344,
   4.150601, 3.956158, 4.400219, 3.615598, 4.46312, 4.195549, 3.482004, 3.278868, 2.835563, 3.003632, 2.798727, 3.100984, 2.697595, 2.603717, 3.403311 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_sig_cut_fx3003,h_data_sig_cut_fy3003,h_data_sig_cut_felx3003,h_data_sig_cut_fehx3003,h_data_sig_cut_fely3003,h_data_sig_cut_fehy3003);
   grae->SetName("h_data_sig_cut");
   grae->SetTitle("Histogram of data_sig_cut_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data_sig_cut3003 = new TH1F("Graph_h_data_sig_cut3003","Histogram of data_sig_cut_plot__tau",100,-12,12);
   Graph_h_data_sig_cut3003->SetMinimum(0.0932313);
   Graph_h_data_sig_cut3003->SetMaximum(25219.65);
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
   
   Double_t gauss1_fx4[116] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.46875, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125,
   -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875,
   0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.625, 0.75, 1, 1.25, 1.5, 1.75, 2,
   2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6,
   6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10,
   10, 10.25, 10.25025 };
   Double_t gauss1_fy4[116] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 7.369093e-318, 2.488349e-289, 3.950103e-262, 2.95695e-236, 1.043801e-211, 1.737522e-188, 1.363895e-166, 5.048592e-146, 8.812475e-127, 7.253772e-109, 2.815583e-92, 5.153607e-77, 4.448284e-63,
   1.810557e-50, 3.475125e-39, 3.145335e-29, 1.342462e-20, 2.701937e-13, 2.564408e-07, 0.01147723, 0.7723947, 24.22289, 50.87538, 101.874, 194.4882, 353.995, 614.2922, 1016.312, 1603.072,
   2410.754, 3456.424, 4724.709, 6157.398, 7650.563, 9062.825, 10235.47, 11021.13, 11314.06, 11073.5, 10332.97, 9192.626, 7797.009, 6305.079, 4861.017, 3573.038,
   2503.931, 1672.942, 1065.648, 647.173, 374.7151, 206.8502, 108.8641, 54.62452, 26.13152, 0.8492052, 0.01286013, 2.984451e-07, 3.266044e-13, 1.685458e-20, 4.101591e-29, 4.706794e-39,
   2.547044e-50, 6.499591e-63, 7.821212e-77, 4.438135e-92, 1.187587e-108, 1.498541e-126, 8.91683e-146, 2.502019e-166, 3.310619e-188, 2.065695e-211, 6.078012e-236, 8.433258e-262, 5.517821e-289, 1.704503e-317, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0 };
   TGraph *graph = new TGraph(116,gauss1_fx4,gauss1_fy4);
   graph->SetName("gauss1");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_gauss14 = new TH1F("Graph_gauss14","Projection of ",116,-12.3003,12.3003);
   Graph_gauss14->SetMinimum(12.44546);
   Graph_gauss14->SetMaximum(12445.46);
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
   
   Double_t DCB_fx5[106] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.375, 0.5,
   0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5,
   4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5,
   8.75, 9, 9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t DCB_fy5[106] = { 0, 5.039665, 5.039665, 5.233336, 5.439808, 5.660299, 5.896183, 6.14901, 6.420541, 6.712774, 7.027996, 7.368827, 7.738283, 8.139858, 8.577609, 9.056283, 9.581455,
   10.15972, 10.79894, 11.50851, 12.2998, 13.18667, 14.18614, 15.31934, 16.61282, 18.10029, 19.82519, 21.84435, 24.23338, 27.0949, 30.57133, 34.86559, 40.27576,
   47.25606, 56.53006, 69.31556, 87.81132, 116.3731, 164.8178, 259.9912, 503.9655, 822.7011, 1136.727, 1378.259, 1720.057, 2232.146, 3063.122, 4583.422, 7987.715,
   14956.78, 23502.78, 30932.66, 34098.25, 31482.11, 24345.15, 15768.04, 8553.82, 4802.72, 3173.712, 2296.853, 1761.711, 1406.918, 1157.436, 834.7138, 509.2328,
   261.7237, 165.624, 116.8227, 88.09167, 69.50412, 56.66402, 47.35526, 40.35164, 34.92518, 30.61914, 27.13395, 24.26577, 21.87156, 19.84832, 18.12015, 16.63002,
   15.33436, 14.19934, 13.19835, 12.31019, 11.5178, 10.80729, 10.16727, 9.588295, 9.062506, 8.583291, 8.145062, 7.743065, 7.373232, 7.032065, 6.716542, 6.424038,
   6.152263, 5.899214, 5.66313, 5.442457, 5.235819, 5.041996, 5.041996, 5.041996, 0 };
   graph = new TGraph(106,DCB_fx5,DCB_fy5);
   graph->SetName("DCB");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_DCB5 = new TH1F("Graph_DCB5","Projection of ",106,-12.3003,12.3003);
   Graph_DCB5->SetMinimum(37.50808);
   Graph_DCB5->SetMaximum(37508.08);
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
   
   Double_t model_fx6[112] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875,
   -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125,
   0.34375, 0.375, 0.40625, 0.4375, 0.5, 0.625, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3,
   3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7,
   7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t model_fy6[112] = { 0, 5.039665, 5.039665, 5.233336, 5.439808, 5.660299, 5.896183, 6.14901, 6.420541, 6.712774, 7.027996, 7.368827, 7.738283, 8.139858, 8.577609, 9.056283, 9.581455,
   10.15972, 10.79894, 11.50851, 12.2998, 13.18667, 14.18614, 15.31934, 16.61282, 18.10029, 19.82519, 21.84435, 24.23338, 27.0949, 30.57133, 34.86559, 40.27576,
   47.25606, 56.53006, 69.31556, 87.81132, 116.3731, 164.8178, 260.0027, 528.3282, 733.5697, 1179.266, 1577.627, 2161.494, 2995.747, 4154.551, 5726.745, 7848.796,
   10839.13, 15798.94, 24281.15, 34149.7, 42561.86, 46242.22, 43596.75, 35885.27, 26270.47, 17702.27, 12455.22, 9350.042, 7138.247, 5480.045, 4237.442, 3323.166,
   2664.491, 2197.228, 1867.03, 1630.916, 1323.974, 980.4403, 761.4301, 482.1797, 317.3606, 215.1324, 149.9844, 107.6482, 79.65375, 60.81273, 47.88727, 38.83062,
   32.33592, 27.56121, 23.95923, 21.17086, 18.95797, 17.16078, 15.6706, 14.41235, 13.33329, 12.39568, 11.57196, 10.8416, 10.189, 9.602063, 9.071228, 8.588816,
   8.148562, 7.745282, 7.374637, 7.032955, 6.717106, 6.424395, 6.152489, 5.899358, 5.663221, 5.442514, 5.235855, 5.042019, 5.042019, 5.042019, 0 };
   graph = new TGraph(112,model_fx6,model_fy6);
   graph->SetName("model");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model6 = new TH1F("Graph_model6","Projection of ",112,-12.3003,12.3003);
   Graph_model6->SetMinimum(50.86644);
   Graph_model6->SetMaximum(50866.44);
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
   
   TH1D *frame_tau_f3ee7a0__6 = new TH1D("frame_tau_f3ee7a0__6"," ",80,-10,10);
   frame_tau_f3ee7a0__6->SetBinContent(1,48554.33);
   frame_tau_f3ee7a0__6->SetMinimum(1.5);
   frame_tau_f3ee7a0__6->SetMaximum(409358.3);
   frame_tau_f3ee7a0__6->SetEntries(3);
   frame_tau_f3ee7a0__6->SetDirectory(nullptr);
   frame_tau_f3ee7a0__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_f3ee7a0__6->SetLineColor(ci);
   frame_tau_f3ee7a0__6->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_f3ee7a0__6->GetXaxis()->SetLabelFont(42);
   frame_tau_f3ee7a0__6->GetXaxis()->SetLabelSize(0.04);
   frame_tau_f3ee7a0__6->GetXaxis()->SetTitleSize(0.045);
   frame_tau_f3ee7a0__6->GetXaxis()->SetTitleOffset(1);
   frame_tau_f3ee7a0__6->GetXaxis()->SetTitleFont(42);
   frame_tau_f3ee7a0__6->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_f3ee7a0__6->GetYaxis()->SetLabelFont(42);
   frame_tau_f3ee7a0__6->GetYaxis()->SetLabelSize(0.04);
   frame_tau_f3ee7a0__6->GetYaxis()->SetTitleSize(0.045);
   frame_tau_f3ee7a0__6->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_f3ee7a0__6->GetYaxis()->SetTitleFont(42);
   frame_tau_f3ee7a0__6->GetZaxis()->SetLabelFont(42);
   frame_tau_f3ee7a0__6->GetZaxis()->SetTitleOffset(1);
   frame_tau_f3ee7a0__6->GetZaxis()->SetTitleFont(42);
   frame_tau_f3ee7a0__6->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.74,"2 GeV/c < #it{p}_{T}^{#mu#mu} < 3 GeV/c");
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
   
   TPaveText *pt = new TPaveText(0.4764729,0.94,0.5235271,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText(" ");
   pt->Draw();
      tex = new TLatex(0.15,0.64,"#chi^{2}/ndof = 120 / 76 ");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
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
   
   TH1D *frame_tau_120e98a0__7 = new TH1D("frame_tau_120e98a0__7"," ",100,-10,10);
   frame_tau_120e98a0__7->SetMinimum(-5.9);
   frame_tau_120e98a0__7->SetMaximum(5.9);
   frame_tau_120e98a0__7->SetDirectory(nullptr);
   frame_tau_120e98a0__7->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_120e98a0__7->SetLineColor(ci);
   frame_tau_120e98a0__7->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_120e98a0__7->GetXaxis()->SetLabelFont(42);
   frame_tau_120e98a0__7->GetXaxis()->SetLabelSize(0.12);
   frame_tau_120e98a0__7->GetXaxis()->SetTitleSize(0.14);
   frame_tau_120e98a0__7->GetXaxis()->SetTitleOffset(0.95);
   frame_tau_120e98a0__7->GetXaxis()->SetTitleFont(42);
   frame_tau_120e98a0__7->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_tau_120e98a0__7->GetYaxis()->SetNdivisions(6);
   frame_tau_120e98a0__7->GetYaxis()->SetLabelFont(42);
   frame_tau_120e98a0__7->GetYaxis()->SetLabelSize(0.12);
   frame_tau_120e98a0__7->GetYaxis()->SetTitleSize(0.12);
   frame_tau_120e98a0__7->GetYaxis()->SetTitleOffset(0.35);
   frame_tau_120e98a0__7->GetYaxis()->SetTitleFont(42);
   frame_tau_120e98a0__7->GetZaxis()->SetLabelFont(42);
   frame_tau_120e98a0__7->GetZaxis()->SetTitleOffset(1);
   frame_tau_120e98a0__7->GetZaxis()->SetTitleFont(42);
   frame_tau_120e98a0__7->Draw("FUNC");
   
   Double_t hpull_fx3004[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t hpull_fy3004[80] = { 0.5696858, -0.5705445, -2.290232, 0.3720406, 0.4884198, 0.1821179, -0.2002462, -0.1917007, -1.036071, -1.161168, 1.155154, 0.8495764, -1.413148, -0.7602252, -1.580866, -1.799966, 0.4605033,
   -0.8348237, 1.194869, 0.1347436, -0.6434678, 2.099677, 1.883752, -0.4433199, -0.8556306, 0.3389604, -0.5296325, 0.5719921, 2.089572, 1.110704, -0.7813408, 0.171305, -0.7247499,
   -0.9320345, -1.386229, -1.443955, -0.3087828, -0.799667, 0.3969485, -1.605109, 2.489676, -3.192981, 1.962548, 1.994554, -0.8568757, 0.4815326, -2.0044, -0.3833366, -2.239335,
   -0.9704892, 1.239776, -2.90355, 1.323482, 0.150074, -1.404239, 1.083146, -0.9894854, 0.7584484, -1.159759, -0.6677907, -1.207323, -2.280343, -1.957494, -0.8598561, -0.6844395,
   -0.4199479, -1.158818, -0.1716336, -2.148761, 0.9505201, 0.9698152, 0.002797222, -1.662066, -1.673077, -0.6948641, -0.1605095, -0.8950141, -1.391044, -1.001185, 0.05617799 };
   Double_t hpull_felx3004[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t hpull_fely3004[80] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
   Double_t hpull_fehx3004[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t hpull_fehy3004[80] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
   grae = new TGraphAsymmErrors(80,hpull_fx3004,hpull_fy3004,hpull_felx3004,hpull_fehx3004,hpull_fely3004,hpull_fehy3004);
   grae->SetName("hpull");
   grae->SetTitle("Pull of Histogram of data_sig_cut_plot__tau and Projection of ");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_hpull3004 = new TH1F("Graph_hpull3004","Pull of Histogram of data_sig_cut_plot__tau and Projection of ",100,-11.85,11.85);
   Graph_hpull3004->SetMinimum(-4.961247);
   Graph_hpull3004->SetMaximum(4.257942);
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
   
   TH1D *frame_tau_120e98a0__8 = new TH1D("frame_tau_120e98a0__8"," ",100,-10,10);
   frame_tau_120e98a0__8->SetMinimum(-5.9);
   frame_tau_120e98a0__8->SetMaximum(5.9);
   frame_tau_120e98a0__8->SetDirectory(nullptr);
   frame_tau_120e98a0__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_120e98a0__8->SetLineColor(ci);
   frame_tau_120e98a0__8->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_120e98a0__8->GetXaxis()->SetLabelFont(42);
   frame_tau_120e98a0__8->GetXaxis()->SetLabelSize(0.12);
   frame_tau_120e98a0__8->GetXaxis()->SetTitleSize(0.14);
   frame_tau_120e98a0__8->GetXaxis()->SetTitleOffset(0.95);
   frame_tau_120e98a0__8->GetXaxis()->SetTitleFont(42);
   frame_tau_120e98a0__8->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_tau_120e98a0__8->GetYaxis()->SetNdivisions(6);
   frame_tau_120e98a0__8->GetYaxis()->SetLabelFont(42);
   frame_tau_120e98a0__8->GetYaxis()->SetLabelSize(0.12);
   frame_tau_120e98a0__8->GetYaxis()->SetTitleSize(0.12);
   frame_tau_120e98a0__8->GetYaxis()->SetTitleOffset(0.35);
   frame_tau_120e98a0__8->GetYaxis()->SetTitleFont(42);
   frame_tau_120e98a0__8->GetZaxis()->SetLabelFont(42);
   frame_tau_120e98a0__8->GetZaxis()->SetTitleOffset(1);
   frame_tau_120e98a0__8->GetZaxis()->SetTitleFont(42);
   frame_tau_120e98a0__8->Draw("AXISSAME");
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
