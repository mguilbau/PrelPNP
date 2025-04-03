#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauz_PP_pT4_5()
{
//=========Macro generated from canvas: cTauz_PP/cTauz
//=========  (Mon Mar 31 19:56:54 2025) by ROOT version 6.32.06
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
   pad1_Tauz__2->Range(-5,0.0899462,5,5.211084);
   pad1_Tauz__2->SetFillColor(0);
   pad1_Tauz__2->SetBorderMode(0);
   pad1_Tauz__2->SetBorderSize(2);
   pad1_Tauz__2->SetLogy();
   pad1_Tauz__2->SetFrameBorderMode(0);
   pad1_Tauz__2->SetFrameBorderMode(0);
   
   TH1D *frame_tau_f546b90__5 = new TH1D("frame_tau_f546b90__5"," ",80,-10,10);
   frame_tau_f546b90__5->SetBinContent(1,6581.325);
   frame_tau_f546b90__5->SetMinimum(4);
   frame_tau_f546b90__5->SetMaximum(50000);
   frame_tau_f546b90__5->SetEntries(2);
   frame_tau_f546b90__5->SetDirectory(nullptr);
   frame_tau_f546b90__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_f546b90__5->SetLineColor(ci);
   frame_tau_f546b90__5->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_f546b90__5->GetXaxis()->SetRange(25,56);
   frame_tau_f546b90__5->GetXaxis()->SetLabelFont(42);
   frame_tau_f546b90__5->GetXaxis()->SetLabelSize(0.04);
   frame_tau_f546b90__5->GetXaxis()->SetTitleSize(0.045);
   frame_tau_f546b90__5->GetXaxis()->SetTitleOffset(1);
   frame_tau_f546b90__5->GetXaxis()->SetTitleFont(42);
   frame_tau_f546b90__5->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_f546b90__5->GetYaxis()->SetLabelFont(42);
   frame_tau_f546b90__5->GetYaxis()->SetLabelSize(0.04);
   frame_tau_f546b90__5->GetYaxis()->SetTitleSize(0.045);
   frame_tau_f546b90__5->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_f546b90__5->GetYaxis()->SetTitleFont(42);
   frame_tau_f546b90__5->GetZaxis()->SetLabelFont(42);
   frame_tau_f546b90__5->GetZaxis()->SetTitleOffset(1);
   frame_tau_f546b90__5->GetZaxis()->SetTitleFont(42);
   frame_tau_f546b90__5->Draw("FUNC");
   
   Double_t h_dataw_bkg_fx3003[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_dataw_bkg_fy3003[80] = { 2.072497, -0.7890105, 0.210403, 4.970623, 3.794904, 4.169673, -0.3298442, 0.7793978, -0.7845651, 1.845124, 0.2466872, 6.538054, 2.421576, 5.059141, 2.041371, 0.8245455, -0.6726935,
   2.727416, 1.198781, 2.48914, 6.443448, 5.49934, 6.596372, 8.596015, 8.88412, 9.998874, 17.01003, 17.58117, 17.9318, 20.44438, 20.54235, 27.72299, 35.55143,
   42.74228, 51.80831, 81.07896, 105.9621, 203.9741, 410.2741, 2617.317, 4537.805, 1628.711, 759.7065, 411.481, 214.3316, 143.9257, 103.3856, 65.81844, 40.75167,
   37.2207, 26.34761, 26.8058, 18.79847, 16.92284, 11.30448, 11.51123, 10.1972, 16.52996, 3.937623, 11.60569, 4.108178, 3.433753, 3.381024, 1.111274, 9.137157,
   3.900242, 4.046848, 1.192859, 4.149277, 4.150833, 1.56729, 1.559099, 1.678694, 1.829654, 2.672758, 0.5347037, 1.585156, -0.2193362, 2.433221, 1.417072 };
   Double_t h_dataw_bkg_felx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fely3003[80] = { 1.730812, 0.372871, 0.7021753, 2.715027, 2.334261, 2.373733, 0.2440704, 0.8266534, 0.3774959, 1.420665, 0.5053995, 3.112217, 2.083309, 2.684567, 1.58909, 1.242494, 0.4424974,
   2.346889, 1.68254, 1.995701, 3.105146, 3.028787, 3.364455, 3.512006, 3.6177, 3.804373, 5.182458, 4.981801, 4.894145, 5.529833, 5.51932, 6.371719, 7.005406,
   7.841471, 8.929392, 10.61438, 12.56491, 16.98805, 24.91477, 72.76433, 91.44312, 50.1077, 34.39194, 25.21795, 18.43529, 14.85284, 12.2704, 9.938987, 7.752823,
   7.669142, 6.266352, 6.195783, 5.372739, 4.929474, 4.004618, 4.391679, 3.888899, 4.909298, 2.094902, 4.217139, 2.253648, 2.357367, 2.291939, 1.274233, 3.735666,
   2.38826, 2.504243, 1.74256, 2.556454, 2.735464, 1.56729, 1.374327, 1.601863, 1.411132, 1.922208, 0.7845791, 1.544203, 0.2193362, 1.793975, 1.266641 };
   Double_t h_dataw_bkg_fehx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fehy3003[80] = { 1.730812, 0.372871, 0.7021753, 2.715027, 2.334261, 2.373733, 0.2440704, 0.8266534, 0.3774959, 1.420665, 0.5053995, 3.112217, 2.083309, 2.684567, 1.58909, 1.242494, 0.4424974,
   2.346889, 1.68254, 1.995701, 3.105146, 3.028787, 3.364455, 3.512006, 3.6177, 3.804373, 5.182458, 4.981801, 4.894145, 5.529833, 5.51932, 6.371719, 7.005406,
   7.841471, 8.929392, 10.61438, 12.56491, 16.98805, 24.91477, 72.76433, 91.44312, 50.1077, 34.39194, 25.21795, 18.43529, 14.85284, 12.2704, 9.938987, 7.752823,
   7.669142, 6.266352, 6.195783, 5.372739, 4.929474, 4.004618, 4.391679, 3.888899, 4.909298, 2.094902, 4.217139, 2.253648, 2.357367, 2.291939, 1.274233, 3.735666,
   2.38826, 2.504243, 1.74256, 2.556454, 2.735464, 1.56729, 1.374327, 1.601863, 1.411132, 1.922208, 0.7845791, 1.544203, 0.2193362, 1.793975, 1.266641 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_dataw_bkg_fx3003,h_dataw_bkg_fy3003,h_dataw_bkg_felx3003,h_dataw_bkg_fehx3003,h_dataw_bkg_fely3003,h_dataw_bkg_fehy3003);
   grae->SetName("h_dataw_bkg");
   grae->SetTitle("Histogram of dataw_bkg_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataw_bkg3003 = new TH1F("Graph_h_dataw_bkg3003","Histogram of dataw_bkg_plot__tau",100,-12,12);
   Graph_h_dataw_bkg3003->SetMinimum(5.092252);
   Graph_h_dataw_bkg3003->SetMaximum(5092.252);
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
   
   Double_t exp_DDS_fx7[102] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.625, -1.5, -1.375, -1.25, -1.125, -1, -0.875, -0.75, -0.625, -0.5, -0.375, -0.25, -0.125, -0.0625, -0.03125,
   0, 0.03125, 0.0625, 0.09375, 0.125, 0.1875, 0.25, 0.375, 0.5, 0.625, 0.75, 0.875, 1, 1.125, 1.25, 1.375,
   1.5, 1.625, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5,
   5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9,
   9.25, 9.5, 9.75, 10, 10 };
   Double_t exp_DDS_fy7[102] = { 0.3385055, 0.3924977, 0.4551018, 0.5276912, 0.6118588, 0.7094513, 0.82261, 0.9538176, 1.105953, 1.282354, 1.486892, 1.724054, 1.999043, 2.317894, 2.687602, 3.116279, 3.61333,
   4.189662, 4.85792, 5.632767, 6.531202, 7.572939, 8.780836, 10.18139, 11.80534, 13.68831, 15.87162, 18.40317, 21.33851, 24.74204, 28.68843, 33.26428, 38.56999,
   44.72197, 48.15668, 51.85519, 55.83775, 60.12618, 64.74397, 69.71641, 75.07074, 80.83629, 87.04464, 93.72981, 100.9284, 108.6761, 116.8845, 120.7765, 122.3705,
   123.4909, 123.958, 123.6845, 122.7225, 121.2347, 117.4272, 113.2985, 105.2478, 97.74158, 90.77028, 84.2962, 78.28388, 72.70037, 67.51511, 62.69967, 58.22769,
   54.07467, 50.21786, 46.63613, 40.22084, 34.68804, 29.91634, 25.80103, 22.25183, 19.19086, 16.55095, 14.27419, 12.31063, 10.61717, 9.156669, 7.897073, 6.810747,
   5.873857, 5.065847, 4.368986, 3.767986, 3.24966, 2.802635, 2.417103, 2.084605, 1.797846, 1.550533, 1.337241, 1.15329, 0.9946425, 0.8578189, 0.7398169, 0.6380473,
   0.5502772, 0.4745808, 0.4092972, 0.3529941, 0.3529941 };
   TGraph *graph = new TGraph(102,exp_DDS_fx7,exp_DDS_fy7);
   graph->SetName("exp_DDS");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_DDS7 = new TH1F("Graph_exp_DDS7","Projection of model2",102,-12,12);
   Graph_exp_DDS7->SetMinimum(0.304655);
   Graph_exp_DDS7->SetMaximum(136.3199);
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
   -1.75, -1.5, -1.25, -1, -0.875, -0.75, -0.6875, -0.625, -0.5625, -0.5, -0.46875, -0.4375, -0.40625, -0.375, -0.34375, -0.3125,
   -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.25, 0.28125,
   0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.53125, 0.5625, 0.59375, 0.625, 0.6875, 0.75, 0.8125, 0.875, 0.9375,
   1, 1.0625, 1.125, 1.25, 1.375, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4,
   4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8,
   8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model1_fy8[122] = { 1.853646e-26, 1.003766e-25, 5.435481e-25, 2.943361e-24, 1.593856e-23, 8.63087e-23, 4.673693e-22, 2.530846e-21, 1.370475e-20, 7.421245e-20, 4.01867e-19, 2.176145e-18, 1.178402e-17, 6.38115e-17, 3.455449e-16, 1.871156e-15, 1.013248e-14,
   5.486825e-14, 2.971164e-13, 1.608912e-12, 8.712399e-12, 4.717841e-11, 2.554753e-10, 1.383421e-09, 7.491347e-09, 4.056631e-08, 2.196701e-07, 1.189533e-06, 6.441427e-06, 3.48809e-05, 0.0001888831, 0.001022819, 0.005538655,
   0.0299923, 0.162411, 0.8794698, 4.762406, 11.08228, 25.78885, 39.33991, 60.01154, 91.54532, 139.6489, 172.4797, 213.0285, 263.1085, 324.9557, 401.3205, 495.5662,
   611.7577, 754.7031, 929.8814, 1143.127, 1399.783, 1702.653, 2047.759, 2417.778, 2776.706, 3073.344, 3258.371, 3307.086, 3230.312, 3064.643, 2186.807, 1989.725,
   1808.833, 1643.699, 1493.362, 1356.673, 1232.461, 1119.611, 1017.091, 923.9577, 839.3525, 762.4943, 692.674, 571.6278, 471.7347, 389.2982, 321.2675, 265.1254,
   218.7942, 180.5595, 149.0064, 101.4785, 69.11031, 47.06649, 21.8298, 10.12483, 4.695975, 2.178029, 1.010187, 0.4685325, 0.217309, 0.1007896, 0.04674699, 0.02168162,
   0.0100561, 0.004664097, 0.002163244, 0.001003329, 0.000465352, 0.0002158338, 0.0001001054, 4.642966e-05, 2.153444e-05, 9.987837e-06, 4.632436e-06, 2.14856e-06, 9.965186e-07, 4.62193e-07, 2.143687e-07, 9.942586e-08,
   4.611448e-08, 2.138825e-08, 9.920037e-09, 4.60099e-09, 2.133975e-09, 9.89754e-10, 4.590555e-10, 2.129135e-10, 2.129135e-10 };
   graph = new TGraph(122,model1_fx8,model1_fy8);
   graph->SetName("model1");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model18 = new TH1F("Graph_model18","Projection of model2",122,-12,12);
   Graph_model18->SetMinimum(1.668282e-26);
   Graph_model18->SetMaximum(3637.795);
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
   
   Double_t resolution_bkg_fx9[102] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125,
   0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.5, 0.75, 1,
   1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5,
   5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9,
   9.25, 9.5, 9.75, 10, 10 };
   Double_t resolution_bkg_fy9[102] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 6.067397e-303, 5.622458e-264, 1.136229e-227, 5.007501e-194, 4.812736e-163, 1.008739e-134, 4.610853e-109, 4.596207e-86,
   9.991565e-66, 4.73678e-48, 4.897209e-33, 1.104155e-20, 5.429087e-11, 0.0005821561, 0.1915091, 1.95688, 13.76523, 32.21208, 70.93562, 150.8424, 314.2152, 629.7955, 1160.322, 1871.644,
   2552.205, 2885.599, 2686.717, 2068.095, 1336.951, 748.4919, 379.9645, 183.6852, 86.88323, 39.92129, 17.3773, 7.010481, 2.589469, 0.01872613, 9.904643e-09, 1.142473e-17,
   2.873881e-29, 1.576549e-43, 1.886087e-60, 4.920755e-80, 2.799739e-102, 3.473914e-127, 9.400183e-155, 5.547142e-185, 7.138682e-218, 2.003469e-253, 1.226204e-291, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   graph = new TGraph(102,resolution_bkg_fx9,resolution_bkg_fy9);
   graph->SetName("resolution_bkg");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_resolution_bkg9 = new TH1F("Graph_resolution_bkg9","Projection of model2",102,-12,12);
   Graph_resolution_bkg9->SetMinimum(3.174159);
   Graph_resolution_bkg9->SetMaximum(3174.159);
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
   
   Double_t model2_fx10[116] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875,
   -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125,
   0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 1, 1.125, 1.25, 1.5,
   1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5,
   5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5,
   9.75, 10, 10 };
   Double_t model2_fy10[116] = { 0.3385055, 0.3924977, 0.4551018, 0.5276912, 0.6118588, 0.7094513, 0.82261, 0.9538176, 1.105953, 1.282354, 1.486892, 1.724054, 1.999043, 2.317894, 2.687602, 3.116279, 3.61333,
   4.189662, 4.85792, 5.632767, 6.531202, 7.572939, 8.780836, 10.18139, 11.80534, 13.68831, 15.87162, 18.40317, 21.33851, 24.74207, 28.68862, 33.26531, 38.57553,
   44.75196, 52.0176, 61.00565, 74.47881, 106.6251, 147.0562, 181.8707, 233.3793, 310.3038, 362.2389, 426.0756, 504.7753, 602.2552, 723.8735, 877.1445, 1072.792,
   1326.813, 1665.444, 2133.753, 2796.454, 3698.876, 4770.721, 5749.039, 6267.928, 6117.488, 5421.13, 4522.829, 3719.787, 3121.314, 2698.375, 2386.988, 2140.887,
   1935.421, 1757.921, 1601.199, 1460.863, 1334.153, 1114.851, 933.5448, 783.4443, 659.1012, 556.0309, 470.5326, 399.5514, 291.4946, 216.5215, 164.1781, 101.1412,
   68.46594, 50.34567, 39.38402, 32.09437, 26.81122, 22.72036, 19.40816, 16.65174, 14.32094, 12.33231, 10.62723, 9.161333, 7.899236, 6.811751, 5.874323, 5.066062,
   4.369086, 3.768033, 3.249682, 2.802645, 2.417108, 2.084607, 1.797847, 1.550534, 1.337241, 1.15329, 0.9946425, 0.857819, 0.7398169, 0.6380473, 0.5502772, 0.4745808,
   0.4092972, 0.3529941, 0.3529941 };
   graph = new TGraph(116,model2_fx10,model2_fy10);
   graph->SetName("model2");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model210 = new TH1F("Graph_model210","Projection of model2",116,-12,12);
   Graph_model210->SetMinimum(0.304655);
   Graph_model210->SetMaximum(6894.687);
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
   
   TH1D *frame_tau_f546b90__6 = new TH1D("frame_tau_f546b90__6"," ",80,-10,10);
   frame_tau_f546b90__6->SetBinContent(1,6581.325);
   frame_tau_f546b90__6->SetMinimum(4);
   frame_tau_f546b90__6->SetMaximum(50000);
   frame_tau_f546b90__6->SetEntries(2);
   frame_tau_f546b90__6->SetDirectory(nullptr);
   frame_tau_f546b90__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_f546b90__6->SetLineColor(ci);
   frame_tau_f546b90__6->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_f546b90__6->GetXaxis()->SetRange(25,56);
   frame_tau_f546b90__6->GetXaxis()->SetLabelFont(42);
   frame_tau_f546b90__6->GetXaxis()->SetLabelSize(0.04);
   frame_tau_f546b90__6->GetXaxis()->SetTitleSize(0.045);
   frame_tau_f546b90__6->GetXaxis()->SetTitleOffset(1);
   frame_tau_f546b90__6->GetXaxis()->SetTitleFont(42);
   frame_tau_f546b90__6->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_f546b90__6->GetYaxis()->SetLabelFont(42);
   frame_tau_f546b90__6->GetYaxis()->SetLabelSize(0.04);
   frame_tau_f546b90__6->GetYaxis()->SetTitleSize(0.045);
   frame_tau_f546b90__6->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_f546b90__6->GetYaxis()->SetTitleFont(42);
   frame_tau_f546b90__6->GetZaxis()->SetLabelFont(42);
   frame_tau_f546b90__6->GetZaxis()->SetTitleOffset(1);
   frame_tau_f546b90__6->GetZaxis()->SetTitleFont(42);
   frame_tau_f546b90__6->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.69,"4 < #it{p}_{T}^{#mu#mu} < 5 GeV/c");
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
      tex = new TLatex(0.15,0.59,"#chi^{2}/ndof = 83 / 70 ");
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

   cTauz_PP->SaveAs("../pdf/cTauz_PP_pT4_5.pdf");
   cTauz_PP->SaveAs("../png/cTauz_PP_pT4_5.png");
}
