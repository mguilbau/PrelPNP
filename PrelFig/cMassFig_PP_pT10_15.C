#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cMassFig_PP_pT10_15()
{
//=========Macro generated from canvas: cMassFig_PP/cMassFig
//=========  (Mon Mar 31 13:04:17 2025) by ROOT version 6.32.06
   TCanvas *cMassFig_PP = new TCanvas("cMassFig_PP", "cMassFig",200,1103,1000,800);
   cMassFig_PP->Range(0,0,1,1);
   cMassFig_PP->SetFillColor(0);
   cMassFig_PP->SetBorderMode(0);
   cMassFig_PP->SetBorderSize(2);
   cMassFig_PP->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_PP
   TPad *pad1_PP__0 = new TPad("pad1_PP", "",0,0.24,1,1);
   pad1_PP__0->Draw();
   pad1_PP__0->cd();
   pad1_PP__0->Range(2.375,5,3.625,1666.111);
   pad1_PP__0->SetFillColor(0);
   pad1_PP__0->SetBorderMode(0);
   pad1_PP__0->SetBorderSize(2);
   pad1_PP__0->SetBottomMargin(0);
   pad1_PP__0->SetFrameBorderMode(0);
   pad1_PP__0->SetFrameBorderMode(0);
   
   TH1D *frame_mass_ceae1e0__1 = new TH1D("frame_mass_ceae1e0__1"," ",40,2.5,3.5);
   frame_mass_ceae1e0__1->SetBinContent(1,902.2798);
   frame_mass_ceae1e0__1->SetMinimum(5);
   frame_mass_ceae1e0__1->SetMaximum(1500);
   frame_mass_ceae1e0__1->SetEntries(1);
   frame_mass_ceae1e0__1->SetDirectory(nullptr);
   frame_mass_ceae1e0__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_mass_ceae1e0__1->SetLineColor(ci);
   frame_mass_ceae1e0__1->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_ceae1e0__1->GetXaxis()->SetLabelFont(42);
   frame_mass_ceae1e0__1->GetXaxis()->SetLabelSize(0.04);
   frame_mass_ceae1e0__1->GetXaxis()->SetTitleSize(0.045);
   frame_mass_ceae1e0__1->GetXaxis()->SetTitleOffset(1);
   frame_mass_ceae1e0__1->GetXaxis()->SetTitleFont(42);
   frame_mass_ceae1e0__1->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_ceae1e0__1->GetYaxis()->SetLabelFont(42);
   frame_mass_ceae1e0__1->GetYaxis()->SetLabelSize(0.04);
   frame_mass_ceae1e0__1->GetYaxis()->SetTitleSize(0.045);
   frame_mass_ceae1e0__1->GetYaxis()->SetTitleOffset(0.99);
   frame_mass_ceae1e0__1->GetYaxis()->SetTitleFont(42);
   frame_mass_ceae1e0__1->GetZaxis()->SetLabelFont(42);
   frame_mass_ceae1e0__1->GetZaxis()->SetTitleOffset(1);
   frame_mass_ceae1e0__1->GetZaxis()->SetTitleFont(42);
   frame_mass_ceae1e0__1->Draw("FUNC");
   
   Double_t h_dataWithSWeights_fx3001[40] = { 2.5125, 2.5375, 2.5625, 2.5875, 2.6125, 2.6375, 2.6625, 2.6875, 2.7125, 2.7375, 2.7625, 2.7875, 2.8125, 2.8375, 2.8625, 2.8875, 2.9125,
   2.9375, 2.9625, 2.9875, 3.0125, 3.0375, 3.0625, 3.0875, 3.1125, 3.1375, 3.1625, 3.1875, 3.2125, 3.2375, 3.2625, 3.2875, 3.3125,
   3.3375, 3.3625, 3.3875, 3.4125, 3.4375, 3.4625, 3.4875 };
   Double_t h_dataWithSWeights_fy3001[40] = { 93, 103, 93, 104, 114, 112, 101, 85, 106, 113, 105, 121, 98, 123, 121, 169, 157,
   209, 234, 302, 395, 525, 636, 821, 830, 720, 549, 386, 234, 152, 100, 109, 98,
   70, 61, 54, 60, 31, 46, 39 };
   Double_t h_dataWithSWeights_felx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fely3001[40] = { 9.626284, 9.661201, 9.626284, 9.710289, 10.18878, 10.09481, 9.562306, 9.201374, 9.807764, 10.1419, 9.759142, 10.51136, 9.882579, 10.6018, 10.51136, 12.50961, 12.03994,
   13.96548, 14.80523, 16.88534, 19.3809, 22.41833, 24.724, 28.15746, 28.31406, 26.33747, 22.93608, 19.15324, 14.80523, 11.83896, 9.983255, 9.952272, 9.882579,
   8.346566, 7.788779, 7.32564, 7.724317, 5.537565, 6.757581, 6.218102 };
   Double_t h_dataWithSWeights_fehx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fehy3001[40] = { 10.67824, 10.6612, 10.67824, 10.71029, 11.18878, 11.09481, 10.56231, 10.25573, 10.80776, 11.1419, 10.75914, 11.51136, 10.93319, 11.6018, 11.51136, 13.50961, 13.03994,
   14.96548, 15.80523, 17.88534, 20.3809, 23.41833, 25.724, 29.15746, 29.31406, 27.33747, 23.93608, 20.15324, 15.80523, 12.83896, 11.03336, 10.95227, 10.93319,
   9.406468, 8.852952, 8.39385, 8.789023, 6.627601, 7.831489, 7.298372 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,h_dataWithSWeights_fx3001,h_dataWithSWeights_fy3001,h_dataWithSWeights_felx3001,h_dataWithSWeights_fehx3001,h_dataWithSWeights_fely3001,h_dataWithSWeights_fehy3001);
   grae->SetName("h_dataWithSWeights");
   grae->SetTitle("Histogram of dataWithSWeights_plot__mass");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataWithSWeights3001 = new TH1F("Graph_h_dataWithSWeights3001","Histogram of dataWithSWeights_plot__mass",100,2.4,3.6);
   Graph_h_dataWithSWeights3001->SetMinimum(22.91619);
   Graph_h_dataWithSWeights3001->SetMaximum(942.6992);
   Graph_h_dataWithSWeights3001->SetDirectory(nullptr);
   Graph_h_dataWithSWeights3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_dataWithSWeights3001->SetLineColor(ci);
   Graph_h_dataWithSWeights3001->GetXaxis()->SetLabelFont(42);
   Graph_h_dataWithSWeights3001->GetXaxis()->SetTitleOffset(1);
   Graph_h_dataWithSWeights3001->GetXaxis()->SetTitleFont(42);
   Graph_h_dataWithSWeights3001->GetYaxis()->SetLabelFont(42);
   Graph_h_dataWithSWeights3001->GetYaxis()->SetTitleFont(42);
   Graph_h_dataWithSWeights3001->GetZaxis()->SetLabelFont(42);
   Graph_h_dataWithSWeights3001->GetZaxis()->SetTitleOffset(1);
   Graph_h_dataWithSWeights3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_dataWithSWeights3001);
   
   grae->Draw("p");
   
   Double_t m_signal_fx1[85] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.9,
   2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.9875, 2.99375, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.03125, 3.0375, 3.04375,
   3.05, 3.05625, 3.0625, 3.06875, 3.075, 3.078125, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125, 3.10625, 3.109375,
   3.1125, 3.115625, 3.11875, 3.121875, 3.125, 3.128125, 3.13125, 3.1375, 3.14375, 3.15, 3.175, 3.18125, 3.184375, 3.1875, 3.19375, 3.2,
   3.20625, 3.2125, 3.21875, 3.225, 3.23125, 3.2375, 3.25, 3.2625, 3.275, 3.2875, 3.3, 3.325, 3.35, 3.375, 3.4, 3.425,
   3.45, 3.475, 3.5, 3.5 };
   Double_t m_signal_fy1[85] = { 3.424764, 4.040251, 4.785234, 5.691139, 6.798089, 8.157625, 9.836374, 11.92105, 14.52532, 17.79929, 21.94275, 27.22388, 34.00589, 42.7853, 54.24774, 69.35024, 89.44394,
   101.9364, 116.46, 133.3934, 153.1953, 176.4233, 203.7581, 236.0338, 254.3364, 274.2767, 296.0211, 319.7553, 345.6862, 374.0449, 405.0898, 439.1103, 476.4307,
   517.4151, 562.4727, 609.4541, 653.211, 692.4271, 709.9657, 725.9433, 740.2357, 752.7303, 763.3272, 771.9411, 778.5017, 782.9553, 785.2653, 785.4127, 783.396,
   779.2322, 772.9553, 764.617, 754.285, 742.0429, 727.9887, 712.2332, 676.1196, 634.794, 589.4544, 392.4646, 344.9027, 322.7957, 302.324, 265.7517, 234.2371,
   206.9964, 183.3801, 162.8475, 144.9469, 129.2999, 115.588, 92.93596, 75.2961, 61.44044, 50.46923, 41.71636, 28.99596, 20.57715, 14.87563, 10.93413, 8.158449,
   6.170783, 4.725604, 3.660167, 3.660167 };
   TGraph *graph = new TGraph(85,m_signal_fx1,m_signal_fy1);
   graph->SetName("m_signal");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_signal1 = new TH1F("Graph_m_signal1","Projection of massModel",100,2.4,3.6);
   Graph_m_signal1->SetMinimum(3.082287);
   Graph_m_signal1->SetMaximum(863.6114);
   Graph_m_signal1->SetDirectory(nullptr);
   Graph_m_signal1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_m_signal1->SetLineColor(ci);
   Graph_m_signal1->GetXaxis()->SetLabelFont(42);
   Graph_m_signal1->GetXaxis()->SetTitleOffset(1);
   Graph_m_signal1->GetXaxis()->SetTitleFont(42);
   Graph_m_signal1->GetYaxis()->SetLabelFont(42);
   Graph_m_signal1->GetYaxis()->SetTitleFont(42);
   Graph_m_signal1->GetZaxis()->SetLabelFont(42);
   Graph_m_signal1->GetZaxis()->SetTitleOffset(1);
   Graph_m_signal1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_m_signal1);
   
   graph->Draw("l");
   
   Double_t m_bkg_fx2[42] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.9,
   2.925, 2.95, 2.975, 3, 3.025, 3.05, 3.075, 3.1, 3.125, 3.15, 3.175, 3.2, 3.225, 3.25, 3.275, 3.3,
   3.325, 3.35, 3.375, 3.4, 3.425, 3.45, 3.475, 3.5, 3.5 };
   Double_t m_bkg_fy2[42] = { 100.3557, 98.11777, 95.92973, 93.79049, 91.69895, 89.65406, 87.65476, 85.70005, 83.78894, 81.92043, 80.0936, 78.30751, 76.56124, 74.85392, 73.18467, 71.55264, 69.95701,
   68.39697, 66.87171, 65.38046, 63.92247, 62.49699, 61.10331, 59.7407, 58.40847, 57.10596, 55.83249, 54.58742, 53.37012, 52.17996, 51.01634, 49.87867, 48.76637,
   47.67888, 46.61563, 45.5761, 44.55975, 43.56606, 42.59454, 41.64467, 40.71599, 40.71599 };
   graph = new TGraph(42,m_bkg_fx2,m_bkg_fy2);
   graph->SetName("m_bkg");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_bkg2 = new TH1F("Graph_m_bkg2","Projection of massModel",100,2.4,3.6);
   Graph_m_bkg2->SetMinimum(34.75202);
   Graph_m_bkg2->SetMaximum(106.3197);
   Graph_m_bkg2->SetDirectory(nullptr);
   Graph_m_bkg2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_m_bkg2->SetLineColor(ci);
   Graph_m_bkg2->GetXaxis()->SetLabelFont(42);
   Graph_m_bkg2->GetXaxis()->SetTitleOffset(1);
   Graph_m_bkg2->GetXaxis()->SetTitleFont(42);
   Graph_m_bkg2->GetYaxis()->SetLabelFont(42);
   Graph_m_bkg2->GetYaxis()->SetTitleFont(42);
   Graph_m_bkg2->GetZaxis()->SetLabelFont(42);
   Graph_m_bkg2->GetZaxis()->SetTitleOffset(1);
   Graph_m_bkg2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_m_bkg2);
   
   graph->Draw("l");
   
   Double_t massModel_fx3[84] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.9,
   2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.9875, 2.99375, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.03125, 3.0375, 3.04375,
   3.05, 3.05625, 3.0625, 3.06875, 3.075, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125, 3.10625, 3.109375, 3.1125,
   3.115625, 3.11875, 3.121875, 3.125, 3.128125, 3.13125, 3.1375, 3.14375, 3.15, 3.175, 3.18125, 3.184375, 3.1875, 3.19375, 3.2, 3.20625,
   3.2125, 3.21875, 3.225, 3.23125, 3.2375, 3.25, 3.2625, 3.275, 3.2875, 3.3, 3.325, 3.35, 3.375, 3.4, 3.425, 3.45,
   3.475, 3.5, 3.5 };
   Double_t massModel_fy3[84] = { 103.7805, 102.158, 100.715, 99.48163, 98.49704, 97.81168, 97.49114, 97.62111, 98.31426, 99.71972, 102.0363, 105.5314, 110.5671, 117.6392, 127.4324, 140.9029, 159.401,
   171.109, 184.857, 201.0235, 220.067, 242.5452, 269.1386, 300.6811, 318.6203, 338.1991, 359.5842, 382.9611, 408.5366, 436.5419, 467.2355, 500.9065, 537.8795,
   578.5184, 623.2325, 669.8723, 713.2895, 752.1678, 785.3481, 799.4733, 811.8011, 822.2318, 830.6798, 837.0751, 841.3638, 843.5094, 843.4927, 841.3126, 836.9857,
   830.5463, 822.0458, 811.5522, 799.1489, 784.9339, 769.0181, 732.5852, 690.9422, 645.2869, 447.0521, 399.1832, 376.9234, 356.2993, 319.4236, 287.6072, 260.0665,
   236.1518, 215.3225, 197.1269, 181.1865, 167.1828, 143.9523, 125.7404, 111.3191, 99.78862, 90.48274, 76.67484, 67.19278, 60.45173, 55.49388, 51.72451, 48.76532,
   46.37028, 44.37616, 44.37616 };
   graph = new TGraph(84,massModel_fx3,massModel_fy3);
   graph->SetName("massModel");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_massModel3 = new TH1F("Graph_massModel3","Projection of massModel",100,2.4,3.6);
   Graph_massModel3->SetMinimum(39.93854);
   Graph_massModel3->SetMaximum(923.4227);
   Graph_massModel3->SetDirectory(nullptr);
   Graph_massModel3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_massModel3->SetLineColor(ci);
   Graph_massModel3->GetXaxis()->SetLabelFont(42);
   Graph_massModel3->GetXaxis()->SetTitleOffset(1);
   Graph_massModel3->GetXaxis()->SetTitleFont(42);
   Graph_massModel3->GetYaxis()->SetLabelFont(42);
   Graph_massModel3->GetYaxis()->SetTitleFont(42);
   Graph_massModel3->GetZaxis()->SetLabelFont(42);
   Graph_massModel3->GetZaxis()->SetTitleOffset(1);
   Graph_massModel3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_massModel3);
   
   graph->Draw("l");
   
   TH1D *frame_mass_ceae1e0__2 = new TH1D("frame_mass_ceae1e0__2"," ",40,2.5,3.5);
   frame_mass_ceae1e0__2->SetBinContent(1,902.2798);
   frame_mass_ceae1e0__2->SetMinimum(5);
   frame_mass_ceae1e0__2->SetMaximum(1500);
   frame_mass_ceae1e0__2->SetEntries(1);
   frame_mass_ceae1e0__2->SetDirectory(nullptr);
   frame_mass_ceae1e0__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_ceae1e0__2->SetLineColor(ci);
   frame_mass_ceae1e0__2->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_ceae1e0__2->GetXaxis()->SetLabelFont(42);
   frame_mass_ceae1e0__2->GetXaxis()->SetLabelSize(0.04);
   frame_mass_ceae1e0__2->GetXaxis()->SetTitleSize(0.045);
   frame_mass_ceae1e0__2->GetXaxis()->SetTitleOffset(1);
   frame_mass_ceae1e0__2->GetXaxis()->SetTitleFont(42);
   frame_mass_ceae1e0__2->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_ceae1e0__2->GetYaxis()->SetLabelFont(42);
   frame_mass_ceae1e0__2->GetYaxis()->SetLabelSize(0.04);
   frame_mass_ceae1e0__2->GetYaxis()->SetTitleSize(0.045);
   frame_mass_ceae1e0__2->GetYaxis()->SetTitleOffset(0.99);
   frame_mass_ceae1e0__2->GetYaxis()->SetTitleFont(42);
   frame_mass_ceae1e0__2->GetZaxis()->SetLabelFont(42);
   frame_mass_ceae1e0__2->GetZaxis()->SetTitleOffset(1);
   frame_mass_ceae1e0__2->GetZaxis()->SetTitleFont(42);
   frame_mass_ceae1e0__2->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.74,"10 GeV/c < #it{p}_{T}^{#mu#mu} < 15 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.54,"N_{J/#psi} = 5934#pm92");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.49,"N_{bkg} = 2644#pm72");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.73,0.77,0.89,0.88,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.04);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m_signal","Signal","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m_bkg","Background","l");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("massModel","Total fit","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4769739,0.94,0.5230261,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText(" ");
   pt->Draw();
      tex = new TLatex(0.2,0.44,"#chi^{2}/ndof = 45 / 40 ");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1_PP__0->Modified();
   cMassFig_PP->cd();
  
// ------------>Primitives in pad: pad2_PP
   TPad *pad2_PP__1 = new TPad("pad2_PP", "",0,0,1,0.238);
   pad2_PP__1->Draw();
   pad2_PP__1->cd();
   pad2_PP__1->Range(2.375,-13.76667,3.625,5.9);
   pad2_PP__1->SetFillColor(0);
   pad2_PP__1->SetBorderMode(0);
   pad2_PP__1->SetBorderSize(2);
   pad2_PP__1->SetTopMargin(0);
   pad2_PP__1->SetBottomMargin(0.4);
   pad2_PP__1->SetFrameBorderMode(0);
   pad2_PP__1->SetFrameBorderMode(0);
   
   TH1D *frame_mass_f19cb00__3 = new TH1D("frame_mass_f19cb00__3"," ",100,2.5,3.5);
   frame_mass_f19cb00__3->SetBinContent(1,2.972984);
   frame_mass_f19cb00__3->SetMinimum(-5.9);
   frame_mass_f19cb00__3->SetMaximum(5.9);
   frame_mass_f19cb00__3->SetEntries(1);
   frame_mass_f19cb00__3->SetDirectory(nullptr);
   frame_mass_f19cb00__3->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_f19cb00__3->SetLineColor(ci);
   frame_mass_f19cb00__3->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_f19cb00__3->GetXaxis()->SetLabelFont(42);
   frame_mass_f19cb00__3->GetXaxis()->SetLabelSize(0.12);
   frame_mass_f19cb00__3->GetXaxis()->SetTitleSize(0.14);
   frame_mass_f19cb00__3->GetXaxis()->SetTitleOffset(0.95);
   frame_mass_f19cb00__3->GetXaxis()->SetTitleFont(42);
   frame_mass_f19cb00__3->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_mass_f19cb00__3->GetYaxis()->SetNdivisions(6);
   frame_mass_f19cb00__3->GetYaxis()->SetLabelFont(42);
   frame_mass_f19cb00__3->GetYaxis()->SetLabelSize(0.12);
   frame_mass_f19cb00__3->GetYaxis()->SetTitleSize(0.12);
   frame_mass_f19cb00__3->GetYaxis()->SetTitleOffset(0.35);
   frame_mass_f19cb00__3->GetYaxis()->SetTitleFont(42);
   frame_mass_f19cb00__3->GetZaxis()->SetLabelFont(42);
   frame_mass_f19cb00__3->GetZaxis()->SetTitleOffset(1);
   frame_mass_f19cb00__3->GetZaxis()->SetTitleFont(42);
   frame_mass_f19cb00__3->Draw("FUNC");
   
   Double_t pull_h_dataWithSWeights_massModel_fx3002[40] = { 2.5125, 2.5375, 2.5625, 2.5875, 2.6125, 2.6375, 2.6625, 2.6875, 2.7125, 2.7375, 2.7625, 2.7875, 2.8125, 2.8375, 2.8625, 2.8875, 2.9125,
   2.9375, 2.9625, 2.9875, 3.0125, 3.0375, 3.0625, 3.0875, 3.1125, 3.1375, 3.1625, 3.1875, 3.2125, 3.2375, 3.2625, 3.2875, 3.3125,
   3.3375, 3.3625, 3.3875, 3.4125, 3.4375, 3.4625, 3.4875 };
   Double_t pull_h_dataWithSWeights_massModel_fy3002[40] = { -0.9336035, 0.1618337, -0.6647439, 0.516016, 1.555205, 1.421383, 0.3601514, -1.264433, 0.711988, 1.195236, 0.1246147, 1.232071, -1.47287, 0.04378363, -1.143883, 1.506688, -1.121093,
   0.5196586, -0.6057485, 0.001775188, 0.5359351, 0.9640358, -1.241422, 0.5143714, -0.04136707, -0.3217981, 0.1234087, 1.333627, -0.2832586, -1.294429, -2.418851, 0.8696737, 1.459256,
   -0.205583, -0.3187927, -0.4732995, 0.827362, -2.903753, -0.2001915, -0.8732383 };
   Double_t pull_h_dataWithSWeights_massModel_felx3002[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0 };
   Double_t pull_h_dataWithSWeights_massModel_fely3002[40] = { 0.9014857, 1, 0.9014857, 1, 1, 1, 1, 0.8971937, 1, 1, 1, 1, 0.9039059, 1, 0.9131293, 1, 0.9233125,
   1, 0.9367298, 1, 1, 1, 0.9611258, 1, 0.9658867, 0.9634202, 1, 1, 0.9367298, 0.9221121, 0.9048245, 1, 1,
   0.8873221, 0.8797946, 0.872739, 1, 0.8355309, 0.8628731, 0.8519847 };
   Double_t pull_h_dataWithSWeights_massModel_fehx3002[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0 };
   Double_t pull_h_dataWithSWeights_massModel_fehy3002[40] = { 1, 1.103507, 1, 1.102984, 1.098147, 1.099061, 1.104577, 1, 1.10196, 1.098601, 1.102468, 1.095135, 1, 1.094324, 1, 1.079939, 1,
   1.071605, 1, 1.059223, 1.051597, 1.044606, 1, 1.035515, 1, 1, 1.043599, 1.05221, 1, 1, 1, 1.10048, 1.10631,
   1, 1, 1, 1.137838, 1, 1, 1 };
   grae = new TGraphAsymmErrors(40,pull_h_dataWithSWeights_massModel_fx3002,pull_h_dataWithSWeights_massModel_fy3002,pull_h_dataWithSWeights_massModel_felx3002,pull_h_dataWithSWeights_massModel_fehx3002,pull_h_dataWithSWeights_massModel_fely3002,pull_h_dataWithSWeights_massModel_fehy3002);
   grae->SetName("pull_h_dataWithSWeights_massModel");
   grae->SetTitle("Pull of Histogram of dataWithSWeights_plot__mass and Projection of massModel");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_pull_h_dataWithSWeights_massModel3002 = new TH1F("Graph_pull_h_dataWithSWeights_massModel3002","Pull of Histogram of dataWithSWeights_plot__mass and Projection of massModel",100,2.415,3.585);
   Graph_pull_h_dataWithSWeights_massModel3002->SetMinimum(-4.378547);
   Graph_pull_h_dataWithSWeights_massModel3002->SetMaximum(3.292615);
   Graph_pull_h_dataWithSWeights_massModel3002->SetDirectory(nullptr);
   Graph_pull_h_dataWithSWeights_massModel3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_pull_h_dataWithSWeights_massModel3002->SetLineColor(ci);
   Graph_pull_h_dataWithSWeights_massModel3002->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   Graph_pull_h_dataWithSWeights_massModel3002->GetXaxis()->SetRange(8,93);
   Graph_pull_h_dataWithSWeights_massModel3002->GetXaxis()->SetLabelFont(42);
   Graph_pull_h_dataWithSWeights_massModel3002->GetXaxis()->SetTitleOffset(1);
   Graph_pull_h_dataWithSWeights_massModel3002->GetXaxis()->SetTitleFont(42);
   Graph_pull_h_dataWithSWeights_massModel3002->GetYaxis()->SetTitle("(Data - curve) / #sigma_{data}");
   Graph_pull_h_dataWithSWeights_massModel3002->GetYaxis()->SetLabelFont(42);
   Graph_pull_h_dataWithSWeights_massModel3002->GetYaxis()->SetTitleFont(42);
   Graph_pull_h_dataWithSWeights_massModel3002->GetZaxis()->SetLabelFont(42);
   Graph_pull_h_dataWithSWeights_massModel3002->GetZaxis()->SetTitleOffset(1);
   Graph_pull_h_dataWithSWeights_massModel3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_pull_h_dataWithSWeights_massModel3002);
   
   grae->Draw("px");
   
   TH1D *frame_mass_f19cb00__4 = new TH1D("frame_mass_f19cb00__4"," ",100,2.5,3.5);
   frame_mass_f19cb00__4->SetBinContent(1,2.972984);
   frame_mass_f19cb00__4->SetMinimum(-5.9);
   frame_mass_f19cb00__4->SetMaximum(5.9);
   frame_mass_f19cb00__4->SetEntries(1);
   frame_mass_f19cb00__4->SetDirectory(nullptr);
   frame_mass_f19cb00__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_f19cb00__4->SetLineColor(ci);
   frame_mass_f19cb00__4->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_f19cb00__4->GetXaxis()->SetLabelFont(42);
   frame_mass_f19cb00__4->GetXaxis()->SetLabelSize(0.12);
   frame_mass_f19cb00__4->GetXaxis()->SetTitleSize(0.14);
   frame_mass_f19cb00__4->GetXaxis()->SetTitleOffset(0.95);
   frame_mass_f19cb00__4->GetXaxis()->SetTitleFont(42);
   frame_mass_f19cb00__4->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_mass_f19cb00__4->GetYaxis()->SetNdivisions(6);
   frame_mass_f19cb00__4->GetYaxis()->SetLabelFont(42);
   frame_mass_f19cb00__4->GetYaxis()->SetLabelSize(0.12);
   frame_mass_f19cb00__4->GetYaxis()->SetTitleSize(0.12);
   frame_mass_f19cb00__4->GetYaxis()->SetTitleOffset(0.35);
   frame_mass_f19cb00__4->GetYaxis()->SetTitleFont(42);
   frame_mass_f19cb00__4->GetZaxis()->SetLabelFont(42);
   frame_mass_f19cb00__4->GetZaxis()->SetTitleOffset(1);
   frame_mass_f19cb00__4->GetZaxis()->SetTitleFont(42);
   frame_mass_f19cb00__4->Draw("AXISSAME");
   TLine *line = new TLine(2.5,0,3.5,0);
   line->Draw();
   line = new TLine(2.5,2,3.5,2);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.5,-2,3.5,-2);
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
   pad2_PP__1->Modified();
   cMassFig_PP->cd();
   cMassFig_PP->Modified();
   cMassFig_PP->SetSelected(cMassFig_PP);
}
