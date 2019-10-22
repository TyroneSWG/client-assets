		<Page
			AllowLookAtTargetSelection='true'
			BackgroundColor='#0000FF'
			DoNotPackChildren='true'
			Location='572,6'
			MaximumSize='280,200'
			MinimumSize='280,75'
			Name='SecondaryTarget'
			OnEnableEffector='/Effectors.Fadefull'
			PackSize='f,f'
			RStyleDefault='/Styles.window.chat.tiny_frame.rs_default'
			ScrollExtent='280,75'
			Size='280,75'
			TextOpacityRelativeApply='true'
			TextOpacityRelativeMin='0.80'
			UserMovable='true'
		>
			<Page
				ContextToParent='true'
				GetsInput='false'
				Location='226,-1'
				MaximumSize='100,100'
				MinimumSize='4,4'
				Name='sampleIconPage'
				ScrollExtent='20,20'
				Size='20,20'
				Visible='false'
			>
				<Text
					Font='bold_11'
					LocalText='1'
					Location='0,10'
					MaximumSize='1683,1683'
					MaxLines='1'
					Name='textStack'
					PackLocation='fff,fff'
					PackSize='f,f'
					PalText='text1'
					ScrollExtent='20,13'
					Size='20,10'
					TextAlignment='Right'
					TextAlignmentVertical='Center'
					TextColor='#96F4FC'
				>1</Text>
				<Image
					AbsorbsInput='false'
					MaximumSize='100,100'
					MinimumSize='4,4'
					Name='icon'
					OnDisable='opacity=0'
					OnEnableEffector='/effectors.opacity.fast.fadefull'
					PackLocation='npn,npn'
					PackSize='p,p'
					ScrollExtent='20,20'
					Size='20,20'
					Style='/Styles.Icon.state.cover'
				/>
			</Page>
			<Image
				Color='#7F7F7F'
				Location='-2,-1'
				MaximumSize='280,75'
				Name='elite_skin'
				ScrollExtent='266,75'
				Size='266,75'
				SourceRect='25,54,290,121'
				SourceResource='hud_ground_radar'
				Stretch='false'
				Visible='false'
			/>
			<Data
				composite4='composite'
				conEven='con.con_even'
				conHigher='con.con_higher'
				conLower='con.con_lower'
				effectorBlink='effectorBlink'
				eliteSkin='elite_skin'
				faction='faction'
				level='targetLevel'
				Name='CodeData'
				pagea='status_npc.a'
				pagecreaturehealth='status_obj.h'
				pagegreyhealth='status_grey.h'
				pageh='status_npc.h'
				pagem='status_npc.m'
				samplestateicon='sampleStateIcon'
				speakingicon='speakingIcon'
				textDistance='targetRange'
				textname='targetName'
				volumedebuff='debuff'
				volumestates='states'
			/>
			<Text
				Font='bold_11'
				LocalText='999m'
				Location='13,61'
				MaxLines='1'
				Name='targetRange'
				PackLocation='nff,nfn'
				PackSize='f,f'
				PalText='contrast1'
				ScrollExtent='41,15'
				Size='41,15'
				TextAlignmentVertical='Center'
				TextColor='#62FF15'
			>999m</Text>
			<VolumePage
				BackgroundColor='#FFFFFF'
				BackgroundTint='#000000'
				CellAlignmentH='left'
				CellCount='9,1'
				CellPadding='0,0'
				CellSelectable='false'
				CellSelectionOverlayOpacity='1.00'
				CellSize='22,22'
				Location='58,44'
				MaximumSize='16384,44'
				MinimumScrollExtent='132,22'
				MinimumSize='0,22'
				Name='states'
				OpacityRelativeMin='1.00'
				PackLocation='nfn,fff'
				PackSize='a,a'
				ScrollExtent='198,22'
				Size='198,22'
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
			<VolumePage
				BackgroundColor='#FFFFFF'
				BackgroundTint='#000000'
				CellAlignmentH='left'
				CellCount='9,2'
				CellPadding='0,0'
				CellSelectable='false'
				CellSelectionOverlayOpacity='1.00'
				CellSize='22,22'
				Location='59,87'
				MaximumSize='16384,44'
				MinimumScrollExtent='198,44'
				MinimumSize='0,22'
				Name='debuff'
				OpacityRelativeMin='1.00'
				PackLocation='fff,fff'
				PackSize='f,f'
				ScrollExtent='198,44'
				Selectable='true'
				Size='198,22'
			>
				<Image
					Color='#54E4FE'
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
					LocalTooltip='st'
					Location='22,0'
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
					LocalTooltip='st'
					Location='44,0'
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
					LocalTooltip='st'
					Location='66,0'
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
					LocalTooltip='st'
					Location='88,0'
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
					LocalTooltip='st'
					Location='110,0'
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
					LocalTooltip='st'
					Location='132,0'
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
					LocalTooltip='st'
					Location='154,0'
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
					LocalTooltip='st'
					Location='176,0'
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
					LocalTooltip='st'
					Location='0,22'
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
					GetsInput='true'
					LocalTooltip='st'
					Location='22,22'
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
					LocalTooltip='st'
					Location='44,22'
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
					LocalTooltip='st'
					Location='66,22'
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
					LocalTooltip='st'
					Location='88,22'
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
					Location='110,22'
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
					Location='132,22'
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
					Location='154,22'
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
					Location='176,22'
					MaximumSize='22,22'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='22,22'
					Size='22,22'
					Style='/Styles.Icon.state.aiming'
				/>
			</VolumePage>
			<Image
				Color='#7F7F7F'
				Location='13,1'
				MaximumSize='280,75'
				Name='skin'
				ScrollExtent='246,60'
				Size='246,60'
				SourceRect='260,269,502,324'
				SourceResource='hud_ground_skin'
				Stretch='false'
			/>
			<Text
				BackgroundColor='#00FF00'
				Font='bold_11'
				LocalText='999'
				Location='26,39'
				MaximumSize='23,13'
				MinimumSize='23,13'
				Name='targetLevel'
				ScrollExtent='23,13'
				Size='23,13'
				TextAlignment='Center'
				TextAlignmentVertical='Center'
			>999</Text>
			<Text
				BackgroundOpacity='0.50'
				Font='bold_11'
				LocalText='Target Name'
				Location='48,7'
				MaximumSize='299,12'
				MaxLines='1'
				MinimumSize='167,12'
				Name='targetName'
				PackLocation='nfn,nfn'
				PackSize='a,f'
				PalText='text1'
				ScrollExtent='198,13'
				Size='198,12'
				TextAlignmentVertical='Center'
				TextColor='#96F4FC'
			>Target Name</Text>
			<Image
				BackgroundColor='#00FF00'
				Location='-1,0'
				MaximumSize='15,15'
				MinimumSize='15,15'
				Name='faction'
				PackLocation='nfn,nfn'
				PackSize='f,f'
				ScrollExtent='15,15'
				Size='15,15'
				Style='/Styles.Icon.Faction.imperial_logo'
			/>
			<Image
				ContextToParent='true'
				Location='15,0'
				Name='speakingIcon'
				OpacityRelativeMin='0.70'
				PackLocation='fff'
				ScrollExtent='16,16'
				Size='16,16'
				Style='/Styles.Icon.UIv2.CMD_uiChat'
			/>
			<Page
				Location='52,28'
				MaximumSize='220,20'
				MinimumSize='158,20'
				Name='status_npc'
				OnEnableEffector=' /Effectors.Fadefull'
				PackSize='a,a'
				ScrollExtent='202,20'
				Size='202,20'
				TextOpacityRelativeApply='true'
				TextOpacityRelativeMin='0.80'
			>
				<Page
					MaximumSize='220,20'
					MinimumSize='5,7'
					Name='h'
					Orientation='horizontal'
					PackLocation='nfn,nfn'
					PackSize='a,p'
					ScrollExtent='202,7'
					Size='202,7'
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
						MaximumSize='220,20'
						MinimumSize='5,7'
						Name='Bar'
						PackSize='a,1'
						RStyleDefault='/Styles.ham_new.bar.rs_default'
						ScrollExtent='202,7'
						Size='202,7'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#FF0000'
							Location='37,0'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='move'
							PackLocation='nfn,fff'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.move.rs_default'
							ScrollExtent='33,7'
							Size='33,7'
							Visible='false'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#000000'
							Location='181,0'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='cap'
							PackLocation='fpf'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.tip.rs_default'
							ScrollExtent='21,7'
							Size='21,7'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#FF0000'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='juice'
							PackLocation='nfn,nfn'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.tip.rs_default'
							ScrollExtent='123,7'
							Size='123,7'
						/>
						<Page
							BackgroundOpacity='1.00'
							BackgroundTint='#000000'
							Color='#000000'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='back'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.bar.rs_default'
							ScrollExtent='202,7'
							Size='202,7'
						/>
					</Page>
				</Page>
				<Page
					Location='0,7'
					MaximumSize='220,20'
					MinimumSize='5,7'
					Name='a'
					Orientation='horizontal'
					PackLocation='nfn,nfn'
					PackSize='a,p'
					ScrollExtent='202,7'
					Size='202,7'
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
						MaximumSize='220,20'
						MinimumSize='5,7'
						Name='Bar'
						PackSize='a,1'
						RStyleDefault='/Styles.ham_new.bar.rs_default'
						ScrollExtent='202,7'
						Size='202,7'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1DE306'
							Location='39,0'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='move'
							PackLocation='nfn,fff'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.move.rs_default'
							ScrollExtent='33,7'
							Size='33,7'
							Visible='false'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#000000'
							Location='181,0'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='cap'
							PackLocation='fpf'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.tip.rs_default'
							ScrollExtent='21,7'
							Size='21,7'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#00FF00'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='juice'
							PackLocation='nfn,nfn'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.tip.rs_default'
							ScrollExtent='123,7'
							Size='123,7'
						/>
						<Page
							BackgroundOpacity='1.00'
							BackgroundTint='#000000'
							Color='#000000'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='back'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.bar.rs_default'
							ScrollExtent='202,7'
							Size='202,7'
						/>
					</Page>
				</Page>
				<Page
					Location='0,13'
					MaximumSize='220,20'
					MinimumSize='5,7'
					Name='m'
					Orientation='horizontal'
					PackLocation='nfn,nfn'
					PackSize='a,p'
					ScrollExtent='202,7'
					Size='202,7'
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
						MaximumSize='220,20'
						MinimumSize='5,7'
						Name='Bar'
						PackSize='a,1'
						RStyleDefault='/Styles.ham_new.bar.rs_default'
						ScrollExtent='202,7'
						Size='202,7'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#095FFF'
							Location='48,0'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='move'
							PackLocation='nfn,fff'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.move.rs_default'
							ScrollExtent='76,7'
							Size='76,7'
							Visible='false'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#000000'
							Location='181,0'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='cap'
							PackLocation='fpf'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.tip.rs_default'
							ScrollExtent='21,7'
							Size='21,7'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#0000FF'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='juice'
							PackLocation='nfn,nfn'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.tip.rs_default'
							ScrollExtent='166,7'
							Size='166,7'
						/>
						<Page
							BackgroundOpacity='1.00'
							BackgroundTint='#000000'
							Color='#000000'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='back'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.bar.rs_default'
							ScrollExtent='202,7'
							Size='202,7'
						/>
					</Page>
				</Page>
			</Page>
			<Page
				Location='52,28'
				MaximumSize='220,20'
				MinimumSize='158,20'
				Name='status_obj'
				OnEnableEffector=' /Effectors.Fadefull'
				PackSize='a,a'
				ScrollExtent='202,20'
				Size='202,20'
				TextOpacityRelativeApply='true'
				TextOpacityRelativeMin='0.80'
			>
				<Page
					MaximumSize='220,20'
					MinimumSize='5,7'
					Name='h'
					Orientation='horizontal'
					PackLocation='nfn,nfn'
					PackSize='a,p'
					ScrollExtent='202,20'
					Size='202,20'
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
						MaximumSize='220,20'
						MinimumSize='5,7'
						Name='Bar'
						PackSize='a,1'
						RStyleDefault='/Styles.ham_new.bar.rs_default'
						ScrollExtent='202,20'
						Size='202,20'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#FF0000'
							Location='37,0'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='move'
							PackLocation='nfn,fff'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.move.rs_default'
							ScrollExtent='32,20'
							Size='32,20'
							Visible='false'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#000000'
							Location='182,0'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='cap'
							PackLocation='fpf'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.tip.rs_default'
							ScrollExtent='20,20'
							Size='20,20'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#FF0000'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='juice'
							PackLocation='nfn,nfn'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.tip.rs_default'
							ScrollExtent='123,20'
							Size='123,20'
						/>
						<Page
							BackgroundOpacity='1.00'
							BackgroundTint='#000000'
							Color='#000000'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='back'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.bar.rs_default'
							ScrollExtent='202,20'
							Size='202,20'
						/>
					</Page>
				</Page>
			</Page>
			<Page
				Location='53,29'
				MaximumSize='220,20'
				MinimumSize='158,20'
				Name='status_grey'
				OnEnableEffector=' /Effectors.Fadefull'
				PackSize='a,a'
				ScrollExtent='202,20'
				Size='202,20'
				TextOpacityRelativeApply='true'
				TextOpacityRelativeMin='0.80'
				Visible='false'
			>
				<Page
					MaximumSize='220,20'
					MinimumSize='5,7'
					Name='h'
					Orientation='horizontal'
					PackLocation='nfn,nfn'
					PackSize='a,p'
					ScrollExtent='202,20'
					Size='202,20'
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
						MaximumSize='220,20'
						MinimumSize='5,7'
						Name='Bar'
						PackSize='a,1'
						RStyleDefault='/Styles.ham_new.bar.rs_default'
						ScrollExtent='202,20'
						Size='202,20'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#FF0000'
							Location='37,0'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='move'
							PackLocation='nfn,fff'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.move.rs_default'
							ScrollExtent='32,20'
							Size='32,20'
							Visible='false'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#000000'
							Location='182,0'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='cap'
							PackLocation='fpf'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.tip.rs_default'
							ScrollExtent='20,20'
							Size='20,20'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#6C6C6C'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='juice'
							PackLocation='nfn,nfn'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.tip.rs_default'
							ScrollExtent='123,20'
							Size='123,20'
						/>
						<Page
							BackgroundOpacity='1.00'
							BackgroundTint='#000000'
							Color='#000000'
							MaximumSize='220,20'
							MinimumSize='5,7'
							Name='back'
							PackSize='p,1'
							RStyleDefault='/Styles.ham_new.bar.rs_default'
							ScrollExtent='202,20'
							Size='202,20'
						/>
					</Page>
				</Page>
			</Page>
			<Page
				Location='18,20'
				Name='con'
				OpacityRelativeMin='1.00'
				PackLocation='nfn,nfn'
				PackSize='f,f'
				ScrollExtent='36,33'
				Size='36,33'
			>
				<Image
					BackgroundColor='#42FF00'
					BackgroundTint='#42FF00'
					Color='#54E4FE'
					Name='con_lower'
					PackSize='1,1'
					PalColor='icondefault'
					ScrollExtent='36,33'
					Size='36,33'
					Style='/Styles.UIv2.CON.con_lower'
				/>
				<Image
					BackgroundColor='#42FF00'
					BackgroundTint='#42FF00'
					Color='#54E4FE'
					Name='con_higher'
					PackSize='1,1'
					PalColor='icondefault'
					ScrollExtent='36,33'
					Size='36,33'
					Style='/Styles.UIv2.CON.con_higher'
					Visible='false'
				/>
				<Image
					BackgroundColor='#42FF00'
					BackgroundTint='#42FF00'
					Color='#54E4FE'
					Name='con_even'
					PackSize='1,1'
					PalColor='icondefault'
					ScrollExtent='36,33'
					Size='36,33'
					Style='/Styles.UIv2.CON.con_even'
					Visible='false'
				/>
			</Page>
			<Image
				Color='#54E4FE'
				LocalTooltip='tooltip'
				Location='251,3'
				MaximumSize='100,100'
				MinimumSize='4,4'
				Name='sampleStateIcon'
				OnDisable='opacity=0'
				OnEnableEffector='/effectors.opacity.fast.fadefull'
				ScrollExtent='20,20'
				Size='20,20'
				Style='/Styles.Icon.state.cover'
				Tooltip='tooltip'
				Visible='false'
			/>
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