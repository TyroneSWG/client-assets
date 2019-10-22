		<Page
			Location='189,113'
			MinimumSize='613,450'
			Name='Surveying'
			ScrollExtent='636,450'
			Size='636,450'
			UserMovable='true'
			UserResizable='true'
		>
			<Data
				buttonclose='menu.bg.mmc.close'
				buttonGetSample='menu.SampleButton'
				buttonSurvey='menu.surveyButton'
				hereicon='menu.window.Locations.here'
				map='menu.window.locations.mapwidget'
				mapback='menu.window.Locations.map_back'
				Name='CodeData'
				resourcetree='menu.window.areas.treepage.tree'
				resourceType='menu.window.areas.treepage.lbltitle'
				sampleIcon='menu.window.Locations.sample'
				textrange='menu.textrange'
				viewer='menu.viewerpage.viewer'
			/>
			<Page
				Name='menu'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				RStyleDefault='rs_default'
				ScrollExtent='636,450'
				Size='636,450'
			>
				<Button
					LocalText='[@res_survey_sample]'
					Location='17,423'
					MinimumSize='0,19'
					Name='SampleButton'
					PackLocation='nfn,fff'
					PackSize='p,f'
					ScrollExtent='141,19'
					Size='141,19'
					Style='/Styles.New.buttons.hud.style'
				>@res_survey_sample</Button>
				<Button
					IsDefaultButton='true'
					LocalText='[@res_survey]'
					Location='478,423'
					MinimumSize='0,19'
					Name='SurveyButton'
					PackLocation='fff,fff'
					PackSize='p,f'
					ScrollExtent='141,19'
					Size='141,19'
					Style='/Styles.New.buttons.hud.style'
				>@res_survey</Button>
				<Text
					Font='bold_13'
					LocalText='[@res_survey_range]'
					Location='14,362'
					Margin='2,2,2,2'
					MinimumSize='0,19'
					Name='labelRange'
					PackLocation='nfn,nfn'
					PackSize='p,f'
					PalText='header'
					ScrollExtent='138,32'
					Size='138,20'
					TextColor='#97FFFF'
				>@res_survey_range</Text>
				<Text
					Font='bold_13'
					LocalText='50/1000'
					Location='177,362'
					Margin='2,2,2,2'
					MinimumSize='0,19'
					Name='textRange'
					PackLocation='nfn,nfn'
					PackSize='p,f'
					PalText='text1'
					ScrollExtent='99,20'
					Size='99,20'
					TextColor='#96F4FC'
				>50/1000</Text>
				<Text
					Font='bold_13'
					LocalText='[@res_survey_icon]'
					Location='429,362'
					Margin='2,2,2,2'
					MinimumSize='0,19'
					Name='icontext'
					PackLocation='fff,fff'
					PackSize='p,f'
					PalText='header'
					ScrollExtent='109,32'
					Size='109,20'
					TextColor='#97FFFF'
				>@res_survey_icon</Text>
				<Page
					BackgroundTint='#1CFFFF'
					Location='554,354'
					Name='ViewerPage'
					PackLocation='fff,fff'
					PackSize='f,f'
					PalBgTint='line1'
					RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
					ScrollExtent='67,65'
					Size='67,65'
				>
					<CuiWidget3dObjectListViewer
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='1.00'
						Color='#00D6FB'
						defaultrotatespeed='0'
						Dragable='true'
						DragAccepts='gameobject'
						headshot='true'
						lightambientcolor='#aaaaaa'
						mousedraggable='true'
						Name='Viewer'
						PackLocation='fff,nfn'
						PackSize='a,a'
						PalColor='back1'
						RStyleDefault='/Styles.New.whitebox_square.rs_default'
						ScrollExtent='67,65'
						Size='67,65'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.60'
						BackgroundTint='#00D6FB'
						Location='12,17'
						Name='box'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.pill_lrg.rs_default'
						ScrollExtent='44,19'
						Size='44,19'
						Visible='false'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.70'
						Color='#1CFFFF'
						Location='6,8'
						Name='inside'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalColor='line1'
						RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
						ScrollExtent='55,49'
						Size='55,49'
						Visible='false'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.80'
							BackgroundTint='#03546B'
							Name='inside'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back3'
							RStyleDefault='/Styles.New.whitebox_palW.rs_default'
							ScrollExtent='55,49'
							Size='55,49'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundTint='#00D6FB'
						Location='5,7'
						Name='bg_viewer'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
						ScrollExtent='57,51'
						Size='57,51'
						Visible='false'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.50'
							BackgroundTint='#00D6FB'
							Location='5,13'
							Name='box'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.whitebox_palW.rs_default'
							ScrollExtent='47,25'
							Size='47,25'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.60'
							Location='1,0'
							Name='outline'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
							ScrollExtent='57,51'
							Size='57,51'
						/>
					</Page>
				</Page>
				<Page
					BackgroundColor='#FFFFFF'
					Location='12,39'
					Name='window'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					RStyleDefault='rs_default'
					ScrollExtent='615,375'
					Size='615,375'
				>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='0,1'
						Name='bgLeft'
						PackLocation='nfn,nfn'
						PackSize='f,f'
						RStyleDefault='/Styles.New.fatFrameInside.rs_default'
						ScrollExtent='320,318'
						Size='320,318'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.70'
							Location='2,3'
							Name='outline'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							RStyleDefault='/Styles.New.whitebox.rs_default'
							ScrollExtent='315,310'
							Size='315,310'
							Visible='false'
						/>
						<Page
							BackgroundOpacity='1.00'
							BackgroundTint='#00FFFF'
							GetsInput='false'
							Name='frame'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='line2'
							RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
							ScrollExtent='320,318'
							Size='320,318'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						Location='3,3'
						MaximumSize='315,315'
						MinimumSize='315,315'
						Name='Locations'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						RStyleDefault='style'
						ScrollExtent='315,315'
						Size='315,315'
					>
						<Page
							MaximumSize='64,32'
							MinimumSize='4,4'
							Name='sample'
							PackSize='ccc,ccc'
							ScrollExtent='64,32'
							Size='64,32'
							Visible='false'
						>
							<Text
								ColorCarat='#FFFFFF'
								Font='bold_25'
								LocalText='81%'
								Margin='2,2,2,2'
								Name='text'
								PackLocation='nfn,fff'
								PackSize='p,f'
								PalText='text1'
								ScrollExtent='64,32'
								Size='64,32'
								TextColor='#96F4FC'
							>81%</Text>
							<Image
								Color='#FF0000'
								Enabled='false'
								MaximumSize='32,32'
								MinimumSize='4,4'
								Name='icon'
								OnEnableEffector='/effectors.rotation.slow'
								PackLocation='nnn,nnn'
								Rotation='0.40'
								ScrollExtent='32,32'
								Size='32,32'
								Style='/Styles.Icon.Misc.bullseye'
								Visible='false'
							/>
						</Page>
						<Page
							MaximumSize='32,32'
							MinimumSize='4,4'
							Name='here'
							PackSize='ccc,ccc'
							ScrollExtent='32,32'
							Size='32,32'
							Visible='false'
						>
							<Image
								Color='#00FF00'
								Enabled='false'
								MaximumSize='32,32'
								MinimumSize='4,4'
								Name='icon'
								OnEnableEffector='/effectors.rotation.slow'
								PackLocation='nnn,nnn'
								ScrollExtent='32,32'
								Size='32,32'
								Style='/Styles.Icon.Misc.compass_rose'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.55'
							Name='map_dots'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							RStyleDefault='rs_default'
							ScrollExtent='315,315'
							Size='315,315'
							Visible='false'
						/>
						<Image
							Name='tat_map'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							ScrollExtent='315,315'
							Size='315,315'
							SourceResource='ui_rebel_tat_map'
							Visible='false'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundTint='#03546B'
							Name='map_back'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back3'
							ScrollExtent='315,312'
							Size='315,312'
						/>
						<CuiWidgetGroundRadar
							Activated='true'
							BackgroundOpacity='0.70'
							BackgroundTint='#00D6FB'
							Name='MapWidget'
							PackSize='1,1'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.viewer.rs_default'
							ScrollExtent='315,315'
							Size='315,315'
							TextStyle='bold_16'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.90'
							BackgroundTint='#00D6FB'
							Location='10,12'
							Name='box'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.pill_lrg.rs_default'
							ScrollExtent='295,276'
							Size='295,276'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						Location='327,0'
						Name='Areas'
						PackLocation='fff,nfn'
						PackSize='a,a'
						ScrollExtent='288,314'
						Size='288,314'
					>
						<Page
							Name='TreePage'
							PackSize='a,a'
							ScrollExtent='281,304'
							Size='281,304'
						>
							<Text
								Font='bold_11'
								LocalText='[@res_survey_resnames]'
								Location='0,5'
								MaxLines='1'
								MinimumSize='0,19'
								Name='lblTitle'
								PackLocation='nfn,nfn'
								PackSize='a,f'
								PalText='header'
								ScrollExtent='269,19'
								Size='269,19'
								TextAlignment='Center'
								TextColor='#97FFFF'
							>@res_survey_resnames</Text>
							<TreeView
								BackgroundColor='#000000'
								BackgroundOpacity='0.20'
								BackgroundScrolls='false'
								BackgroundTint='#00D6FB'
								DataSourceContainer='data'
								Location='11,25'
								MinimumScrollExtent='255,273'
								Name='tree'
								PackLocation='nfn,nfn'
								PackSize='a,a'
								PalBgTint='back1'
								RStyleDefault='/Styles.New.pill_lrg.rs_default'
								ScrollExtent='255,275'
								SelectedRow='13'
								SelectedRowCount='1'
								SelectionAllowedMultiRow='false'
								Size='255,275'
								Style='/Styles.tree.style'
							/>
							<DataSourceContainer
								Name='data'
							>
								<DataSourceContainer
									ColorIndex='0'
									Expanded='true'
									Name='1'
									Selectable='false'
									Text='1'
									Underline='false'
								>
									<DataSourceContainer
										ColorIndex='2'
										Expanded='true'
										Name='2'
										Text='2'
										Underline='false'
									>
										<DataSourceContainer
											ColorIndex='1'
											Expanded='false'
											Name='1'
											Text='1'
											Underline='false'
										/>
									</DataSourceContainer>
									<DataSourceContainer
										Expanded='true'
										Name='1'
										Text='1'
										Underline='true'
									/>
								</DataSourceContainer>
								<DataSourceContainer
									Expanded='false'
									Name='2'
									Text='2'
									Underline='false'
								>
									<DataSourceContainer
										Expanded='true'
										Name='2'
										Text='2'
										Underline='false'
									>
										<DataSourceContainer
											Expanded='true'
											Name='1'
											Text='1'
											Underline='false'
										/>
									</DataSourceContainer>
									<DataSourceContainer
										Expanded='true'
										Name='1'
										Text='1'
										Underline='true'
									/>
								</DataSourceContainer>
								<DataSourceContainer
									Expanded='true'
									Name='3'
									Text='3'
									Underline='false'
								>
									<DataSourceContainer
										Expanded='true'
										Name='2'
										Text='2'
										Underline='false'
									>
										<DataSourceContainer
											Expanded='true'
											Name='1'
											Text='1'
											Underline='false'
										/>
									</DataSourceContainer>
									<DataSourceContainer
										Expanded='true'
										Name='1'
										Text='1'
										Underline='true'
									/>
								</DataSourceContainer>
								<DataSourceContainer
									Expanded='true'
									Name='4'
									Text='4'
									Underline='false'
								>
									<DataSourceContainer
										Expanded='true'
										Name='2'
										Text='2'
										Underline='false'
									>
										<DataSourceContainer
											Expanded='false'
											Name='1'
											Text='1'
											Underline='false'
										/>
									</DataSourceContainer>
									<DataSourceContainer
										Expanded='true'
										Name='1'
										Text='1'
										Underline='true'
									/>
								</DataSourceContainer>
							</DataSourceContainer>
							<Scrollbar
								Control='tree'
								Enabled='false'
								Location='267,22'
								Name='scroll'
								PackLocation='fff,nfn'
								PackSize='f,a'
								ScrollExtent='11,281'
								Size='11,281'
								Style='/Styles.scrollbar.default.vHud4.style'
							>
							</Scrollbar>
						</Page>
						<DataSource
							Name='resourceListDataSource'
						/>
						<List
							DataSource='resourceListDataSource'
							Location='13,54'
							Name='resourceList'
							ScrollExtent='193,253'
							Size='193,253'
							Visible='false'
						/>
						<Page
							BackgroundOpacity='1.00'
							GetsInput='false'
							Name='outline'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
							ScrollExtent='284,312'
							Selectable='true'
							Size='284,312'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								Name='outline'
								PackLocation='nfn,nfn'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
								ScrollExtent='284,312'
								Size='284,312'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='0.70'
								BackgroundTint='#00D6FB'
								Name='inFrame'
								PackLocation='nfn,nfn'
								PackSize='a,a'
								PalBgTint='back1'
								RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
								ScrollExtent='284,312'
								Size='284,312'
							/>
						</Page>
					</Page>
				</Page>
				<Page
					Name='bg'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					ScrollExtent='636,450'
					Size='636,450'
				>
					<Page
						Location='625,8'
						Name='mmc'
						PackLocation='fff,nfn'
						PackSize='f,f'
						RStyleDefault='/Styles.New.thin_mmc.rs_default'
						ScrollExtent='12,10'
						Size='12,10'
					>
						<Button
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.80'
							IsCancelButton='true'
							Location='-3,-3'
							Name='close'
							PackLocation='fff,cfc'
							PackSize='f,f'
							ScrollExtent='16,16'
							Size='16,16'
							Style='/Styles.Frame.buttonClose.style'
						></Button>
					</Page>
					<Page
						MinimumSize='0,19'
						Name='caption'
						PackLocation='nfn,nfn'
						PackSize='a,f'
						ScrollExtent='489,19'
						Size='489,19'
					>
						<Text
							Enabled='false'
							Font='bold_13'
							LocalText='[@CPT_SURVEYING]'
							Margin='6,-2,0,0'
							MaxLines='1'
							MinimumSize='0,19'
							Name='text'
							PackSize='a,f'
							PalText='titletext'
							ScrollExtent='489,19'
							Size='489,19'
							TextAlignmentVertical='Center'
							TextCapital='true'
							TextColor='#00354F'
						>@cpt_surveying</Text>
					</Page>
					<Page
						BackgroundTint='#00D6FB'
						GetsInput='false'
						Location='1,0'
						Name='frame'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='baselight'
						RStyleDefault='/Styles.New.thin_in.rs_default'
						ScrollExtent='635,450'
						Selectable='true'
						Size='635,450'
					>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='1,0'
							Name='lines'
							PackSize='a,a'
							RStyleDefault='/Styles.space.boxes.generic4.rs_default'
							ScrollExtent='635,450'
							Size='635,450'
						>
							<Page
								BackgroundColor='#FFFFFF'
								GetsInput='false'
								Location='0,428'
								Name='outlineBL'
								OpacityRelativeMin='0.80'
								PackLocation='nfn,fff'
								PackSize='p,f'
								ScrollExtent='501,22'
								Size='501,22'
							>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='1.00'
									BackgroundTint='#1CFFFF'
									GetsInput='false'
									Location='0,13'
									Name='outline1'
									OpacityRelativeMin='0.80'
									PackSize='a,a'
									PalBgTint='line1'
									RStyleDefault='/Styles.space.boxes.boxlinebottomLeft2.rs_default'
									ScrollExtent='501,9'
									Size='501,9'
								/>
							</Page>
							<Page
								BackgroundColor='#FFFFFF'
								GetsInput='false'
								Location='172,428'
								Name='outlineBR'
								OpacityRelativeMin='0.80'
								PackLocation='fff,fff'
								PackSize='p,f'
								RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
								ScrollExtent='463,22'
								Size='463,22'
							>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='1.00'
									BackgroundTint='#1CFFFF'
									GetsInput='false'
									Location='0,13'
									Name='outline1'
									OpacityRelativeMin='0.80'
									PackSize='a,a'
									PalBgTint='line1'
									RStyleDefault='/Styles.space.boxes.boxlinebottomRight2.rs_default'
									ScrollExtent='463,9'
									Size='463,9'
								/>
							</Page>
							<Page
								BackgroundColor='#FFFFFF'
								GetsInput='false'
								Location='172,0'
								Name='outlineTR'
								OpacityRelativeMin='0.80'
								PackLocation='fff,nfn'
								PackSize='p,f'
								ScrollExtent='463,22'
								Size='463,22'
							>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='1.00'
									BackgroundTint='#1CFFFF'
									GetsInput='false'
									Name='outline1'
									OpacityRelativeMin='0.80'
									PackSize='a,a'
									PalBgTint='line1'
									RStyleDefault='/Styles.space.boxes.boxlineTopRight2.rs_default'
									ScrollExtent='463,9'
									Size='463,9'
								/>
							</Page>
							<Page
								BackgroundColor='#FFFFFF'
								GetsInput='false'
								Name='outlineTL'
								OpacityRelativeMin='0.80'
								PackLocation='nfn,nfn'
								PackSize='p,f'
								RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
								ScrollExtent='501,22'
								Size='501,22'
							>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='1.00'
									BackgroundTint='#1CFFFF'
									GetsInput='false'
									Name='outline1'
									OpacityRelativeMin='0.80'
									PackSize='a,a'
									PalBgTint='line1'
									RStyleDefault='/Styles.space.boxes.boxlineTopLeft2.rs_default'
									ScrollExtent='501,9'
									Size='501,9'
								/>
							</Page>
						</Page>
						<Page
							BackgroundOpacity='1.00'
							Location='-1,0'
							Name='top'
							PackLocation='nfn,nfn'
							PackSize='a,f'
							RStyleDefault='/Styles.New.main_TR.rs_default'
							ScrollExtent='636,29'
							Size='636,29'
						/>
						<Page
							BackgroundOpacity='1.00'
							Location='0,427'
							Name='bottom'
							PackLocation='nfn,fff'
							PackSize='a,f'
							RStyleDefault='/Styles.New.main_BR.rs_default'
							ScrollExtent='635,23'
							Size='635,23'
						/>
					</Page>
					<Page
						BackgroundOpacity='1.00'
						BackgroundTint='#00D6FB'
						GetsInput='false'
						Location='0,5'
						Name='back'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.thin_in.rs_default'
						ScrollExtent='636,442'
						Selectable='true'
						Size='636,442'
					/>
					<Page
						BackgroundOpacity='1.00'
						BackgroundTint='#00D6FB'
						GetsInput='false'
						Name='back'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.space.spaceglow.rs_default'
						ScrollExtent='636,450'
						Selectable='true'
						Size='636,450'
					/>
				</Page>
			</Page>
		</Page>