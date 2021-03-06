		<Page
			BackgroundColor='#0000FF'
			Location='297,10'
			MaximumSize='16384,75'
			MinimumSize='244,74'
			Name='Target'
			OnEnableEffector='/Effectors.Fadefull'
			PackLocation='NFN,NFN'
			PackSize='a,f'
			RStyleDefault='/Styles.window.chat.tiny_frame.rs_default'
			ScrollExtent='245,74'
			ShrinkWrap='true'
			Size='245,74'
			TextOpacityRelativeApply='true'
			TextOpacityRelativeMin='0.80'
		>
			<Data
				composite4='composite'
				conEven='status.vsp.con.con_even'
				conHigher='status.vsp.con.con_higher'
				conLower='status.vsp.con.con_lower'
				effectorBlink='effectorBlink'
				faction='status.nameANDfaction.faction'
				hamc='status.ham_creature'
				hamp='status.ham_player'
				iconposture='status.vsp.posture.icon'
				level='status.vsp.con.targetLevel'
				Name='CodeData'
				pagea='status.ham_player.a'
				pagecreaturehealth='status.ham_player.c'
				pageh='status.ham_player.h'
				pagem='status.ham_player.m'
				samplestateicon='status.sampleStateIcon'
				targetrange='status.range'
				textDistance='status.targetRange'
				textname='status.nameANDfaction.targetName'
				volumestates='states'
			/>
			<Page
				MaximumSize='16384,48'
				MinimumSize='240,48'
				Name='status'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='245,48'
				Size='245,48'
			>
				<Composite
					Location='4,1'
					Name='nameANDfaction'
					Orientation='Horizontal'
					ScrollExtent='173,15'
					Size='173,15'
					SpacingType='Fill'
				>
					<Image
						BackgroundColor='#00FF00'
						MaximumSize='15,15'
						MinimumSize='15,15'
						Name='faction'
						OnHide='parent.pack=t'
						OnShow='parent.pack=t'
						PackLocation='nfn,nfn'
						PackSize='f,f'
						ScrollExtent='15,15'
						Size='15,15'
						Style='/Styles.Icon.Faction.imperial_logo'
					/>
					<Text
						BackgroundColor='#0000FF'
						Font='bold_12'
						LocalText='target name'
						Location='15,0'
						MaxLines='1'
						Name='targetName'
						PackLocation='nfn,nfn'
						PackSize='a,f'
						PalText='text1'
						ScrollExtent='158,12'
						Size='158,12'
						TextAlignmentVertical='Center'
						TextColor='#96F4FC'
					>target name</Text>
				</Composite>
				<Text
					Font='bold_12'
					LocalText='999m'
					Location='166,1'
					MaxLines='1'
					Name='targetRange'
					PackLocation='nff,nfn'
					PackSize='f,f'
					PalText='contrast1'
					ScrollExtent='40,15'
					Size='40,15'
					TextAlignment='Right'
					TextAlignmentVertical='Center'
					TextColor='#62FF15'
				>999m</Text>
				<Image
					LocalTooltip='tooltip'
					Location='143,20'
					MaximumSize='20,20'
					MinimumSize='20,20'
					Name='sampleStateIcon'
					OnDisable='opacity=0'
					OnEnableEffector='/effectors.opacity.fast.fadefull'
					ScrollExtent='20,20'
					Size='20,20'
					Style='/Styles.Icon.state.cover'
					Tooltip='tooltip'
					Visible='false'
				/>
				<Page
					Location='6,15'
					MaximumSize='16384,32'
					MinimumSize='200,32'
					Name='ham_player'
					OnEnableEffector=' /Effectors.Fadefull'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					ScrollExtent='203,32'
					Size='203,32'
					TextOpacityRelativeApply='true'
					TextOpacityRelativeMin='0.80'
				>
					<Page
						MaximumSize='16384,10'
						MinimumSize='0,10'
						Name='h'
						Orientation='horizontal'
						PackLocation='nfn,nfn'
						PackSize='a,p'
						ScrollExtent='203,10'
						Size='203,10'
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
							MaximumSize='16384,10'
							MinimumSize='0,10'
							Name='Bar'
							PackSize='a,1'
							RStyleDefault='/Styles.ham_new.bar.rs_default'
							ScrollExtent='203,10'
							Size='203,10'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#FF0000'
								Location='37,0'
								MaximumSize='16384,10'
								MinimumSize='15,10'
								Name='move'
								PackLocation='nfn,fff'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='33,10'
								Size='33,10'
								Visible='false'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#000000'
								Location='183,0'
								MaximumSize='16384,10'
								MinimumSize='0,10'
								Name='cap'
								PackLocation='fpf'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='20,10'
								Size='20,10'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#FF0000'
								Foo='bunny'
								MaximumSize='16384,10'
								MinimumScrollExtent='0,10'
								MinimumSize='20,0'
								Name='juice'
								PackLocation='nfn,nfn'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='122,10'
								Size='122,10'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#990000'
								MaximumSize='16384,10'
								MinimumSize='0,10'
								Name='back'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='203,10'
								Size='203,10'
							/>
						</Page>
					</Page>
					<Page
						Location='0,9'
						MaximumSize='16384,10'
						MinimumSize='5,10'
						Name='a'
						Orientation='horizontal'
						PackLocation='nfn,nfn'
						PackSize='a,p'
						ScrollExtent='203,10'
						Size='203,10'
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
							MaximumSize='16384,10'
							MinimumSize='0,10'
							Name='Bar'
							PackSize='a,1'
							RStyleDefault='/Styles.ham_new.bar.rs_default'
							ScrollExtent='203,10'
							Size='203,10'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1DE306'
								Location='39,0'
								MaximumSize='16384,10'
								MinimumSize='15,10'
								Name='move'
								PackLocation='nfn,fff'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='33,10'
								Size='33,10'
								Visible='false'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#000000'
								Location='183,0'
								MaximumSize='16384,10'
								MinimumSize='0,10'
								Name='cap'
								PackLocation='fpf'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='20,10'
								Size='20,10'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#00FF00'
								MaximumSize='16384,10'
								MinimumSize='20,10'
								Name='juice'
								PackLocation='nfn,nfn'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='122,10'
								Size='122,10'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#009900'
								MaximumSize='16384,10'
								MinimumSize='0,10'
								Name='back'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='203,10'
								Size='203,10'
							/>
						</Page>
					</Page>
					<Page
						Location='0,18'
						MaximumSize='16384,10'
						MinimumSize='5,10'
						Name='m'
						Orientation='horizontal'
						PackLocation='nfn,nfn'
						PackSize='a,p'
						ScrollExtent='203,10'
						Size='203,10'
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
							MaximumSize='16384,10'
							MinimumSize='0,10'
							Name='Bar'
							PackSize='a,1'
							RStyleDefault='/Styles.ham_new.bar.rs_default'
							ScrollExtent='203,10'
							Size='203,10'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#095FFF'
								Location='48,0'
								MaximumSize='16384,10'
								MinimumSize='15,10'
								Name='move'
								PackLocation='nfn,fff'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='75,10'
								Size='75,10'
								Visible='false'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#000000'
								Location='183,0'
								MaximumSize='16384,10'
								MinimumSize='0,10'
								Name='cap'
								PackLocation='fpf'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='20,10'
								Size='20,10'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#0000FF'
								MaximumSize='16384,10'
								MinimumSize='20,10'
								Name='juice'
								PackLocation='nfn,nfn'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='165,10'
								Size='165,10'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#000099'
								MaximumSize='16384,10'
								MinimumSize='0,10'
								Name='back'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='203,10'
								Size='203,10'
							/>
						</Page>
					</Page>
					<Page
						Location='0,4'
						MaximumSize='16384,10'
						MinimumSize='0,10'
						Name='c'
						Orientation='horizontal'
						PackLocation='nfn,nfn'
						PackSize='a,p'
						ScrollExtent='203,10'
						Size='203,10'
						Visible='false'
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
							MaximumSize='16384,10'
							MinimumSize='0,10'
							Name='Bar'
							PackSize='a,1'
							RStyleDefault='/Styles.ham_new.bar.rs_default'
							ScrollExtent='203,10'
							Size='203,10'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#FF0000'
								Location='37,0'
								MaximumSize='16384,10'
								MinimumSize='15,10'
								Name='move'
								PackLocation='nfn,fff'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='33,10'
								Size='33,10'
								Visible='false'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#000000'
								Location='183,0'
								MaximumSize='16384,10'
								MinimumSize='0,10'
								Name='cap'
								PackLocation='fpf'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='20,10'
								Size='20,10'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#FF0000'
								MaximumSize='16384,10'
								MinimumSize='20,10'
								Name='juice'
								PackLocation='nfn,nfn'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='122,10'
								Size='122,10'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#990000'
								MaximumSize='16384,10'
								MinimumSize='0,10'
								Name='back'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='203,10'
								Size='203,10'
							/>
						</Page>
					</Page>
				</Page>
				<Page
					Location='3,17'
					MaximumSize='16384,32'
					MinimumSize='200,32'
					Name='ham_creature'
					OnEnableEffector=' /Effectors.Fadefull'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					ScrollExtent='205,32'
					Size='205,32'
					TextOpacityRelativeApply='true'
					TextOpacityRelativeMin='0.80'
					Visible='false'
				>
					<Page
						Location='0,10'
						Name='h'
						Orientation='horizontal'
						PackLocation='nfn,nfn'
						PackSize='a,p'
						ScrollExtent='205,15'
						Size='205,15'
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
							ScrollExtent='205,15'
							Size='205,15'
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
								ScrollExtent='34,15'
								Size='34,15'
								Visible='false'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#000000'
								Location='185,0'
								Name='cap'
								PackLocation='fpf'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='20,15'
								Size='20,15'
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
								ScrollExtent='124,15'
								Size='124,15'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#990000'
								Name='back'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='205,15'
								Size='205,15'
							/>
						</Page>
					</Page>
					<Page
						Location='0,10'
						MinimumSize='5,4'
						Name='a'
						Orientation='horizontal'
						PackLocation='nfn,nfn'
						PackSize='a,p'
						ScrollExtent='205,15'
						Size='205,15'
						Visible='false'
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
							ScrollExtent='205,15'
							Size='205,15'
							Visible='false'
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
								ScrollExtent='34,15'
								Size='34,15'
								Visible='false'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#000000'
								Location='185,0'
								Name='cap'
								PackLocation='fpf'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='20,15'
								Size='20,15'
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
								ScrollExtent='124,15'
								Size='124,15'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#009900'
								Name='back'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='205,15'
								Size='205,15'
							/>
						</Page>
					</Page>
					<Page
						Location='0,10'
						MinimumSize='5,4'
						Name='m'
						Orientation='horizontal'
						PackLocation='nfn,nfn'
						PackSize='a,p'
						ScrollExtent='205,15'
						Size='205,15'
						Visible='false'
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
							ScrollExtent='205,15'
							Size='205,15'
							Visible='false'
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
								ScrollExtent='76,15'
								Size='76,15'
								Visible='false'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#000000'
								Location='185,0'
								Name='cap'
								PackLocation='fpf'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='20,15'
								Size='20,15'
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
								ScrollExtent='167,15'
								Size='167,15'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#000099'
								Name='back'
								PackSize='p,1'
								RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
								ScrollExtent='205,15'
								Size='205,15'
							/>
						</Page>
					</Page>
				</Page>
				<Page
					MaximumSize='16384,48'
					MinimumSize='199,48'
					Name='vsp'
					PackLocation='nfn,fff'
					PackSize='a,p'
					RStyleDefault='rs_default'
					ScrollExtent='245,48'
					Size='245,48'
				>
					<Page
						BackgroundOpacity='1.00'
						Location='213,0'
						Name='con'
						OpacityRelativeMin='1.00'
						PackLocation='fff,nfn'
						PackSize='f,a'
						RStyleDefault='/Styles.window.mfd.mfd3b.rs_default'
						ScrollExtent='32,39'
						Size='32,39'
					>
						<Text
							BackgroundColor='#00FF00'
							Font='bold_12'
							LocalText='999'
							Location='6,12'
							MaximumSize='23,13'
							MinimumSize='23,13'
							Name='targetLevel'
							ScrollExtent='23,13'
							Size='23,13'
							TextAlignment='Center'
							TextAlignmentVertical='Center'
						>999</Text>
						<Image
							BackgroundColor='#42FF00'
							BackgroundTint='#42FF00'
							Color='#54E4FE'
							LocalTooltip='post'
							Location='3,4'
							MaximumSize='28,28'
							MinimumSize='28,28'
							Name='con_lower'
							PackLocation='cfc,cfc'
							PackSize='f,p'
							PalColor='icondefault'
							ScrollExtent='28,28'
							Size='28,28'
							Style='/Styles.UIv2.CON.con_lower'
							Tooltip='post'
						/>
						<Image
							BackgroundColor='#42FF00'
							BackgroundTint='#42FF00'
							Color='#54E4FE'
							LocalTooltip='post'
							Location='3,4'
							MaximumSize='28,28'
							MinimumSize='28,28'
							Name='con_higher'
							PackLocation='cfc,cfc'
							PackSize='f,p'
							PalColor='icondefault'
							ScrollExtent='28,28'
							Size='28,28'
							Style='/Styles.UIv2.CON.con_higher'
							Tooltip='post'
							Visible='false'
						/>
						<Image
							BackgroundColor='#42FF00'
							BackgroundTint='#42FF00'
							Color='#54E4FE'
							LocalTooltip='post'
							Location='3,4'
							MaximumSize='28,28'
							MinimumSize='28,28'
							Name='con_even'
							PackLocation='cfc,cfc'
							PackSize='f,p'
							PalColor='icondefault'
							ScrollExtent='28,28'
							Size='28,28'
							Style='/Styles.UIv2.CON.con_even'
							Tooltip='post'
							Visible='false'
						/>
					</Page>
				</Page>
				<Page
					BackgroundOpacity='1.00'
					GetsInput='false'
					Name='back'
					PackSize='a,a'
					RStyleDefault='/Styles.window.mfd.mfd2.rs_default'
					ScrollExtent='220,48'
					Size='220,48'
				/>
			</Page>
			<VolumePage
				BackgroundColor='#FFFFFF'
				BackgroundTint='#000000'
				CellAlignmentH='left'
				CellCount='10,1'
				CellPadding='0,0'
				CellSelectable='false'
				CellSelectionOverlayOpacity='1.00'
				CellSize='22,22'
				GetsInput='false'
				Location='0,48'
				MaximumSize='16384,22'
				MinimumScrollExtent='132,22'
				MinimumSize='0,22'
				Name='states'
				OpacityRelativeMin='1.00'
				PackLocation='nfn,fff'
				PackSize='a,a'
				ScrollExtent='228,22'
				Size='228,22'
			>
				<Image
					Color='#54E4FE'
					LocalTooltip='st'
					MaximumSize='22,22'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='22,22'
					Size='22,22'
					Style='/Styles.Icon.state.cover'
					Tooltip='st'
				/>
				<Image
					Color='#54E4FE'
					Location='22,0'
					MaximumSize='22,22'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='22,22'
					Size='22,22'
					Style='/Styles.Icon.state.cover'
				/>
				<Image
					Color='#54E4FE'
					Location='44,0'
					MaximumSize='22,22'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='22,22'
					Size='22,22'
					Style='/Styles.Icon.state.combat'
				/>
				<Image
					Color='#54E4FE'
					Location='66,0'
					MaximumSize='22,22'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='22,22'
					Size='22,22'
					Style='/Styles.Icon.state.peace'
				/>
				<Image
					Color='#54E4FE'
					Location='88,0'
					MaximumSize='22,22'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='22,22'
					Size='22,22'
					Style='/Styles.Icon.state.aiming'
				/>
				<Image
					Color='#54E4FE'
					Location='110,0'
					MaximumSize='22,22'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='22,22'
					Size='22,22'
					Style='/Styles.Icon.state.alert'
				/>
			</VolumePage>
			<ColorEffector
				BackgroundTint='true'
				Cycling='true'
				Name='combatEffector'
				RestoreColor='true'
				Speed='3.00'
				TargetColor='#FF0000'
				TargetColor2='#FFFFFF'
			/>
			<OpacityEffector
				Cycling='true'
				Name='effectorBlink'
				Speed='2.00'
				TargetOpacity='0.15'
				TargetOpacity2='1.00'
			/>
		</Page>
