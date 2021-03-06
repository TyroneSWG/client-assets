		<Page
			AllowLookAtTargetSelection='true'
			BackgroundColor='#22FF22'
			DragAccepts='Command'
			Location='1,563'
			MaximumSize='768,728'
			MinimumSize='312,151'
			Name='ChatWindow'
			PackLocation='nfn,fff'
			PackSize='f,f'
			ScrollExtent='448,179'
			Size='448,179'
			TextOpacityRelativeApply='true'
			TextOpacityRelativeMin='0.80'
			UserMovable='true'
			UserResizable='true'
		>
			<Data
				buttonclose='close'
				buttoncollapse='buttons.collapse'
				buttonexpand='buttons.expand'
				collapsingpage='skin.upper'
				groundHudChatBar='input'
				groundHudChatChannel='textChannel'
				groundHudClose='close'
				groundHudScrollbar='text_sroll'
				groundHudSkin='skin'
				iconblink='/styles.icon.misc.blink'
				iconnoblink='/styles.icon.misc.no_blink'
				input='input'
				Name='CodeData'
				output='text'
				persistentpage='skin.lower'
				StickyVisible='true'
				tabs='tabs'
				textchannel='textchannel'
			/>
			<Button
				AutoRegister='true'
				BackgroundColor='#FFFFFF'
				Color='#000000'
				ContextToParent='true'
				DragType='uicommand'
				IconShrink='true'
				Location='9,3'
				MaximumSize='16,16'
				MinimumSize='16,16'
				Name='close'
				PackLocation='nnn,nnn'
				PackSize='f,f'
				ScrollExtent='16,16'
				Selectable='true'
				Size='16,16'
				Style='/Styles.Frame.buttonCloseDark.style'
			></Button>
			<Scrollbar
				AutoRegister='true'
				BackgroundColor='#FFFFFF'
				BackgroundOpacity='0.10'
				BackgroundTint='#42FF00'
				Control='text'
				Enabled='false'
				Location='429,28'
				MaximumSize='38,16384'
				MinimumSize='19,0'
				Name='text_sroll'
				PackLocation='fff,nfn'
				PackSize='f,a'
				ScrollExtent='19,111'
				Size='19,111'
				Style='/Styles.scrollbar.default.vHud4.style'
			>
			</Scrollbar>
			<Scrollbar
				Control='tabs'
				Enabled='false'
				Location='373,10'
				Name='tab_scroll'
				Opacity='0.00'
				PackLocation='fff,nfn'
				PackSize='f,f'
				ScrollExtent='25,9'
				Size='25,9'
				Style='/Styles.New.scrollbar.H2.style'
			>
			</Scrollbar>
			<Page
				AbsorbsInput='false'
				Location='405,143'
				Name='buttons'
				OnDisableEffector='/effectors.fadeout'
				OnEnableEffector='/effectors.fadefull'
				PackLocation='nfn,fff'
				PackSize='f,f'
				ScrollExtent='14,14'
				Size='14,14'
			>
				<Button
					BackgroundColor='#FFFFFF'
					BackgroundOpacity='0.00'
					cmdname='CMD_uiChatCollapse'
					Dragable='true'
					DragType='command'
					Icon='/Styles.Icon.Misc.collapse_2'
					IconAlignment='Center'
					IconMargin='0,0,0,0'
					IconStretch='true'
					Name='collapse'
					OnPress='parent.expand.visible=true




visible=false'
					PackSize='a,a'
					RStyleDefault='rs_default'
					ScrollExtent='14,14'
					Size='14,14'
					Style='style'
					TextColor='#000000'
				></Button>
				<Button
					BackgroundOpacity='0.00'
					cmdname='CMD_uiChatCollapse'
					Dragable='true'
					DragType='command'
					Icon='/Styles.Icon.Misc.collapse'
					IconAlignment='Center'
					IconMargin='0,0,0,0'
					IconShrink='true'
					IconStretch='true'
					Name='expand'
					OnPress='parent.collapse.visible=true




visible=false'
					PackSize='a,a'
					ScrollExtent='14,14'
					Size='14,14'
					Style='style'
					TextColor='#000000'
					Visible='false'
				></Button>
			</Page>
			<Page
				Activated='true'
				AutoRegister='true'
				Dragable='true'
				DragType='chatWindowTab'
				Location='217,93'
				Name='tabButton'
				PackSize='f,f'
				ScrollExtent='120,10'
				Size='120,10'
				Visible='false'
			>
				<Composite
					AbsorbsInput='false'
					Activated='true'
					GetsInput='false'
					MaximumSize='120,10'
					MinimumSize='120,10'
					Name='bg'
					Orientation='Horizontal'
					PackSize='a,a'
					ParentSize='true'
					ScrollExtent='120,10'
					Size='120,10'
					SpacingType='Skinned'
				>
					<Image
						AbsorbsInput='false'
						Activated='true'
						MaximumSize='16,16384'
						MinimumSize='16,0'
						Name='left'
						PackSize='a,a'
						ScrollExtent='16,10'
						Size='16,10'
						SourceRect='461,0,477,18'
						SourceResource='hud_ground_skin'
						Stretch='false'
					/>
					<Image
						AbsorbsInput='false'
						Activated='true'
						Location='71,0'
						MaximumSize='5,16384'
						MinimumSize='5,0'
						Name='fill'
						PackSize='a,a'
						ScrollExtent='5,10'
						Size='5,10'
						SourceRect='480,0,485,18'
						SourceResource='hud_ground_skin'
						Stretch='false'
						Visible='false'
					/>
					<Image
						AbsorbsInput='false'
						Activated='true'
						Location='104,0'
						MaximumSize='16,16384'
						MinimumSize='16,0'
						Name='right'
						PackSize='a,a'
						ScrollExtent='16,10'
						Size='16,10'
						SourceRect='496,0,512,18'
						SourceResource='hud_ground_skin'
						Stretch='false'
					/>
				</Composite>
				<Button
					Activated='true'
					BackgroundOpacity='0.50'
					Dragable='true'
					DragType='command'
					Name='button'
					PackSize='a,a'
					ScrollExtent='120,10'
					Size='120,10'
				></Button>
			</Page>
			<Text
				BackgroundOpacity='0.80'
				ContextCapable='true'
				CursorMark='149'
				CursorPoint='149'
				DragAccepts='ChatTab'
				DropToParent='true'
				Font='normal_12'
				GetsInput='true'
				LocalText='Well, the Empire doesnt consider a small one-man fighter to be any threat, or theyd have a tighter defense. An analysis of the plans provided by Princess Leia has demonstrated a weakness in the battle station.  The approach will not be easy. You are required to maneuver straight down this trench and skim the surface to this point. The target area is only two meters wide. Its a small thermal exhaust port, right below the main port. The shaft leads directly to the reactor system. A precise hit will start a chain reaction which should destroy the station. '
				Location='14,26'
				Margin='2,2,2,2'
				Name='text'
				PackSize='a,a'
				PalText='text1'
				ScrollExtent='417,109'
				Size='417,109'
				TextColor='#96F4FC'
				TextOpacityRelativeApply='true'
				TextOpacityRelativeMin='0.40'
				TextSelectable='false'
			>Well, the Empire doesnt consider a small one-man fighter to be any threat, or theyd have a tighter defense. An analysis of the plans provided by Princess Leia has demonstrated a weakness in the battle station.  The approach will not be easy. You are required to maneuver straight down this trench and skim the surface to this point. The target area is only two meters wide. Its a small thermal exhaust port, right below the main port. The shaft leads directly to the reactor system. A precise hit will start a chain reaction which should destroy the station. </Text>
			<TabbedPane
				Activated='true'
				AutoRegister='true'
				ContextCapable='true'
				ContextToParent='true'
				DataSource='TabData'
				DragAccepts='Command'
				DropToParent='true'
				Location='33,3'
				MinimumScrollExtent='253,0'
				Name='tabs'
				OpacityRelativeMin='1.00'
				PackLocation='nnn,nnn'
				PackSize='a,f'
				ScrollExtent='337,15'
				Size='337,15'
				Style='/Styles.New.tabs.horizontal_10.style'
				TabObject='tabButton'
				DataSource='TabData'
				ActiveTab='0'
				Style='/Styles.New.tabs.horizontal_10.style'
				TabObject='tabButton'
			>
			</TabbedPane>
			<DataSource
				Name='TabData'
				Size='128,64'
			>
				<Data
					ContextCapable='true'
					DragType='chatWindowTab'
					Name='Instant Messenger'
					Size='128,64'
					Target='text'
				/>
				<Data
					ContextCapable='true'
					DragType='chatwindowtab'
					Name='Chat Messages'
					Size='128,64'
					Target='text'
				/>
				<Data
					ContextCapable='PLANET'
					DragType='chatWindowTab'
					Name='Planet'
					Size='128,64'
					Target='text'
				/>
			</DataSource>
			<Composite
				FillRemainder='false'
				GetsInput='false'
				MaximumSize='448,179'
				MinimumSize='448,179'
				Name='skin'
				PackSize='a,a'
				ParentSize='true'
				ScrollExtent='448,179'
				Size='448,179'
				SpacingType='Skinned'
			>
				<Composite
					Activated='true'
					MaximumSize='16384,88'
					MinimumSize='312,88'
					Name='upper'
					Orientation='Horizontal'
					PackSize='a,a'
					ScrollExtent='448,88'
					Size='448,88'
					SpacingType='Skinned'
				>
					<Image
						MaximumSize='211,88'
						MinimumSize='211,88'
						Name='left'
						PackSize='f,f'
						ScrollExtent='211,88'
						Size='211,88'
						SourceRect='0,0,211,88'
						SourceResource='hud_ground_skin'
						Stretch='false'
					/>
					<Image
						Name='fill'
						PackSize='f,f'
						ScrollExtent='7,70'
						Size='7,70'
						SourceRect='339,0,346,100'
						SourceResource='hud_ground_skin'
						Stretch='false'
						Visible='false'
					/>
					<Image
						Location='347,0'
						MaximumSize='101,88'
						MinimumSize='101,88'
						Name='right'
						PackSize='f,f'
						ScrollExtent='101,88'
						Size='101,88'
						SourceRect='211,0,312,88'
						SourceResource='hud_ground_skin'
						Stretch='false'
					/>
				</Composite>
				<Composite
					Activated='true'
					Location='0,9'
					MaximumSize='16384,5'
					MinimumSize='312,4'
					Name='fill'
					Opacity='0.75'
					Orientation='Horizontal'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					ScrollExtent='448,5'
					Size='448,5'
					SpacingType='Skinned'
					Visible='false'
				>
					<Image
						Name='left'
						PackSize='f,f'
						ScrollExtent='14,5'
						Size='14,5'
						SourceRect='0,164,14,173'
						SourceResource='hud_ground_skin'
						Stretch='false'
					/>
					<Image
						Location='430,0'
						Name='right'
						PackSize='f,f'
						ScrollExtent='18,5'
						Size='18,5'
						SourceRect='294,164,311,173'
						SourceResource='hud_ground_skin'
						Stretch='false'
					/>
				</Composite>
				<Composite
					Location='0,135'
					MaximumSize='16384,44'
					MinimumSize='312,44'
					Name='lower'
					Orientation='Horizontal'
					PackSize='a,a'
					ScrollExtent='448,44'
					Size='448,44'
					SpacingType='Skinned'
				>
					<Image
						MaximumSize='211,44'
						MinimumSize='211,44'
						Name='left'
						PackSize='f,f'
						ScrollExtent='211,44'
						Size='211,44'
						SourceRect='0,108,211,312'
						SourceResource='hud_ground_skin'
						Stretch='false'
					/>
					<Image
						Location='274,0'
						MaximumSize='7,16384'
						MinimumSize='7,0'
						Name='fill'
						PackSize='f,f'
						ScrollExtent='7,63'
						Size='7,63'
						SourceRect='339,108,346,151'
						SourceResource='hud_ground_skin'
						Stretch='false'
						Visible='false'
					/>
					<Image
						Location='347,0'
						MaximumSize='101,44'
						MinimumSize='101,44'
						Name='right'
						PackSize='f,f'
						ScrollExtent='101,44'
						Size='101,44'
						SourceRect='211,108,312,151'
						SourceResource='hud_ground_skin'
					/>
				</Composite>
			</Composite>
			<Textbox
				BackgroundOpacity='0.80'
				CuiIoWinNoArrow='true'
				DropToParent='true'
				EditableUnicode='true'
				IME='true'
				Location='84,143'
				Name='input'
				OpacityRelativeMin='0.50'
				PackLocation='nfn,nff'
				PackSize='a,f'
				RStyleDefault='/Styles.window.mfd.mfd3.rs_default'
				ScrollExtent='496,29'
				Size='351,29'
				Style='/Styles.textbox.chat.Style_bold'
			>Pardon me for asking, sir, but what good are snub fighters going to be against that? </Textbox>
			<Text
				BackgroundColor='#FFFFFF'
				DropToParent='true'
				Font='bold_11'
				LocalText='CHANNEL'
				Location='18,144'
				MaximumSize='64,16'
				MaxLines='1'
				MinimumSize='64,16'
				Name='textChannel'
				PackLocation='nfn,nff'
				PackSize='a,a'
				PalText='header'
				ScrollExtent='64,16'
				Size='64,16'
				TextAlignment='Center'
				TextAlignmentVertical='Center'
				TextColor='#97FFFF'
				TextOpacityRelativeApply='true'
			>CHANNEL</Text>
		</Page>
