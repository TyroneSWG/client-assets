		<Page
			BackgroundColor='#FFFFFF'
			BackgroundOpacity='0.75'
			Location='8,80'
			MinimumSize='201,39'
			Name='group'
			OnDisableEffector='/effectors.opacity.bg.fadeout'
			OnEnableEffector='/effectors.opacity.bg.fadethreequarter'
			PackLocation='nfn,nfn'
			PackSize='p'
			RStyleDefault='/Styles.window.mfd.mfd3.rs_default'
			ScrollExtent='240,42'
			Size='240,42'
			SizeIncrement='10001,37'
			TextOpacityRelativeApply='true'
			TextOpacityRelativeMin='0.80'
			UserMovable='true'
			UserResizable='true'
		>
			<Composite
				Name='scrollwin'
				Orientation='Horizontal'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='235,42'
				Size='235,42'
			>
				<Scrollbar
					Control='comp'
					Enabled='false'
					Name='Scroll'
					OnDisableEffector='/Effectors.FadeOut'
					OnEnableEffector='/Effectors.FadeFull'
					PackLocation='nfn,nfn'
					PackSize='f,p'
					ScrollExtent='12,42'
					Selectable='true'
					Size='12,42'
					Style='/Styles.scrollbar.default.vHud.style'
				>
				</Scrollbar>
				<Composite
					Location='17,1'
					MinimumSize='218,30'
					Name='comp'
					PackLocation='fff,nfn'
					PackSize='p,p'
					ScrollExtent='218,86'
					ScrollSizeLine='1,64'
					ScrollSizePage='0,64'
					Size='218,86'
					Spacing='3'
					SpacingType='Constant'
				>
					<Page
						BackgroundColor='#0000FF'
						MaximumSize='16384,34'
						MinimumSize='0,34'
						Name='sample'
						OnEnableEffector='/Effectors.Fadefull'
						PackSize='a,f'
						ScrollExtent='218,34'
						Selectable='true'
						Size='218,34'
						TextOpacityRelativeApply='true'
						TextOpacityRelativeMin='0.80'
					>
						<Data
							directionArrow='vsp.arrow'
							iconposture='vsp.posture.icon'
							Name='CodeData'
							pagea='ham.a'
							pageh='ham.h'
							pagem='ham.m'
							samplestateicon='sampleStateIcon'
							volumestates='vsp.vs'
						/>
						<Composite
							BackgroundColor='#003366'
							ContextToParent='true'
							FillRemainder='false'
							GetsInput='false'
							Location='27,12'
							Name='ham'
							OpacityRelativeMin='1.00'
							PackLocation='nfn,nfn'
							PackSize='f,a'
							ScrollExtent='110,20'
							Size='110,20'
							Spacing='1'
							SpacingType='Fill'
						>
							<Page
								MinimumSize='5,3'
								Name='h'
								Orientation='horizontal'
								PackLocation='nfn,nfn'
								PackSize='a'
								ScrollExtent='110,6'
								Size='110,6'
							>
								<Data
									back='bar.back'
									cap='bar.cap'
									juice='bar.juice'
									moves='bar.move'
									Name='CodeData'
								/>
								<Page
									BackgroundColor='#FFFFFF'
									MinimumSize='0,4'
									Name='Bar'
									PackSize='a,1'
									RStyleDefault='/Styles.ham_new.bar.rs_default'
									ScrollExtent='110,6'
									Size='110,6'
								>
									<Page
										BackgroundColor='#FFFFFF'
										BackgroundOpacity='1.00'
										BackgroundTint='#FF0000'
										Location='37,0'
										MinimumSize='15,2'
										Name='move'
										PackLocation='nfn,fff'
										PackSize='p,1'
										RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
										ScrollExtent='20,6'
										Size='20,6'
										Visible='false'
									/>
									<Page
										BackgroundColor='#FFFFFF'
										BackgroundOpacity='1.00'
										BackgroundTint='#000000'
										Location='97,0'
										Name='cap'
										PackLocation='fpf'
										PackSize='p,1'
										RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
										ScrollExtent='13,6'
										Size='13,6'
									/>
									<Page
										BackgroundColor='#FFFFFF'
										BackgroundOpacity='1.00'
										BackgroundTint='#FF0000'
										MinimumSize='20,0'
										Name='juice'
										PackLocation='nfn,nfn'
										PackSize='p,1'
										RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
										ScrollExtent='68,6'
										Size='68,6'
									/>
									<Page
										BackgroundColor='#FFFFFF'
										BackgroundOpacity='1.00'
										Name='back'
										PackSize='p,1'
										RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
										ScrollExtent='110,6'
										Size='110,6'
									/>
								</Page>
							</Page>
							<Page
								Location='0,7'
								MinimumSize='5,3'
								Name='a'
								Orientation='horizontal'
								PackLocation='nfn,nfn'
								PackSize='a'
								ScrollExtent='110,6'
								Size='110,6'
							>
								<Data
									back='bar.back'
									cap='bar.cap'
									juice='bar.juice'
									moves='bar.move'
									Name='CodeData'
								/>
								<Page
									BackgroundColor='#FFFFFF'
									MinimumSize='0,4'
									Name='Bar'
									PackSize='a,1'
									RStyleDefault='/Styles.ham_new.bar.rs_default'
									ScrollExtent='110,6'
									Size='110,6'
								>
									<Page
										BackgroundColor='#FFFFFF'
										BackgroundOpacity='1.00'
										BackgroundTint='#1DE306'
										Location='39,0'
										MinimumSize='15,2'
										Name='move'
										PackLocation='nfn,fff'
										PackSize='p,1'
										RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
										ScrollExtent='20,6'
										Size='20,6'
										Visible='false'
									/>
									<Page
										BackgroundColor='#FFFFFF'
										BackgroundOpacity='1.00'
										BackgroundTint='#000000'
										Location='97,0'
										Name='cap'
										PackLocation='fpf'
										PackSize='p,1'
										RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
										ScrollExtent='13,6'
										Size='13,6'
									/>
									<Page
										BackgroundColor='#FFFFFF'
										BackgroundOpacity='1.00'
										BackgroundTint='#00FF00'
										MinimumSize='20,0'
										Name='juice'
										PackLocation='nfn,nfn'
										PackSize='p,1'
										RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
										ScrollExtent='68,6'
										Size='68,6'
									/>
									<Page
										BackgroundColor='#FFFFFF'
										BackgroundOpacity='1.00'
										Name='back'
										PackSize='p,1'
										RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
										ScrollExtent='110,6'
										Size='110,6'
									/>
								</Page>
							</Page>
							<Page
								Location='0,14'
								MinimumSize='5,3'
								Name='m'
								Orientation='horizontal'
								PackLocation='nfn,nfn'
								PackSize='a'
								ScrollExtent='110,6'
								Size='110,6'
							>
								<Data
									back='bar.back'
									cap='bar.cap'
									juice='bar.juice'
									moves='bar.move'
									Name='CodeData'
								/>
								<Page
									BackgroundColor='#FFFFFF'
									MinimumSize='0,4'
									Name='Bar'
									PackSize='a,1'
									RStyleDefault='/Styles.ham_new.bar.rs_default'
									ScrollExtent='110,6'
									Size='110,6'
								>
									<Page
										BackgroundColor='#FFFFFF'
										BackgroundOpacity='1.00'
										BackgroundTint='#095FFF'
										Location='48,0'
										MinimumSize='15,2'
										Name='move'
										PackLocation='nfn,fff'
										PackSize='p,1'
										RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
										ScrollExtent='43,6'
										Size='43,6'
										Visible='false'
									/>
									<Page
										BackgroundColor='#FFFFFF'
										BackgroundOpacity='1.00'
										BackgroundTint='#000000'
										Location='97,0'
										Name='cap'
										PackLocation='fpf'
										PackSize='p,1'
										RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
										ScrollExtent='13,6'
										Size='13,6'
									/>
									<Page
										BackgroundColor='#FFFFFF'
										BackgroundOpacity='1.00'
										BackgroundTint='#0000FF'
										MinimumSize='20,0'
										Name='juice'
										PackLocation='nfn,nfn'
										PackSize='p,1'
										RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
										ScrollExtent='92,6'
										Size='92,6'
									/>
									<Page
										BackgroundColor='#FFFFFF'
										BackgroundOpacity='1.00'
										Name='back'
										PackSize='p,1'
										RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
										ScrollExtent='110,6'
										Size='110,6'
									/>
								</Page>
							</Page>
						</Composite>
						<Image
							BackgroundColor='#FFFFFF'
							Color='#62FF15'
							Location='208,-1'
							Name='IconFocus'
							OpacityRelativeMin='1.00'
							PackLocation='fff,nfn'
							PackSize='f,f'
							PalColor='contrast1'
							ScrollExtent='13,12'
							Size='13,12'
							SourceRect='493,221,482,211'
							SourceResource='ui_rebel_final'
						/>
						<Text
							Font='bold_12'
							LocalText='xxx target name'
							Location='27,0'
							MaxLines='1'
							Name='textName'
							PackLocation='nfn,nfn'
							PackSize='a,f'
							PalText='contrast1'
							ScrollExtent='177,15'
							Size='177,15'
							TextColor='#62FF15'
						>xxx target name</Text>
						<Image
							Color='#54E4FE'
							LocalTooltip='tooltip'
							Location='143,20'
							MaximumSize='20,20'
							MinimumSize='20,20'
							Name='sampleStateIcon'
							OnDisable='opacity=0'
							OnEnableEffector='/effectors.opacity.fast.fadefull'
							PalColor='icondefault'
							ScrollExtent='20,20'
							Size='20,20'
							Style='/Styles.Icon.state.cover'
							Tooltip='tooltip'
							Visible='false'
						/>
						<Page
							ContextToParent='true'
							MaximumSize='16384,300'
							Name='vsp'
							PackLocation='nfn,fff'
							PackSize='a,a'
							RStyleDefault='rs_default'
							ScrollExtent='218,36'
							Size='218,36'
						>
							<Image
								ContextToParent='true'
								Location='193,12'
								Name='arrow'
								OpacityRelativeMin='0.70'
								PackLocation='fff'
								Rotation='0.30'
								ScrollExtent='18,18'
								Size='18,18'
								SourceRect='482,309,506,334'
								SourceResource='ui_rebel_final'
							/>
							<Page
								BackgroundOpacity='1.00'
								Name='posture'
								OpacityRelativeMin='1.00'
								PackLocation='nfn,nfn'
								PackSize='f,a'
								RStyleDefault='/Styles.window.mfd.mfd3.rs_default'
								ScrollExtent='25,27'
								Size='25,27'
							>
								<Image
									BackgroundColor='#FFFFFF'
									Color='#54E4FE'
									LocalTooltip='post'
									Location='0,1'
									Name='icon'
									PackLocation='cfc,cfc'
									PackSize='f,f'
									PalColor='icondefault'
									ScrollExtent='24,24'
									Size='24,24'
									Style='/Styles.Icon.posture.upright'
									Tooltip='post'
								/>
							</Page>
							<VolumePage
								CellAlignmentH='left'
								CellCount='3,1'
								CellPadding='0,0'
								CellSelectable='false'
								CellSelectionOverlayOpacity='1.00'
								CellSize='16,16'
								GetsInput='false'
								Location='138,14'
								MinimumScrollExtent='32,16'
								Name='vs'
								OpacityRelativeMin='1.00'
								PackLocation='fff'
								PackSize='a,a'
								ScrollExtent='54,16'
								Size='54,16'
							>
								<Image
									Color='#54E4FE'
									MaximumSize='16,16'
									MinimumSize='16,16'
									Name='i'
									PalColor='icondefault'
									ScrollExtent='16,16'
									Size='16,16'
									Style='/Styles.Icon.state.alert'
								/>
								<Image
									Color='#54E4FE'
									Location='16,0'
									MaximumSize='16,16'
									MinimumSize='16,16'
									Name='i'
									PalColor='icondefault'
									ScrollExtent='16,16'
									Size='16,16'
									Style='/Styles.Icon.state.peace'
								/>
								<Image
									Color='#54E4FE'
									Location='32,0'
									MaximumSize='16,16'
									MinimumSize='16,16'
									Name='i'
									PalColor='icondefault'
									ScrollExtent='16,16'
									Size='16,16'
									Style='/Styles.Icon.state.aiming'
								/>
							</VolumePage>
						</Page>
						<Page
							BackgroundOpacity='1.00'
							GetsInput='false'
							Location='16,0'
							Name='back'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							RStyleDefault='/Styles.window.mfd.mfd_back.rs_default'
							ScrollExtent='198,34'
							Size='198,34'
						/>
					</Page>
				</Composite>
			</Composite>
			<Data
				Composite='scrollwin.comp'
				Name='CodeData'
				sample='scrollwin.comp.sample'
			/>
			<RectangleStyle
				Center='zeroImage'
				Name='zero'
			/>
		</Page>
