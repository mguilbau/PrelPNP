#ifdef __CLING__
#pragma cling optimize(0)
#endif
void c2DFitbis_pT8_10()
{
//=========Macro generated from canvas: c2DFitbis/c2DFitbis
//=========  (Mon Mar 31 17:08:07 2025) by ROOT version 6.32.06
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
   pad1_2DFitbis__3->Range(-5,0.07396996,5,6.32397);
   pad1_2DFitbis__3->SetFillColor(0);
   pad1_2DFitbis__3->SetBorderMode(0);
   pad1_2DFitbis__3->SetBorderSize(2);
   pad1_2DFitbis__3->SetLogy();
   pad1_2DFitbis__3->SetFrameBorderMode(0);
   pad1_2DFitbis__3->SetFrameBorderMode(0);
   
   TH1D *frame_tau_f5b9520__7 = new TH1D("frame_tau_f5b9520__7"," ",80,-10,10);
   frame_tau_f5b9520__7->SetBinContent(1,14014.89);
   frame_tau_f5b9520__7->SetMinimum(5);
   frame_tau_f5b9520__7->SetMaximum(500000);
   frame_tau_f5b9520__7->SetEntries(3);
   frame_tau_f5b9520__7->SetDirectory(nullptr);
   frame_tau_f5b9520__7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_f5b9520__7->SetLineColor(ci);
   frame_tau_f5b9520__7->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_f5b9520__7->GetXaxis()->SetRange(25,56);
   frame_tau_f5b9520__7->GetXaxis()->SetLabelFont(42);
   frame_tau_f5b9520__7->GetXaxis()->SetLabelSize(0.04);
   frame_tau_f5b9520__7->GetXaxis()->SetTitleSize(0.045);
   frame_tau_f5b9520__7->GetXaxis()->SetTitleOffset(1);
   frame_tau_f5b9520__7->GetXaxis()->SetTitleFont(42);
   frame_tau_f5b9520__7->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_f5b9520__7->GetYaxis()->SetLabelFont(42);
   frame_tau_f5b9520__7->GetYaxis()->SetLabelSize(0.04);
   frame_tau_f5b9520__7->GetYaxis()->SetTitleSize(0.045);
   frame_tau_f5b9520__7->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_f5b9520__7->GetYaxis()->SetTitleFont(42);
   frame_tau_f5b9520__7->GetZaxis()->SetLabelFont(42);
   frame_tau_f5b9520__7->GetZaxis()->SetTitleOffset(1);
   frame_tau_f5b9520__7->GetZaxis()->SetTitleFont(42);
   frame_tau_f5b9520__7->Draw("FUNC");
   
   Double_t h_data_fx3004[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_fy3004[80] = { 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 3,
   2, 1, 0, 2, 0, 6, 5, 7, 4, 3, 5, 6, 2, 11, 8, 13,
   18, 20, 22, 41, 50, 124, 3555, 4831, 1023, 525, 286, 173, 72, 71, 36, 29,
   20, 10, 9, 9, 5, 3, 4, 1, 6, 0, 2, 1, 0, 0, 2, 1,
   2, 1, 0, 2, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0 };
   Double_t h_data_felx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fely3004[80] = { 0, 0, 0.8272462, 0.8272462, 0, 0, 0, 0, 0, 0, 0, 0.8272462, 0, 0.8272462, 0, 0, 1.632705,
   1.291815, 0.8272462, 0, 1.291815, 0, 2.379931, 2.159691, 2.58147, 1.914339, 1.632705, 2.159691, 2.379931, 1.291815, 3.265579, 2.768386, 3.558662,
   4.202887, 4.434448, 4.654502, 6.376898, 7.047337, 10.64675, 59.12592, 69.00719, 31.48828, 22.41833, 16.41892, 12.66245, 8.465529, 8.406258, 5.971996, 5.353932,
   4.434448, 3.108694, 2.943461, 2.943461, 2.159691, 1.632705, 1.914339, 0.8272462, 2.379931, 0, 1.291815, 0.8272462, 0, 0, 1.291815, 0.8272462,
   1.291815, 0.8272462, 0, 1.291815, 0, 0, 0, 0.8272462, 0, 0, 0, 0, 1.291815, 0, 0 };
   Double_t h_data_fehx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fehy3004[80] = { 1.147874, 1.147874, 2.299527, 2.299527, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 1.147874, 2.299527, 1.147874, 2.299527, 1.147874, 1.147874, 2.918186,
   2.63786, 2.299527, 1.147874, 2.63786, 1.147874, 3.583642, 3.382473, 3.770281, 3.162753, 2.918186, 3.382473, 3.583642, 2.63786, 4.416521, 3.945142, 4.697573,
   5.321007, 5.546519, 5.761366, 7.455185, 8.118225, 11.64675, 60.12592, 70.00719, 32.48828, 23.41833, 17.41892, 13.66245, 9.524592, 9.465736, 7.055545, 6.44702,
   5.546519, 4.26695, 4.110204, 4.110204, 3.382473, 2.918186, 3.162753, 2.299527, 3.583642, 1.147874, 2.63786, 2.299527, 1.147874, 1.147874, 2.63786, 2.299527,
   2.63786, 2.299527, 1.147874, 2.63786, 1.147874, 1.147874, 1.147874, 2.299527, 1.147874, 1.147874, 1.147874, 1.147874, 2.63786, 1.147874, 1.147874 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_fx3004,h_data_fy3004,h_data_felx3004,h_data_fehx3004,h_data_fely3004,h_data_fehy3004);
   grae->SetName("h_data");
   grae->SetTitle("Histogram of data_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data3004 = new TH1F("Graph_h_data3004","Histogram of data_plot__tau",100,-12,12);
   Graph_h_data3004->SetMinimum(5.391108);
   Graph_h_data3004->SetMaximum(5391.108);
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
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375, 0.375,
   0.4375, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 1, 1.125, 1.25, 1.5, 1.75, 2, 2.25, 2.5,
   2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5,
   6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model2_fy11[112] = { 0.01598597, 0.01956703, 0.02395029, 0.02931546, 0.03588249, 0.04392063, 0.0537594, 0.06580219, 0.08054272, 0.09858531, 0.1206697, 0.1477012, 0.1807881, 0.221287, 0.2708581, 0.3315337, 0.4058015,
   0.4967061, 0.6079746, 0.7441686, 0.9108718, 1.114919, 1.364675, 1.670379, 2.044565, 2.502574, 3.063182, 3.749373, 4.58928, 5.617337, 6.875692, 8.415934, 10.30121,
   12.60881, 15.43337, 18.89119, 23.13406, 28.54017, 39.48281, 46.71641, 60.1521, 71.11139, 86.65914, 108.8916, 140.9097, 187.4265, 255.8699, 357.9471, 510.765,
   739.7925, 1094.015, 1598.809, 2014.522, 1969.846, 1609.47, 1307.603, 1127.616, 1005.242, 910.106, 830.8942, 761.4592, 698.8022, 641.6384, 589.3283, 541.4273,
   457.3714, 386.8357, 327.6211, 277.8873, 236.0945, 200.9539, 171.3871, 146.4915, 107.8144, 80.23839, 60.47999, 35.89303, 22.70363, 15.30623, 10.91707, 8.141429,
   6.270576, 4.936449, 3.941659, 3.175541, 2.57246, 2.090932, 1.703005, 1.388756, 1.133333, 0.9252985, 0.7556527, 0.6172089, 0.5041779, 0.4118703, 0.3364745, 0.2748861,
   0.2245736, 0.1834712, 0.1498922, 0.1224592, 0.1000471, 0.08173687, 0.06677774, 0.05455639, 0.04457174, 0.03641443, 0.02975004, 0.02430534, 0.01985709, 0.01622295, 0.01622295 };
   TGraph *graph = new TGraph(112,model2_fx11,model2_fy11);
   graph->SetName("model2");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model211 = new TH1F("Graph_model211","Projection of Fit_Total",112,-12,12);
   Graph_model211->SetMinimum(0.01438737);
   Graph_model211->SetMaximum(2215.973);
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
   Double_t tausigModel_fy12[98] = { 0.2015426, 0.2099619, 0.2189663, 0.2286134, 0.2389684, 0.2501052, 0.262108, 0.2750726, 0.289109, 0.3043438, 0.3209231, 0.3390168, 0.3588231, 0.3805745, 0.4045455, 0.431062, 0.4605135,
   0.4933691, 0.5301981, 0.5716969, 0.6187262, 0.6723596, 0.7339521, 0.8052351, 0.8884515, 0.9865521, 1.103488, 1.244654, 1.417589, 1.633105, 1.907202, 2.264438, 2.744229,
   3.413427, 4.393643, 5.927457, 8.564443, 13.8085, 27.30394, 44.67295, 94.05556, 131.7719, 221.5357, 448.039, 968.0019, 1998.899, 4061.823, 8207.184, 10832.23,
   8519.563, 4318.245, 2103.741, 1023.853, 474.1334, 232.1479, 135.976, 96.00671, 45.15375, 27.51994, 13.87992, 8.597346, 5.94557, 4.404789, 3.420829, 2.749425,
   2.268243, 1.910083, 1.635346, 1.41937, 1.246097, 1.104675, 0.9875419, 0.8892868, 0.8059474, 0.734565, 0.6728913, 0.6191909, 0.5721057, 0.5305599, 0.4936911, 0.4608014,
   0.4313207, 0.4047789, 0.3807859, 0.3590153, 0.3391921, 0.3210835, 0.304491, 0.2892444, 0.2751975, 0.2622235, 0.2502123, 0.2390678, 0.2287059, 0.2190526, 0.2100426, 0.201618,
   0.201618 };
   graph = new TGraph(98,tausigModel_fx12,tausigModel_fy12);
   graph->SetName("tausigModel");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_tausigModel12 = new TH1F("Graph_tausigModel12","Projection of Fit_Total",100,-12,12);
   Graph_tausigModel12->SetMinimum(0.1813883);
   Graph_tausigModel12->SetMaximum(11915.44);
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8.337082e-250, 2.418382e-197,
   4.898031e-151, 6.959016e-111, 6.986281e-77, 5.015488e-49, 2.631962e-27, 1.058308e-11, 0.03723866, 1.071718, 4.2216, 13.75717, 39.01979, 104.2049, 255.5645, 500.756, 732.3515, 845.1618,
   855.8946, 821.6618, 772.5416, 719.9762, 668.6927, 620.3913, 575.4231, 533.6857, 494.9715, 459.0651, 425.7635, 394.8776, 366.2322, 339.6648, 315.0247, 292.1721,
   270.9772, 251.3199, 233.0885, 216.1797, 185.953, 159.9526, 137.5876, 118.3498, 101.8018, 87.56767, 75.32375, 64.7918, 55.73246, 41.23675, 30.5113, 22.57548,
   16.70372, 9.144622, 5.006317, 2.740759, 1.500456, 0.8214401, 0.4497057, 0.246196, 0.1347825, 0.07378805, 0.04039602, 0.02211521, 0.0121072, 0.006628209, 0.00362868, 0.001986558,
   0.001087561, 0.0005953965, 0.0003259559, 0.0001784479, 9.76931e-05, 5.348308e-05, 2.927986e-05, 1.602956e-05, 8.775543e-06, 4.804261e-06, 2.630141e-06, 1.439898e-06, 7.882866e-07, 4.315555e-07, 2.362595e-07, 1.293426e-07,
   7.080995e-08, 3.876563e-08, 3.876563e-08 };
   graph = new TGraph(116,exp_np_fx13,exp_np_fy13);
   graph->SetName("exp_np");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_np13 = new TH1F("Graph_exp_np13","Projection of Fit_Total",116,-12,12);
   Graph_exp_np13->SetMinimum(0.941484);
   Graph_exp_np13->SetMaximum(941.484);
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
   Double_t Fit_Total_fy14[102] = { 0.2175285, 0.229529, 0.2429166, 0.2579288, 0.2748509, 0.2940258, 0.3158674, 0.3408748, 0.3696517, 0.4029291, 0.4415928, 0.486718, 0.5396112, 0.6018615, 0.6754036, 0.7625957, 0.8663149,
   0.9900752, 1.138173, 1.315866, 1.529598, 1.787278, 2.098627, 2.475614, 2.933017, 3.489126, 4.166669, 4.994027, 6.006869, 7.250443, 8.782894, 10.68037, 13.04544,
   16.02224, 19.82702, 24.81864, 31.6985, 42.34867, 66.78675, 104.8251, 148.0568, 235.0025, 319.4202, 478.4773, 810.2077, 1492.524, 2777.711, 5260.043, 10061.56,
   13347.51, 11221.76, 6772.877, 4267.239, 2973.131, 2251.917, 1862.23, 1635.563, 1477.857, 1237.536, 1045.646, 754.0205, 548.0593, 400.7868, 294.811, 218.2136,
   122.158, 70.80912, 42.82818, 27.20028, 18.19163, 12.79227, 9.406378, 7.177259, 5.637461, 4.526411, 3.694785, 3.054007, 2.549348, 2.145436, 1.818331, 1.551118,
   1.331387, 1.149755, 0.9989566, 0.8732671, 0.7681211, 0.6798434, 0.6054572, 0.54254, 0.4891136, 0.4435587, 0.4045468, 0.3709861, 0.3419779, 0.3167813, 0.2947848, 0.2754827,
   0.2584562, 0.2433581, 0.2298997, 0.217841, 0.217841 };
   graph = new TGraph(102,Fit_Total_fx14,Fit_Total_fy14);
   graph->SetName("Fit_Total");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Fit_Total14 = new TH1F("Graph_Fit_Total14","Projection of Fit_Total",102,-12,12);
   Graph_Fit_Total14->SetMinimum(0.1957757);
   Graph_Fit_Total14->SetMaximum(14682.24);
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
   
   TH1D *frame_tau_f5b9520__8 = new TH1D("frame_tau_f5b9520__8"," ",80,-10,10);
   frame_tau_f5b9520__8->SetBinContent(1,14014.89);
   frame_tau_f5b9520__8->SetMinimum(5);
   frame_tau_f5b9520__8->SetMaximum(500000);
   frame_tau_f5b9520__8->SetEntries(3);
   frame_tau_f5b9520__8->SetDirectory(nullptr);
   frame_tau_f5b9520__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_f5b9520__8->SetLineColor(ci);
   frame_tau_f5b9520__8->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_f5b9520__8->GetXaxis()->SetRange(25,56);
   frame_tau_f5b9520__8->GetXaxis()->SetLabelFont(42);
   frame_tau_f5b9520__8->GetXaxis()->SetLabelSize(0.04);
   frame_tau_f5b9520__8->GetXaxis()->SetTitleSize(0.045);
   frame_tau_f5b9520__8->GetXaxis()->SetTitleOffset(1);
   frame_tau_f5b9520__8->GetXaxis()->SetTitleFont(42);
   frame_tau_f5b9520__8->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_f5b9520__8->GetYaxis()->SetLabelFont(42);
   frame_tau_f5b9520__8->GetYaxis()->SetLabelSize(0.04);
   frame_tau_f5b9520__8->GetYaxis()->SetTitleSize(0.045);
   frame_tau_f5b9520__8->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_f5b9520__8->GetYaxis()->SetTitleFont(42);
   frame_tau_f5b9520__8->GetZaxis()->SetLabelFont(42);
   frame_tau_f5b9520__8->GetZaxis()->SetTitleOffset(1);
   frame_tau_f5b9520__8->GetZaxis()->SetTitleFont(42);
   frame_tau_f5b9520__8->Draw("AXISSAME");
   TLatex *   tex = new TLatex(0.13,0.85,"ALICE preliminary, pp, #sqrt{s} = 13.6 TeV");
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
      tex = new TLatex(0.15,0.54,"N_{J/#psi} = 7580#pm98");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.49,"N_{bkg} = 3459#pm74");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.44,"f_{B} = 0.246#pm0.008");
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
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.15,0.39,"#chi^{2}/ndof = 44 / 41 ");
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
}
