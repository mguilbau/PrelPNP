#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauz_PP_pT15_30()
{
//=========Macro generated from canvas: cTauz_PP/cTauz
//=========  (Mon Mar 31 13:15:08 2025) by ROOT version 6.32.06
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
   
   TH1D *frame_tau_e08eae0__9 = new TH1D("frame_tau_e08eae0__9"," ",80,-10,10);
   frame_tau_e08eae0__9->SetBinContent(1,504.9684);
   frame_tau_e08eae0__9->SetMinimum(1.5);
   frame_tau_e08eae0__9->SetMaximum(1000000);
   frame_tau_e08eae0__9->SetEntries(2);
   frame_tau_e08eae0__9->SetDirectory(nullptr);
   frame_tau_e08eae0__9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_e08eae0__9->SetLineColor(ci);
   frame_tau_e08eae0__9->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_e08eae0__9->GetXaxis()->SetLabelFont(42);
   frame_tau_e08eae0__9->GetXaxis()->SetLabelSize(0.04);
   frame_tau_e08eae0__9->GetXaxis()->SetTitleSize(0.045);
   frame_tau_e08eae0__9->GetXaxis()->SetTitleOffset(1);
   frame_tau_e08eae0__9->GetXaxis()->SetTitleFont(42);
   frame_tau_e08eae0__9->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_e08eae0__9->GetYaxis()->SetLabelFont(42);
   frame_tau_e08eae0__9->GetYaxis()->SetLabelSize(0.04);
   frame_tau_e08eae0__9->GetYaxis()->SetTitleSize(0.045);
   frame_tau_e08eae0__9->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_e08eae0__9->GetYaxis()->SetTitleFont(42);
   frame_tau_e08eae0__9->GetZaxis()->SetLabelFont(42);
   frame_tau_e08eae0__9->GetZaxis()->SetTitleOffset(1);
   frame_tau_e08eae0__9->GetZaxis()->SetTitleFont(42);
   frame_tau_e08eae0__9->Draw("FUNC");
   
   Double_t h_dataw_bkg_fx3005[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_dataw_bkg_fy3005[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.4827153,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3.873484,
   2.073993, 0.7347258, 1.509791, 4.359361, 8.583431, 11.13076, 152.1989, 269.1954, 155.4062, 65.58054, 39.82041, 21.32108, 4.427637, 5.0854, 7.716116, 4.071008,
   2.90326, 3.572985, 1.654423, 0.9957636, 0, 0, 0, 0.9997926, 0, 0, 0, 0, 0.5032743, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_dataw_bkg_felx3005[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fely3005[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.4827153,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2.412858,
   1.817028, 0.5283613, 1.87587, 2.636012, 3.873931, 4.163236, 17.65053, 24.45999, 17.05132, 10.97286, 8.290818, 6.186191, 3.445429, 3.082716, 3.488646, 2.76645,
   2.251105, 2.216548, 1.5937, 1.62045, 0, 0, 0, 0.9997926, 0, 0, 0, 0, 0.5032743, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_dataw_bkg_fehx3005[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fehy3005[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.4827153,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2.412858,
   1.817028, 0.5283613, 1.87587, 2.636012, 3.873931, 4.163236, 17.65053, 24.45999, 17.05132, 10.97286, 8.290818, 6.186191, 3.445429, 3.082716, 3.488646, 2.76645,
   2.251105, 2.216548, 1.5937, 1.62045, 0, 0, 0, 0.9997926, 0, 0, 0, 0, 0.5032743, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_dataw_bkg_fx3005,h_dataw_bkg_fy3005,h_dataw_bkg_felx3005,h_dataw_bkg_fehx3005,h_dataw_bkg_fely3005,h_dataw_bkg_fehy3005);
   grae->SetName("h_dataw_bkg");
   grae->SetTitle("Histogram of dataw_bkg_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataw_bkg3005 = new TH1F("Graph_h_dataw_bkg3005","Histogram of dataw_bkg_plot__tau",100,-12,12);
   Graph_h_dataw_bkg3005->SetMinimum(0.3230209);
   Graph_h_dataw_bkg3005->SetMaximum(323.0209);
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
   
   Double_t exp_DDS_fx7[113] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.875, -1.75, -1.625, -1.5, -1.375, -1.25, -1.125, -1, -0.875, -0.75, -0.6875, -0.625, -0.5625, -0.5, -0.4375, -0.375,
   -0.3125, -0.25, -0.1875, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.125, 0.1875, 0.25, 0.3125, 0.375, 0.4375,
   0.5, 0.5625, 0.625, 0.6875, 0.75, 0.875, 1, 1.125, 1.25, 1.375, 1.5, 1.625, 1.75, 1.875, 2, 2.25,
   2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25,
   6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t exp_DDS_fy7[113] = { 0.000331523, 0.000427628, 0.0005515929, 0.0007114939, 0.0009177485, 0.001183794, 0.001526964, 0.001969614, 0.002540585, 0.003277074, 0.004227063, 0.005452444, 0.007033051, 0.009071858, 0.01170169, 0.01509389, 0.01946945,
   0.02511345, 0.03239357, 0.04178413, 0.05389691, 0.06952105, 0.08967448, 0.1156702, 0.1492017, 0.1924538, 0.2482441, 0.3202074, 0.4130322, 0.5327659, 0.6872092, 0.8864239, 1.143389,
   1.298584, 1.474845, 1.675031, 1.902387, 2.160604, 2.45387, 2.786941, 3.165221, 3.594846, 4.082785, 4.351056, 4.636954, 4.941638, 5.266342, 5.612381, 5.981158,
   6.374164, 6.79292, 7.238069, 7.703427, 7.933918, 8.138961, 8.263807, 8.248433, 8.101497, 7.888042, 7.421954, 6.967171, 6.537831, 6.134742, 5.756496, 5.401571,
   5.068529, 4.756021, 4.462782, 4.187623, 3.929429, 3.459817, 3.04633, 2.682259, 2.361698, 2.079448, 1.830931, 1.612114, 1.419448, 1.249807, 1.100441, 0.8531283,
   0.6613964, 0.5127543, 0.397518, 0.3081799, 0.2389196, 0.1852249, 0.1435975, 0.1113254, 0.08630615, 0.06690973, 0.05187245, 0.04021464, 0.03117681, 0.02417014, 0.01873815, 0.01452694,
   0.01126216, 0.008731104, 0.006768877, 0.005247641, 0.004068287, 0.003153981, 0.002445156, 0.001895632, 0.001469608, 0.001139329, 0.0008832763, 0.0006847689, 0.0005308741, 0.0004115656, 0.0003190704, 0.0003190704 };
   TGraph *graph = new TGraph(113,exp_DDS_fx7,exp_DDS_fy7);
   graph->SetName("exp_DDS");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_DDS7 = new TH1F("Graph_exp_DDS7","Projection of model2",113,-12,12);
   Graph_exp_DDS7->SetMinimum(0.0002871634);
   Graph_exp_DDS7->SetMaximum(9.090156);
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
   
   Double_t model1_fx8[120] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625,
   -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375,
   0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.53125, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 0.9375, 1, 1.0625, 1.125,
   1.25, 1.375, 1.5, 1.625, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5,
   4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5,
   8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model1_fy8[120] = { 3.939505e-32, 2.719543e-31, 1.877371e-30, 1.295998e-29, 8.946614e-29, 6.176081e-28, 4.263509e-27, 2.943211e-26, 2.031776e-25, 1.402588e-24, 9.682427e-24, 6.684031e-23, 4.614161e-22, 3.185275e-21, 2.198879e-20, 1.517943e-19, 1.047876e-18,
   7.233759e-18, 4.993652e-17, 3.447248e-16, 2.379725e-15, 1.642786e-14, 1.134058e-13, 7.828698e-13, 5.404354e-12, 3.730766e-11, 2.575445e-10, 1.777897e-09, 1.227328e-08, 8.472568e-08, 5.848834e-07, 4.037603e-06, 2.787262e-05,
   0.000192412, 0.00132827, 0.009169393, 0.06329871, 0.4369675, 1.148091, 3.0165, 4.889528, 7.925601, 10.09073, 12.84834, 16.36444, 20.86222, 26.65893, 34.22627, 44.25874,
   57.82152, 77.65047, 111.9338, 168.1131, 227.0791, 256.4469, 255.7943, 242.9751, 227.385, 211.5189, 196.1861, 181.7366, 168.2763, 155.7924, 144.2301, 133.525,
   123.6143, 114.4392, 105.9451, 98.08153, 90.80157, 84.06197, 77.82259, 66.6988, 57.16502, 48.99398, 41.99088, 35.9888, 30.84464, 26.43577, 22.6571, 19.41854,
   14.264, 10.4777, 7.696453, 5.653472, 4.15279, 2.240728, 1.209034, 0.6523608, 0.3519955, 0.1899269, 0.1024792, 0.0552949, 0.02983557, 0.01609844, 0.008686263, 0.004686864,
   0.0025289, 0.001364523, 0.0007362583, 0.0003972643, 0.0002143526, 0.0001156587, 6.240616e-05, 3.367261e-05, 1.816879e-05, 9.80337e-06, 5.289623e-06, 2.854132e-06, 1.540009e-06, 8.309456e-07, 4.483549e-07, 2.419197e-07,
   1.305331e-07, 7.043197e-08, 3.800311e-08, 2.050541e-08, 1.106414e-08, 5.9699e-09, 5.9699e-09 };
   graph = new TGraph(120,model1_fx8,model1_fy8);
   graph->SetName("model1");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model18 = new TH1F("Graph_model18","Projection of model2",120,-12,12);
   Graph_model18->SetMinimum(3.545555e-32);
   Graph_model18->SetMaximum(282.0916);
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
   
   Double_t resolution_bkg_fx9[95] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125,
   0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.25, 0.5, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75,
   3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75,
   7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t resolution_bkg_fy9[95] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4.733578e-298, 7.902813e-246, 1.290971e-198, 2.063448e-156,
   3.227107e-119, 4.93828e-87, 7.394019e-60, 1.083248e-37, 1.552808e-20, 2.177962e-08, 0.2988998, 1.036331, 3.00383, 7.401523, 17.53029, 50.99853, 146.6632, 262.8894, 245.5948, 121.5961,
   40.389, 14.56079, 6.225291, 2.45445, 0.8167838, 0.05273548, 6.779622e-10, 8.528068e-23, 1.049635e-40, 1.264062e-63, 1.489503e-91, 1.717341e-124, 1.937378e-162, 2.138527e-205, 2.309711e-253, 2.440861e-306,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   graph = new TGraph(95,resolution_bkg_fx9,resolution_bkg_fy9);
   graph->SetName("resolution_bkg");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_resolution_bkg9 = new TH1F("Graph_resolution_bkg9","Projection of model2",100,-12,12);
   Graph_resolution_bkg9->SetMinimum(0.2891784);
   Graph_resolution_bkg9->SetMaximum(289.1784);
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
   
   Double_t model2_fx10[112] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.375, 0.4375,
   0.5, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 1, 1.125, 1.25, 1.375, 1.5, 1.75, 2, 2.25, 2.5,
   2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5,
   6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model2_fy10[112] = { 0.000331523, 0.000427628, 0.0005515929, 0.0007114939, 0.0009177485, 0.001183794, 0.001526964, 0.001969614, 0.002540585, 0.003277074, 0.004227063, 0.005452444, 0.007033051, 0.009071858, 0.01170169, 0.01509389, 0.01946945,
   0.02511345, 0.03239357, 0.04178413, 0.05389691, 0.06952105, 0.08967448, 0.1156702, 0.1492017, 0.1924538, 0.2482441, 0.3202074, 0.4130322, 0.532766, 0.6872097, 0.8864279, 1.143417,
   1.475038, 1.903716, 2.463039, 3.228519, 4.519752, 5.785045, 8.282842, 10.50191, 13.9071, 19.23699, 23.01667, 27.95404, 34.70754, 44.46817, 59.12955, 83.05524,
   136.5829, 266.736, 439.2663, 480.9223, 386.1445, 304.0713, 265.1917, 241.0322, 221.165, 203.97, 188.7129, 174.8668, 162.1357, 150.3665, 129.3708, 111.3467,
   95.8701, 82.57862, 71.16158, 61.35264, 52.92341, 45.67804, 39.44862, 29.4821, 22.1008, 16.6257, 12.55715, 9.527383, 5.572237, 3.34117, 2.062162, 1.313757,
   0.8647499, 0.5874449, 0.4106591, 0.2942145, 0.2150604, 0.1596959, 0.1200117, 0.09099302, 0.06943862, 0.05323697, 0.0409509, 0.03157408, 0.02438449, 0.01885381, 0.01458935, 0.01129583,
   0.008749273, 0.006778681, 0.005252931, 0.004071142, 0.003155521, 0.002445987, 0.001896081, 0.00146985, 0.001139459, 0.0008833467, 0.000684807, 0.0005308946, 0.0004115766, 0.0003190764, 0.0003190764 };
   graph = new TGraph(112,model2_fx10,model2_fy10);
   graph->SetName("model2");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model210 = new TH1F("Graph_model210","Projection of model2",112,-12,12);
   Graph_model210->SetMinimum(0.0002871687);
   Graph_model210->SetMaximum(529.0145);
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
   
   TH1D *frame_tau_e08eae0__10 = new TH1D("frame_tau_e08eae0__10"," ",80,-10,10);
   frame_tau_e08eae0__10->SetBinContent(1,504.9684);
   frame_tau_e08eae0__10->SetMinimum(1.5);
   frame_tau_e08eae0__10->SetMaximum(1000000);
   frame_tau_e08eae0__10->SetEntries(2);
   frame_tau_e08eae0__10->SetDirectory(nullptr);
   frame_tau_e08eae0__10->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_e08eae0__10->SetLineColor(ci);
   frame_tau_e08eae0__10->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_e08eae0__10->GetXaxis()->SetLabelFont(42);
   frame_tau_e08eae0__10->GetXaxis()->SetLabelSize(0.04);
   frame_tau_e08eae0__10->GetXaxis()->SetTitleSize(0.045);
   frame_tau_e08eae0__10->GetXaxis()->SetTitleOffset(1);
   frame_tau_e08eae0__10->GetXaxis()->SetTitleFont(42);
   frame_tau_e08eae0__10->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_e08eae0__10->GetYaxis()->SetLabelFont(42);
   frame_tau_e08eae0__10->GetYaxis()->SetLabelSize(0.04);
   frame_tau_e08eae0__10->GetYaxis()->SetTitleSize(0.045);
   frame_tau_e08eae0__10->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_e08eae0__10->GetYaxis()->SetTitleFont(42);
   frame_tau_e08eae0__10->GetZaxis()->SetLabelFont(42);
   frame_tau_e08eae0__10->GetZaxis()->SetTitleOffset(1);
   frame_tau_e08eae0__10->GetZaxis()->SetTitleFont(42);
   frame_tau_e08eae0__10->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.64,"#chi^{2}/ndof = 16 / 19 ");
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
   
   TH1D *frame_tau_e08eba0__11 = new TH1D("frame_tau_e08eba0__11"," ",100,-10,10);
   frame_tau_e08eba0__11->SetMinimum(-4.9);
   frame_tau_e08eba0__11->SetMaximum(4.9);
   frame_tau_e08eba0__11->SetDirectory(nullptr);
   frame_tau_e08eba0__11->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_e08eba0__11->SetLineColor(ci);
   frame_tau_e08eba0__11->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_e08eba0__11->GetXaxis()->SetLabelFont(42);
   frame_tau_e08eba0__11->GetXaxis()->SetLabelSize(0.12);
   frame_tau_e08eba0__11->GetXaxis()->SetTitleSize(0.14);
   frame_tau_e08eba0__11->GetXaxis()->SetTitleOffset(0.95);
   frame_tau_e08eba0__11->GetXaxis()->SetTitleFont(42);
   frame_tau_e08eba0__11->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_tau_e08eba0__11->GetYaxis()->SetNdivisions(6);
   frame_tau_e08eba0__11->GetYaxis()->SetLabelFont(42);
   frame_tau_e08eba0__11->GetYaxis()->SetLabelSize(0.12);
   frame_tau_e08eba0__11->GetYaxis()->SetTitleSize(0.12);
   frame_tau_e08eba0__11->GetYaxis()->SetTitleOffset(0.35);
   frame_tau_e08eba0__11->GetYaxis()->SetTitleFont(42);
   frame_tau_e08eba0__11->GetZaxis()->SetLabelFont(42);
   frame_tau_e08eba0__11->GetZaxis()->SetTitleOffset(1);
   frame_tau_e08eba0__11->GetZaxis()->SetTitleFont(42);
   frame_tau_e08eba0__11->Draw("FUNC");
   
   Double_t hpull_fx3006[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t hpull_fy3006[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.9538207,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.062747,
   0.2116733, -2.741782, -0.7121967, 0.1840753, 0.6428251, -1.017957, -0.7138072, 0.07860253, 1.398907, -0.6189691, -0.04562678, -0.2030773, -2.43488, -0.7994284, 0.9342916, 0.4949818,
   0.5398684, 1.12054, 0.5824971, 0.306527, 0, 0, 0, 0.8601172, 0, 0, 0, 0, 0.9279468, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t hpull_felx3006[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t hpull_fely3006[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t hpull_fehx3006[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t hpull_fehy3006[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   grae = new TGraphAsymmErrors(80,hpull_fx3006,hpull_fy3006,hpull_felx3006,hpull_fehx3006,hpull_fely3006,hpull_fehy3006);
   grae->SetName("hpull");
   grae->SetTitle("Pull of Histogram of dataw_bkg_plot__tau and Projection of model2");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_hpull3006 = new TH1F("Graph_hpull3006","Pull of Histogram of dataw_bkg_plot__tau and Projection of model2",100,-11.85,11.85);
   Graph_hpull3006->SetMinimum(-4.355851);
   Graph_hpull3006->SetMaximum(3.012976);
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
   
   TH1D *frame_tau_e08eba0__12 = new TH1D("frame_tau_e08eba0__12"," ",100,-10,10);
   frame_tau_e08eba0__12->SetMinimum(-4.9);
   frame_tau_e08eba0__12->SetMaximum(4.9);
   frame_tau_e08eba0__12->SetDirectory(nullptr);
   frame_tau_e08eba0__12->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_e08eba0__12->SetLineColor(ci);
   frame_tau_e08eba0__12->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_e08eba0__12->GetXaxis()->SetLabelFont(42);
   frame_tau_e08eba0__12->GetXaxis()->SetLabelSize(0.12);
   frame_tau_e08eba0__12->GetXaxis()->SetTitleSize(0.14);
   frame_tau_e08eba0__12->GetXaxis()->SetTitleOffset(0.95);
   frame_tau_e08eba0__12->GetXaxis()->SetTitleFont(42);
   frame_tau_e08eba0__12->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_tau_e08eba0__12->GetYaxis()->SetNdivisions(6);
   frame_tau_e08eba0__12->GetYaxis()->SetLabelFont(42);
   frame_tau_e08eba0__12->GetYaxis()->SetLabelSize(0.12);
   frame_tau_e08eba0__12->GetYaxis()->SetTitleSize(0.12);
   frame_tau_e08eba0__12->GetYaxis()->SetTitleOffset(0.35);
   frame_tau_e08eba0__12->GetYaxis()->SetTitleFont(42);
   frame_tau_e08eba0__12->GetZaxis()->SetLabelFont(42);
   frame_tau_e08eba0__12->GetZaxis()->SetTitleOffset(1);
   frame_tau_e08eba0__12->GetZaxis()->SetTitleFont(42);
   frame_tau_e08eba0__12->Draw("AXISSAME");
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
