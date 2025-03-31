#ifdef __CLING__
#pragma cling optimize(0)
#endif
void c2DFitbis_pT3_4()
{
//=========Macro generated from canvas: c2DFitbis/c2DFitbis
//=========  (Mon Mar 31 20:43:20 2025) by ROOT version 6.32.06
   TCanvas *c2DFitbis = new TCanvas("c2DFitbis", "c2DFitbis",200,1103,1000,800);
   c2DFitbis->Range(0,0,1,1);
   c2DFitbis->SetFillColor(0);
   c2DFitbis->SetBorderMode(0);
   c2DFitbis->SetBorderSize(2);
   c2DFitbis->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_2DFitbis
   TPad *pad1_2DFitbis__3 = new TPad("pad1_2DFitbis", "",0,0,1,1);
   pad1_2DFitbis__3->Draw();
   pad1_2DFitbis__3->cd();
   pad1_2DFitbis__3->Range(-6.25,0.07396996,6.25,6.32397);
   pad1_2DFitbis__3->SetFillColor(0);
   pad1_2DFitbis__3->SetBorderMode(0);
   pad1_2DFitbis__3->SetBorderSize(2);
   pad1_2DFitbis__3->SetLogy();
   pad1_2DFitbis__3->SetFrameBorderMode(0);
   pad1_2DFitbis__3->SetFrameBorderMode(0);
   
   TH1D *frame_tau_109dca50__7 = new TH1D("frame_tau_109dca50__7"," ",80,-10,10);
   frame_tau_109dca50__7->SetBinContent(1,51335.63);
   frame_tau_109dca50__7->SetMinimum(5);
   frame_tau_109dca50__7->SetMaximum(500000);
   frame_tau_109dca50__7->SetEntries(3);
   frame_tau_109dca50__7->SetDirectory(nullptr);
   frame_tau_109dca50__7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_109dca50__7->SetLineColor(ci);
   frame_tau_109dca50__7->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_109dca50__7->GetXaxis()->SetRange(21,60);
   frame_tau_109dca50__7->GetXaxis()->SetLabelFont(42);
   frame_tau_109dca50__7->GetXaxis()->SetLabelSize(0.04);
   frame_tau_109dca50__7->GetXaxis()->SetTitleSize(0.045);
   frame_tau_109dca50__7->GetXaxis()->SetTitleOffset(1);
   frame_tau_109dca50__7->GetXaxis()->SetTitleFont(42);
   frame_tau_109dca50__7->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_109dca50__7->GetYaxis()->SetLabelFont(42);
   frame_tau_109dca50__7->GetYaxis()->SetLabelSize(0.04);
   frame_tau_109dca50__7->GetYaxis()->SetTitleSize(0.045);
   frame_tau_109dca50__7->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_109dca50__7->GetYaxis()->SetTitleFont(42);
   frame_tau_109dca50__7->GetZaxis()->SetLabelFont(42);
   frame_tau_109dca50__7->GetZaxis()->SetTitleOffset(1);
   frame_tau_109dca50__7->GetZaxis()->SetTitleFont(42);
   frame_tau_109dca50__7->Draw("FUNC");
   
   Double_t h_data_fx3004[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_fy3004[80] = { 6, 5, 7, 5, 5, 9, 17, 10, 8, 12, 13, 16, 16, 10, 23, 11, 15,
   26, 22, 27, 21, 32, 35, 34, 44, 35, 65, 53, 54, 62, 92, 118, 108,
   149, 181, 236, 315, 572, 1753, 20439, 26469, 5001, 2262, 1255, 734, 504, 306, 255, 154,
   130, 108, 83, 75, 61, 49, 42, 29, 38, 33, 31, 25, 30, 27, 18, 14,
   12, 16, 18, 7, 10, 10, 10, 6, 7, 8, 8, 8, 5, 6, 2 };
   Double_t h_data_felx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fely3004[80] = { 2.379931, 2.159691, 2.58147, 2.159691, 2.159691, 2.943461, 4.082184, 3.108694, 2.768386, 3.415266, 3.558662, 3.957801, 3.957801, 3.108694, 4.760717, 3.265579, 3.82938,
   5.066015, 4.654502, 5.163771, 4.545807, 5.627135, 5.887675, 5.802128, 6.60794, 5.887675, 8.041463, 7.257065, 7.32564, 7.852713, 9.574201, 10.37428, 9.904326,
   11.71679, 12.96291, 14.87043, 17.25528, 23.42175, 41.37183, 142.4659, 162.1937, 70.21952, 47.06312, 34.92951, 26.59705, 21.95551, 17, 15.47655, 11.91974,
   10.91271, 9.904326, 9.092044, 8.640903, 7.788779, 6.976026, 6.454831, 5.353932, 6.137163, 5.715302, 5.537565, 4.966335, 5.446522, 5.163771, 4.202887, 3.6965,
   3.415266, 3.957801, 4.202887, 2.58147, 3.108694, 3.108694, 3.108694, 2.379931, 2.58147, 2.768386, 2.768386, 2.768386, 2.159691, 2.379931, 1.291815 };
   Double_t h_data_fehx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fehy3004[80] = { 3.583642, 3.382473, 3.770281, 3.382473, 3.382473, 4.110204, 5.203719, 4.26695, 3.945142, 4.559819, 4.697573, 5.083066, 5.083066, 4.26695, 5.865235, 4.416521, 4.958738,
   6.164324, 5.761366, 6.260244, 5.655182, 6.715753, 6.97241, 6.888101, 7.68351, 6.97241, 9.103628, 8.325916, 8.39385, 8.916365, 10.62644, 11.37428, 10.90433,
   12.71679, 13.96291, 15.87043, 18.25528, 24.42175, 42.37183, 143.4659, 163.1937, 71.21952, 48.06312, 35.92951, 27.59705, 22.95551, 18, 16.47655, 12.91974,
   11.91271, 10.90433, 10.14705, 9.698771, 8.852952, 8.047634, 7.53218, 6.44702, 7.218484, 6.802567, 6.627601, 6.066589, 6.538046, 6.260244, 5.321007, 4.830381,
   4.559819, 5.083066, 5.321007, 3.770281, 4.26695, 4.26695, 4.26695, 3.583642, 3.770281, 3.945142, 3.945142, 3.945142, 3.382473, 3.583642, 2.63786 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_fx3004,h_data_fy3004,h_data_felx3004,h_data_fehx3004,h_data_fely3004,h_data_fehy3004);
   grae->SetName("h_data");
   grae->SetTitle("Histogram of data_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data3004 = new TH1F("Graph_h_data3004","Histogram of data_plot__tau",100,-12,12);
   Graph_h_data3004->SetMinimum(0.6373669);
   Graph_h_data3004->SetMaximum(29295.34);
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
   
   Double_t model2_fx11[117] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875,
   -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125,
   0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 1, 1.125, 1.25,
   1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25,
   5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25,
   9.5, 9.75, 10, 10 };
   Double_t model2_fy11[117] = { 1.008132, 1.159484, 1.333559, 1.533767, 1.764033, 2.028869, 2.333465, 2.68379, 3.08671, 3.550121, 4.083104, 4.696104, 5.401135, 6.212012, 7.144627, 8.217257, 9.450921,
   10.8698, 12.50169, 14.37858, 16.53725, 19.02, 21.87549, 25.15968, 28.93693, 33.28125, 38.2778, 44.02448, 50.63392, 58.23566, 66.97876, 77.0351, 88.605,
   101.9348, 117.4038, 136.0282, 162.4742, 223.2094, 301.5159, 370.884, 475.9883, 637.0279, 747.884, 886.0199, 1058.585, 1274.768, 1546.319, 1887.957, 2317.33,
   2854.401, 3521.395, 4347.389, 5380.269, 6685.286, 8268.842, 9909.132, 11080.76, 11238.63, 10302.1, 8759.68, 7233.982, 6045.867, 5191.157, 4552.58, 4041.49,
   3615.263, 3253.389, 2942.17, 2670.746, 2430.806, 2216.412, 2023.457, 1691.07, 1417.768, 1192.576, 1006.841, 853.5021, 726.7715, 534.9903, 402.8408, 311.0257,
   200.6423, 142.8563, 109.9036, 89.08064, 74.52017, 63.46508, 54.57962, 47.18297, 40.90077, 35.50605, 30.84605, 26.80816, 23.30361, 20.25936, 17.61377, 15.3141,
   13.31487, 11.57673, 10.06553, 8.751621, 7.60923, 6.615964, 5.752356, 5.001478, 4.348616, 3.780974, 3.28743, 2.858309, 2.485203, 2.1608, 1.878743, 1.633503,
   1.420276, 1.234882, 1.073688, 1.073688 };
   TGraph *graph = new TGraph(117,model2_fx11,model2_fy11);
   graph->SetName("model2");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model211 = new TH1F("Graph_model211","Projection of Fit_Total",117,-12,12);
   Graph_model211->SetMinimum(0.9073192);
   Graph_model211->SetMaximum(12362.4);
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
   
   Double_t tausigModel_fx12[106] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375, 0.375,
   0.4375, 0.5, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4,
   4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8,
   8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t tausigModel_fy12[106] = { 3.762128, 3.899842, 4.046393, 4.202606, 4.369408, 4.547841, 4.739089, 4.944492, 5.16558, 5.404101, 5.662066, 5.941794, 6.245977, 6.577753, 6.9408, 7.339455, 7.778868,
   8.265194, 8.805843, 9.409815, 10.08813, 10.85444, 11.72579, 12.72378, 13.87609, 15.21881, 16.79968, 18.68318, 20.95829, 23.751, 27.24514, 31.71873, 37.61089,
   45.65357, 57.15342, 74.6641, 103.8441, 159.8208, 299.0662, 376.6383, 530.7185, 683.1018, 942.083, 1381.376, 2103.467, 3233.759, 4909.448, 7291.395, 10731.24,
   16810.2, 25770.5, 34162.92, 37681.7, 34162.92, 25770.5, 16810.2, 10731.24, 7291.395, 4909.448, 3233.759, 2103.467, 1381.376, 942.083, 683.1018, 530.7185,
   376.6383, 299.0662, 159.8208, 103.8441, 74.6641, 57.15342, 45.65357, 37.61089, 31.71873, 27.24514, 23.751, 20.95829, 18.68318, 16.79968, 15.21881, 13.87609,
   12.72378, 11.72579, 10.85444, 10.08813, 9.409815, 8.805843, 8.265194, 7.778868, 7.339455, 6.9408, 6.577753, 6.245977, 5.941794, 5.662066, 5.404101, 5.16558,
   4.944492, 4.739089, 4.547841, 4.369408, 4.202606, 4.046393, 3.899842, 3.762128, 3.762128 };
   graph = new TGraph(106,tausigModel_fx12,tausigModel_fy12);
   graph->SetName("tausigModel");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_tausigModel12 = new TH1F("Graph_tausigModel12","Projection of Fit_Total",106,-12,12);
   Graph_tausigModel12->SetMinimum(3.385915);
   Graph_tausigModel12->SetMaximum(41449.5);
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
   
   Double_t exp_np_fx13[119] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625,
   -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875,
   0.5, 0.53125, 0.5625, 0.59375, 0.625, 0.6875, 0.75, 0.8125, 0.875, 0.9375, 1, 1.0625, 1.125, 1.1875, 1.25, 1.375,
   1.5, 1.625, 1.75, 1.875, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75,
   5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75,
   9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t exp_np_fy13[119] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 1.191406e-299, 2.316182e-265, 3.789948e-233, 5.222388e-203, 6.063976e-175, 5.938012e-149, 4.908518e-125, 3.429545e-103, 2.028711e-83, 1.018286e-65,
   4.350392e-50, 1.589032e-36, 4.995989e-25, 1.366967e-15, 3.318842e-08, 0.007435847, 0.6228783, 3.72943, 8.224041, 16.95487, 32.82446, 60.31099, 107.2637, 188.9606, 331.87, 566.9168,
   903.4724, 1300.246, 1671.514, 1937.274, 2069.908, 2093.384, 2049.394, 1970.713, 1875.917, 1774.544, 1571.255, 1474.479, 1382.554, 1295.841, 1214.341, 1137.877,
   1066.195, 999.0173, 936.0687, 877.0854, 821.8185, 721.5126, 633.4494, 556.1345, 488.2563, 428.6628, 376.3429, 330.4089, 290.0813, 254.6758, 223.5917, 172.3422,
   132.8396, 102.3914, 78.92225, 60.83246, 46.88904, 27.85757, 16.55065, 9.833022, 5.841964, 3.470809, 2.062066, 1.225108, 0.7278576, 0.4324325, 0.2569154, 0.1526378,
   0.09068469, 0.05387731, 0.03200942, 0.01901733, 0.01129852, 0.006712641, 0.003988093, 0.002369394, 0.001407697, 0.0008363364, 0.0004968815, 0.0002952057, 0.0001753867, 0.0001042002, 6.190709e-05, 3.678005e-05,
   2.185165e-05, 1.298243e-05, 7.713082e-06, 4.582472e-06, 2.722524e-06, 2.722524e-06 };
   graph = new TGraph(119,exp_np_fx13,exp_np_fy13);
   graph->SetName("exp_np");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_np13 = new TH1F("Graph_exp_np13","Projection of Fit_Total",119,-12,12);
   Graph_exp_np13->SetMinimum(2.302722);
   Graph_exp_np13->SetMaximum(2302.722);
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
   
   Double_t Fit_Total_fx14[109] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625,
   -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375,
   0.375, 0.4375, 0.5, 0.625, 0.75, 0.875, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25,
   3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25,
   7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t Fit_Total_fy14[109] = { 4.77026, 5.059326, 5.379952, 5.736373, 6.133441, 6.57671, 7.072554, 7.628283, 8.25229, 8.954222, 9.745169, 10.6379, 11.64711, 12.78977, 14.08543, 15.55671, 17.22979,
   19.13499, 21.30753, 23.78839, 26.62538, 29.87444, 33.60128, 37.88346, 42.81302, 48.50006, 55.07748, 62.70766, 71.59221, 81.98666, 94.2239, 108.7538, 126.2159,
   147.5883, 174.5573, 210.6923, 266.3183, 383.0302, 512.4926, 775.0619, 1013.745, 1417.361, 1743.266, 2220.58, 2935.919, 4008.379, 5583.913, 7824.161, 10920.05,
   15267.59, 22522.34, 33022.7, 43335.23, 48891.08, 46915.19, 38946.41, 29182.21, 21584.3, 16574.77, 12926.03, 10300.83, 8430.591, 7094.778, 6128.601, 5410.97,
   4855.443, 4021.786, 3388.718, 2450.563, 1800.111, 1341.762, 1015.177, 609.2815, 390.6353, 267.4321, 194.4035, 148.6569, 118.316, 97.0491, 81.37987, 69.33696,
   59.76252, 51.94997, 45.45, 39.96437, 35.28632, 31.26644, 27.79259, 24.77779, 22.15272, 19.86094, 17.8557, 16.09779, 14.55402, 13.19609, 11.99974, 10.94411,
   10.01118, 9.185371, 8.453185, 7.802905, 7.224354, 6.708678, 6.248172, 5.836123, 5.466677, 5.134728, 4.835819, 4.835819 };
   graph = new TGraph(109,Fit_Total_fx14,Fit_Total_fy14);
   graph->SetName("Fit_Total");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Fit_Total14 = new TH1F("Graph_Fit_Total14","Projection of Fit_Total",109,-12,12);
   Graph_Fit_Total14->SetMinimum(4.293234);
   Graph_Fit_Total14->SetMaximum(53779.71);
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
   
   TH1D *frame_tau_109dca50__8 = new TH1D("frame_tau_109dca50__8"," ",80,-10,10);
   frame_tau_109dca50__8->SetBinContent(1,51335.63);
   frame_tau_109dca50__8->SetMinimum(5);
   frame_tau_109dca50__8->SetMaximum(500000);
   frame_tau_109dca50__8->SetEntries(3);
   frame_tau_109dca50__8->SetDirectory(nullptr);
   frame_tau_109dca50__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_109dca50__8->SetLineColor(ci);
   frame_tau_109dca50__8->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_109dca50__8->GetXaxis()->SetRange(21,60);
   frame_tau_109dca50__8->GetXaxis()->SetLabelFont(42);
   frame_tau_109dca50__8->GetXaxis()->SetLabelSize(0.04);
   frame_tau_109dca50__8->GetXaxis()->SetTitleSize(0.045);
   frame_tau_109dca50__8->GetXaxis()->SetTitleOffset(1);
   frame_tau_109dca50__8->GetXaxis()->SetTitleFont(42);
   frame_tau_109dca50__8->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_109dca50__8->GetYaxis()->SetLabelFont(42);
   frame_tau_109dca50__8->GetYaxis()->SetLabelSize(0.04);
   frame_tau_109dca50__8->GetYaxis()->SetTitleSize(0.045);
   frame_tau_109dca50__8->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_109dca50__8->GetYaxis()->SetTitleFont(42);
   frame_tau_109dca50__8->GetZaxis()->SetLabelFont(42);
   frame_tau_109dca50__8->GetZaxis()->SetTitleOffset(1);
   frame_tau_109dca50__8->GetZaxis()->SetTitleFont(42);
   frame_tau_109dca50__8->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.74,"3 GeV/c < #it{p}_{T}^{#mu#mu} < 4 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.54,"N_{J/#psi} = 39747#pm241");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.49,"N_{bkg} = 22780#pm203");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.44,"f_{B} = 0.144#pm0.003");
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
      tex = new TLatex(0.15,0.39,"#chi^{2}/ndof = 164 / 78 ");
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
