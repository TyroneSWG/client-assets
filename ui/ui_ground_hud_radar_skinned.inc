		<Page
			AllowLookAtTargetSelection='true'
			altRadarBg.enabled='true'
			background.enabled='false'
			compass.enabled='false'
			DropToParent='true'
			Location='870,1'
			MaximumSize='1600,1600'
			MinimumSize='139,139'
			Name='radar'
			OnActivate='Sizex = Sizey  # Keep it diagonal
altRadarFg.ZoomTop.LocationX = Sizey * 0.82
altRadarFg.ZoomTop.LocationY = Sizey * 0.1465
altRadarFg.ZoomBottom.LocationX = Sizey * 0.82
altRadarFg.ZoomBottom.LocationY = Sizey * 0.82
altRadarFg.ConModeBox.opacity=0
altRadarFg.corner_BR.opacity=0
altRadarFg.corner_BL.opacity=0
altRadarFg.corner_TR.opacity=0
inner.square.Range.opacity=0'
			OnDisable='compass.enabled=true
altRadarFg.enabled=false
radarwidget.enabled=false'
			OnEnable='compass.enabled=false
altRadarFg.enabled=true
radarwidget.enabled=true'
			OnHoverIn='ConModeBox.EffectorCancel=\"/Effectors.FadeOut\"
altRadarFg.corner_BR.EffectorCancel=\"/Effectors.FadeOut\"
altRadarFg.corner_BL.EffectorCancel=\"/Effectors.FadeOut\"
altRadarFg.corner_TR.EffectorCancel=\"/Effectors.FadeOut\"
inner.square.Range.EffectorCancel=\"/Effectors.FadeOut\"
altRadarFg.ZoomTop.EffectorCancel=\"/Effectors.FadeOut\"
altRadarFg.ZoomBottom.EffectorCancel=\"/Effectors.FadeOut\"
ConModeBox.EffectorExecute=\"/Effectors.FadeFull\"
altRadarFg.corner_BR.EffectorExecute=\"/Effectors.FadeFull\"
altRadarFg.corner_BL.EffectorExecute=\"/Effectors.FadeFull\"
altRadarFg.corner_TR.EffectorExecute=\"/Effectors.FadeFull\"
inner.square.Range.EffectorExecute=\"/Effectors.FadeFull\"
altRadarFg.ZoomTop.EffectorExecute=\"/Effectors.FadeFull\"
altRadarFg.ZoomBottom.EffectorExecute=\"/Effectors.FadeFull\"
'
			OnHoverOut='ConModeBox.EffectorCancel=\"/Effectors.FadeFull\"
altRadarFg.corner_BR.EffectorCancel=\"/Effectors.FadeFull\"
altRadarFg.corner_BL.EffectorCancel=\"/Effectors.FadeFull\"
altRadarFg.corner_TR.EffectorCancel=\"/Effectors.FadeFull\"
inner.square.Range.EffectorCancel=\"/Effectors.FadeFull\"
altRadarFg.ZoomTop.EffectorCancel=\"/Effectors.FadeFull\"
altRadarFg.ZoomBottom.EffectorCancel=\"/Effectors.FadeFull\"
ConModeBox.EffectorExecute=\"/Effectors.FadeOut\"
altRadarFg.corner_BR.EffectorExecute=\"/Effectors.FadeOut\"
altRadarFg.corner_BL.EffectorExecute=\"/Effectors.FadeOut\"
altRadarFg.corner_TR.EffectorExecute=\"/Effectors.FadeOut\"
RangeFadeEnabled==true?inner.square.Range.EffectorExecute=\"/Effectors.FadeOut\"
altRadarFg.ZoomTop.EffectorExecute=\"/Effectors.FadeOut\"
altRadarFg.ZoomBottom.EffectorExecute=\"/Effectors.FadeOut\"'
			PackLocation='fff,nnn'
			PackSize='f,f'
			RadarToParentOffset='8'
			radarwidget.enabled='true'
			RangeFadeEnabled='true'
			ScrollExtent='139,139'
			Size='139,139'
			SizeIncrementLocked='true'
			TextOpacityRelativeApply='true'
			TextOpacityRelativeMin='0.80'
			UserMovable='true'
			UserResizable='true'
		>
			<Data
				arrow='inner.square.blips.arrow'
				arrowBracket='inner.square.blips.arrowBracket'
				arrowGroup='inner.square.blips.arrowGroup'
				arrowWaypoint='inner.square.blips.arrowWaypoint'
				Background='background'
				blipBracket='inner.square.blips.blip_bracket'
				blipCircle='inner.square.blips.blipCircle'
				blipCorpse='inner.square.blips.blip_corpse'
				blipDefault='inner.square.blips.blip_default'
				blipEntrance='inner.square.blips.blip_entrance'
				blipGroup='inner.square.blips.blip_group'
				blipRing='inner.square.blips.blip_ring'
				blipStructure='inner.square.blips.blip_structure'
				blipWaypoint='inner.square.blips.blip_waypoint'
				conMode='ConModeBox'
				effectorWaypoint='/effectors.color.cycle.bgtint.greyWhite'
				iconimage='iconImage'
				Name='CodeData'
				radarcompass='inner.square.compass'
				radarCompassTop='compassTopPage'
				radarCompassTopLarge='compassTopPage.compassTopLarge'
				radarCompassTopMedium='compassTopPage.compassTopMedium'
				radarCompassTopSmall='compassTopPage.compassTopSmall'
				radarSkinLarge='radarSkinLarge'
				radarSkinMedium='radarSkinMedium'
				radarSkinSmall='radarSkinSmall'
				radarwidget='inner.square.radarwidget'
				rangeindicator='inner.square.range'
				regionindicator='inner.square.region'
				square='inner.square'
				textHeight='coord.height.text'
				textLat='coord.lat.text'
				textLong='coord.long.text'
				toolTipPage='altRadarFg'
				waypointarrow='inner.square.blips.waypointarrow'
				zoombottom='altradarfg.zoombottom'
				zoomtop='altradarfg.zoomtop'
			/>
			<Checkbox
				BorderOffsetX='10'
				BorderOffsetY='10'
				LocalTooltip='[@radar_tooltip_con_mode]'
				Location='3,8'
				Name='ConModeBox'
				Opacity='0.00'
				ScrollExtent='21,18'
				Size='21,18'
				Style='ConModeBoxStyle.Style'
				Tooltip='@radar_tooltip_con_mode'
			></Checkbox>
			<Namespace
				Name='ConModeBoxStyle'
				Size='128,64'
			>
				<ImageStyle
					Name='checkedImage'
					Size='128,64'
					Source='hud_ground_radar'
					SourceRect='436,117,455,135'
				/>
				<CheckboxStyle
					Name='Style'
					NormalCheckedImage='checkedImage'
					NormalTextStyle='bold_11'
					NormalUncheckedImage='uncheckedImage'
					TextOffset='26,0'
				/>
				<ImageStyle
					Name='uncheckedImage'
					Size='128,64'
					Source='hud_ground_radar'
					SourceRect='437,81,456,99'
				/>
			</Namespace>
			<Page
				Location='-6,32'
				Name='Coord'
				PackLocation='cfc,fff'
				ScrollExtent='96,20'
				Size='96,20'
				Visible='false'
			>
				<Page
					BackgroundColor='#FFFFFF'
					BackgroundTint='#00D6FB'
					Location='7,1'
					Name='long'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.tool.tool_TL_in.rs_default'
					ScrollExtent='0,13'
					Size='0,13'
				>
					<Text
						Font='bold_13'
						LocalText='xxx,xxx\"'
						Name='text'
						PackLocation='nfn,cfc'
						PackSize='f,f'
						PalText='text1'
						ScrollExtent='50,28'
						Size='50,13'
						TextAlignment='Center'
						TextAlignmentVertical='Center'
						TextColor='#96F4FC'
					>xxx,xxx\"</Text>
				</Page>
				<Page
					BackgroundColor='#FFFFFF'
					BackgroundTint='#00D6FB'
					Location='58,6'
					Name='height'
					OpacityRelativeMin='0.50'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.tool.tool_TL_in.rs_default'
					ScrollExtent='0,13'
					Size='0,13'
				>
					<Text
						Font='bold_13'
						LocalText='xxx,xxx\"'
						Name='text'
						PackLocation='nfn,cfc'
						PackSize='f,f'
						PalText='text1'
						ScrollExtent='50,28'
						Size='50,13'
						TextAlignment='Center'
						TextAlignmentVertical='Center'
						TextColor='#96F4FC'
					>xxx,xxx\"</Text>
				</Page>
				<Page
					BackgroundColor='#FFFFFF'
					BackgroundTint='#00D6FB'
					Location='107,2'
					Name='lat'
					OpacityRelativeMin='0.50'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.tool.tool_TL_in.rs_default'
					ScrollExtent='0,13'
					Size='0,13'
				>
					<Text
						Font='bold_13'
						LocalText='xxx,xxx\"'
						Name='text'
						PackLocation='nfn,cfc'
						PackSize='f,f'
						PalText='text1'
						ScrollExtent='50,28'
						Size='50,13'
						TextAlignment='Center'
						TextAlignmentVertical='Center'
						TextColor='#96F4FC'
					>xxx,xxx\"</Text>
				</Page>
			</Page>
			<Page
				ConModeBox.EffectorCancel='/Effectors.FadeFull'
				ConModeBox.EffectorExecute='/Effectors.FadeOut'
				corner_BL.EffectorCancel='/Effectors.FadeFull'
				corner_BL.EffectorExecute='/Effectors.FadeOut'
				corner_BR.EffectorCancel='/Effectors.FadeFull'
				corner_BR.EffectorExecute='/Effectors.FadeOut'
				corner_TR.EffectorCancel='/Effectors.FadeFull'
				corner_TR.EffectorExecute='/Effectors.FadeOut'
				Name='altRadarFg'
				PackSize='1,1'
				ScrollExtent='139,139'
				Size='139,139'
				TooltipDelay='false'
			>
				<Button
					BorderOffsetX='10'
					BorderOffsetY='10'
					cmdname='CMD_uiRadarRangeDecrease'
					Dragable='true'
					DragType='command'
					GroundHUD.radar.inner.squre.Range.opacity='0'
					IconMargin='0,0,0,0'
					IconShrink='true'
					IconStretch='true'
					LocalTooltip='[@radar_tooltip_zoom_in]'
					Location='102,24'
					Name='ZoomTop'
					Opacity='0.00'
					OpacityRelativeMin='1.00'
					PackSize='f,f'
					ScrollExtent='21,21'
					Size='21,21'
					Style='zoomTopStyle.style'
					Tooltip='@radar_tooltip_zoom_in'
				></Button>
				<Button
					BorderOffsetX='10'
					BorderOffsetY='10'
					cmdname='CMD_uiRadarRangeIncrease'
					Dragable='true'
					DragType='command'
					GroundHUD.radar.inner.square.Range.opacity='0'
					IconMargin='0,0,0,0'
					IconShrink='true'
					IconStretch='true'
					LocalTooltip='[@radar_tooltip_zoom_out]'
					Location='109,82'
					Name='ZoomBottom'
					Opacity='0.00'
					OpacityRelativeMin='1.00'
					PackSize='f,f'
					ScrollExtent='21,21'
					Size='21,21'
					Style='zoomBottomStyle.style'
					Tooltip='@radar_tooltip_zoom_out'
				></Button>
				<Page
					BackgroundOpacity='1.00'
					Location='91,0'
					Name='mmc'
					OpacityRelativeMin='0.50'
					PackLocation='fff,nfn'
					PackSize='f,f'
					RStyleDefault='/Styles.window.chat.mmc_hud.rs_default'
					ScrollExtent='48,19'
					Size='48,19'
					Visible='false'
				>
					<Button
						DragType='uicommand'
						Location='6,1'
						Name='min'
						PackLocation='fff,nfn'
						ScrollExtent='12,12'
						Size='12,12'
						Style='/Styles.Frame.buttonMinimize.style'
						TextColor='#000000'
						Visible='false'
					></Button>
					<Button
						DragType='uicommand'
						Location='31,1'
						Name='close'
						PackLocation='fff,nfn'
						ScrollExtent='10,11'
						Size='10,11'
						Style='/Styles.Frame.buttonClose.style'
						TextColor='#000000'
					></Button>
					<Button
						DragType='uicommand'
						Location='19,1'
						Name='max'
						PackLocation='fff,nfn'
						ScrollExtent='10,11'
						Size='10,11'
						Style='/Styles.Frame.buttonMaximize.style'
						TextColor='#000000'
					></Button>
				</Page>
				<Namespace
					Name='zoomTopStyle'
					Size='128,64'
				>
					<ButtonStyle
						DisabledTextColor='#777777'
						MouseOverSound='ui_rollover'
						Name='style'
						NormalIconColor='#EEEEEE'
						NormalTextStyle='bold_15'
						ReleaseSound='ui_deselect'
						RStyleActivated='rs_activated'
						RStyleDefault='rs_default'
						RStyleDisabled='rs_disabled'
						RStyleMouseOver='rs_hover'
						RStyleMouseOverActivated='rs_activated'
						RStyleSelected='rs_selected'
					/>
					<RectangleStyle
						Center='default_c'
						Name='rs_default'
					/>
					<RectangleStyle
						Center='hover_c'
						Name='rs_hover'
						NorthShrink='false'
						SouthShrink='false'
						SouthStretch='false'
					/>
					<RectangleStyle
						Center='activate_c'
						Name='rs_activated'
					/>
					<RectangleStyle
						Center='disabled_c'
						Name='rs_disabled'
					/>
					<ImageStyle
						Name='default_c'
						Source='hud_ground_radar'
						SourceRect='436,18,457,38'
					/>
					<ImageStyle
						Name='hover_c'
						Source='hud_ground_radar'
						SourceRect='436,18,457,38'
					/>
					<ImageStyle
						Name='activate_c'
						Source='hud_ground_radar'
						SourceRect='436,18,457,38'
					/>
					<ImageStyle
						Name='disabled_c'
						Source='hud_ground_radar'
						SourceRect='436,18,457,38'
					/>
				</Namespace>
				<Namespace
					Name='zoomBottomStyle'
					Size='128,64'
				>
					<ButtonStyle
						DisabledTextColor='#777777'
						MouseOverSound='ui_rollover'
						Name='style'
						NormalIconColor='#EEEEEE'
						NormalTextStyle='bold_15'
						ReleaseSound='ui_deselect'
						RStyleActivated='rs_activated'
						RStyleDefault='rs_default'
						RStyleDisabled='rs_disabled'
						RStyleMouseOver='rs_hover'
						RStyleMouseOverActivated='rs_activated'
						RStyleSelected='rs_selected'
					/>
					<RectangleStyle
						Center='default_c'
						Name='rs_default'
					/>
					<RectangleStyle
						Center='hover_c'
						Name='rs_hover'
						NorthShrink='false'
						SouthShrink='false'
						SouthStretch='false'
					/>
					<RectangleStyle
						Center='activate_c'
						Name='rs_activated'
					/>
					<RectangleStyle
						Center='disabled_c'
						Name='rs_disabled'
					/>
					<ImageStyle
						Name='default_c'
						Source='hud_ground_radar'
						SourceRect='435,44,455,65'
					/>
					<ImageStyle
						Name='hover_c'
						Source='hud_ground_radar'
						SourceRect='435,44,455,65'
					/>
					<ImageStyle
						Name='activate_c'
						Source='hud_ground_radar'
						SourceRect='435,44,455,65'
					/>
					<ImageStyle
						Name='disabled_c'
						Source='hud_ground_radar'
						SourceRect='435,44,455,65'
					/>
				</Namespace>
			</Page>
			<Page
				Name='compassTopPage'
				PackSize='1,1'
				ScrollExtent='139,139'
				Size='139,139'
			>
				<Image
					AbsorbsInput='false'
					Enabled='false'
					GetsInput='true'
					Location='61,0'
					MaximumSize='1600,1600'
					MinimumScrollExtent='112,112'
					Name='compassTopSmall'
					OpacityRelativeMin='1.00'
					PackLocation='cfc,nfn'
					ScrollExtent='112,112'
					Size='17,25'
					SourceRect='135,9,151,33'
					SourceResource='hud_ground_radar'
				/>
				<Image
					AbsorbsInput='false'
					Enabled='false'
					GetsInput='true'
					Location='58,0'
					MaximumSize='1600,1600'
					MinimumScrollExtent='112,112'
					Name='compassTopMedium'
					OpacityRelativeMin='1.00'
					PackLocation='cfc,nfn'
					ScrollExtent='112,112'
					Size='22,27'
					SourceRect='20,11,41,37'
					SourceResource='hud_ground_radar'
				/>
				<Image
					AbsorbsInput='false'
					Enabled='false'
					GetsInput='true'
					Location='54,0'
					MaximumSize='1600,1600'
					MinimumScrollExtent='112,112'
					Name='compassTopLarge'
					OpacityRelativeMin='1.00'
					PackLocation='cfc,nfn'
					ScrollExtent='112,112'
					Size='30,44'
					SourceRect='241,5,270,48'
					SourceResource='hud_ground_radar'
				/>
			</Page>
			<Image
				AbsorbsInput='false'
				Location='8,8'
				MaximumSize='1600,1600'
				MinimumSize='123,123'
				Name='radarSkinSmall'
				PackLocation='cfc,cfc'
				PackSize='p,p'
				ScrollExtent='123,123'
				Size='123,123'
				SkinWidth='123'
				SourceRect='12,146,147,281'
				SourceResource='hud_ground_radar'
			/>
			<Image
				AbsorbsInput='false'
				Location='8,8'
				MaximumSize='1600,1600'
				MinimumSize='123,123'
				Name='radarSkinMedium'
				PackLocation='cfc,cfc'
				PackSize='p,p'
				ScrollExtent='123,123'
				Size='123,123'
				SkinWidth='203'
				SourceRect='3,307,206,508'
				SourceResource='hud_ground_radar'
				Visible='false'
			/>
			<Image
				AbsorbsInput='false'
				Location='8,8'
				MaximumSize='1600,1600'
				MinimumSize='123,123'
				Name='radarSkinLarge'
				PackLocation='cfc,cfc'
				PackSize='p,p'
				ScrollExtent='123,123'
				Size='123,123'
				SkinWidth='270'
				SourceRect='242,244,512,512'
				SourceResource='hud_ground_radar'
				Visible='false'
			/>
			<Page
				Name='inner'
				PackSize='1,1'
				ScrollExtent='139,139'
				Size='139,139'
			>
				<Page
					Location='8,8'
					MaximumSize='1600,1600'
					MinimumSize='123,123'
					Name='square'
					PackLocation='cfc,cfc'
					PackSize='p,p'
					ScrollExtent='123,123'
					Size='123,123'
				>
					<Text
						BackgroundColor='#FFFFFF'
						BackgroundScrolls='false'
						ColorCarat='#FFFFFF'
						ColorSelection='#FFFFFF'
						Font='bold_11'
						Location='0,80'
						MaxLines='1'
						Name='Region'
						PackLocation='cfc,fff'
						PackSize='f,f'
						PalText='contrast1'
						ScrollExtent='122,17'
						Size='122,17'
						TextAlignment='Center'
						TextColor='#62FF15'
					></Text>
					<Page
						MaximumSize='123,123'
						MinimumSize='123,123'
						Name='blips'
						OpacityRelativeMin='1.00'
						PackLocation='cfc,cfc'
						PackSize='p,p'
						ParentSize='true'
						ScrollExtent='123,123'
						Size='123,123'
					>
						<Image
							BackgroundColor='#FFFFFF'
							Location='55,0'
							Name='arrowGroup'
							OpacityRelativeMin='1.00'
							ScrollExtent='19,19'
							Size='19,19'
							Style='/Styles.Icon.Misc.star'
						/>
						<Image
							BackgroundColor='#FFFFFF'
							Location='82,40'
							Name='blip_group'
							OpacityRelativeMin='1.00'
							ScrollExtent='12,12'
							Size='12,12'
							Style='/Styles.Icon.Misc.star'
						/>
						<Image
							Location='54,0'
							Name='arrowBracket'
							OpacityRelativeMin='1.00'
							PackLocation='cfc,npn'
							PackSize='p,p'
							ScrollExtent='15,18'
							Size='15,18'
							Style='images.arrows.bracket'
							TextOpacityRelativeApply='true'
							UserResizable='true'
						/>
						<Image
							BackgroundColor='#FFFFFF'
							Location='77,61'
							Name='blip_bracket'
							OpacityRelativeMin='1.00'
							ScrollExtent='12,12'
							Size='12,12'
							Style='images.blips.bracket'
						/>
						<Image
							Location='61,61'
							Name='arrowWaypoint'
							OpacityRelativeMin='1.00'
							PackLocation='cfc,cfc'
							PackSize='p,p'
							Rotation='-0.25'
							ScrollExtent='17,6'
							Size='17,6'
							SourceRect='476,317,508,326'
							SourceResource='ui_rebel_final'
							UserResizable='true'
							VisualEditLock='true'
						/>
						<Image
							BackgroundColor='#FFFFFF'
							Location='55,45'
							Name='blip_corpse'
							OpacityRelativeMin='1.00'
							ScrollExtent='12,12'
							Size='12,12'
							Style='images.blips.corpse'
						/>
						<Image
							BackgroundColor='#FFFFFF'
							Location='72,15'
							Name='blip_waypoint'
							OpacityRelativeMin='1.00'
							ScrollExtent='12,12'
							Size='12,12'
							Style='images.blips.waypoint'
						/>
						<Image
							BackgroundColor='#FFFFFF'
							Location='63,40'
							Name='blip_structure'
							OpacityRelativeMin='1.00'
							ScrollExtent='12,12'
							Size='12,12'
							Style='images.blips.structure'
						/>
						<Image
							BackgroundColor='#FFFFFF'
							Location='29,39'
							Name='blip_default'
							OpacityRelativeMin='1.00'
							ScrollExtent='12,12'
							Size='12,12'
							Style='images.blips.default_small'
						/>
						<Image
							Location='59,0'
							Name='arrow'
							OpacityRelativeMin='1.00'
							PackLocation='cfc,npn'
							PackSize='p,p'
							ScrollExtent='4,18'
							Size='4,18'
							Style='images.arrows.default_small'
							UserResizable='true'
							VisualEditLock='true'
						/>
						<Image
							BackgroundColor='#FFFFFF'
							Location='36,65'
							Name='blip_ring'
							OpacityRelativeMin='1.00'
							ScrollExtent='12,12'
							Size='12,12'
							Style='images.blips.default_ring'
						/>
						<Image
							BackgroundColor='#FFFFFF'
							Location='72,15'
							Name='blip_entrance'
							OpacityRelativeMin='1.00'
							ScrollExtent='12,12'
							Size='12,12'
							Style='images.blips.entrance'
						/>
					</Page>
					<Text
						BackgroundColor='#FFFFFF'
						ColorCarat='#FFFFFF'
						ColorSelection='#FFFFFF'
						Font='bold_11'
						LocalText='[@radar_range]'
						Location='0,93'
						Name='Range'
						Opacity='0.00'
						PackLocation='cfc,fff'
						PackSize='f,f'
						PalText='contrast1'
						ScrollExtent='122,17'
						Size='122,17'
						TextAlignment='Center'
						TextColor='#62FF15'
					>@radar_range</Text>
					<Image
						Color='#018BA9'
						Enabled='false'
						GetsInput='true'
						MinimumScrollExtent='139,139'
						Name='compass'
						OpacityRelativeMin='1.00'
						PackLocation='cfc,cfc'
						PackSize='1,1'
						ScrollExtent='139,139'
						Size='123,123'
						SourceRect='31,37,206,212'
						SourceResource='ui_radar_2'
						Visible='false'
					/>
					<CuiWidgetGroundRadar
						Name='RadarWidget'
						OnDisableEffector='/effectors.fadethreequarter'
						OnEnableEffector='/effectors.fadefull'
						OpacityRelativeMin='0.50'
						PackSize='1,1'
						ScrollExtent='123,123'
						Size='123,123'
						TextStyle='bold_16'
					/>
				</Page>
			</Page>
			<Image
				Location='26,4'
				Name='IconImage'
				OpacityRelativeMin='1.00'
				ScrollExtent='32,32'
				Size='32,32'
				SourceRect='10,9,56,55'
				SourceResource='ui_sm_radar_compass'
				Visible='false'
			/>
			<Namespace
				Name='images'
			>
				<Namespace
					Name='arrows'
				>
					<ImageStyle
						Name='bracket'
						Source='ui_rebel_final'
						SourceRect='398,83,409,95'
					/>
					<ImageStyle
						Name='arrow_waypoint'
						Source='ui_rebel_icons'
						SourceRect='34,325,48,334'
					/>
					<ImageStyle
						Name='default_small'
						Source='ui_rebel_final'
						SourceRect='474,283,487,304'
					/>
				</Namespace>
				<Namespace
					Name='blips'
				>
					<ImageStyle
						Name='bracket'
						Source='ui_rebel_final'
						SourceRect='399,99,408,107'
					/>
					<ImageStyle
						Name='waypoint'
						Source='ui_rebel_final'
						SourceRect='400,62,408,70'
					/>
					<ImageStyle
						Name='structure'
						Source='ui_rebel_final'
						SourceRect='401,47,409,54'
					/>
					<ImageStyle
						Name='corpse'
						Source='ui_rebel_final'
						SourceRect='400,55,408,62'
					/>
					<ImageStyle
						Name='default_small'
						Source='ui_rebel_final'
						SourceRect='400,39,408,46'
					/>
					<ImageStyle
						Name='default_ring'
						Source='ui_rebel_final'
						SourceRect='455,283,470,298'
					/>
					<ImageStyle
						Name='entrance'
						Source='ui_rebel_final'
						SourceRect='501,52,509,62'
					/>
				</Namespace>
			</Namespace>
		</Page>