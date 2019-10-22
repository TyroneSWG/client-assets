	<Page
		MinimumSize='1000,745'
		Name='LargeLoading'
		PackLocation='cfc,cfc'
		PackSize='a,a'
		ScrollExtent='1024,768'
		Size='1024,768'
		Visible='false'
	>
		<Data
			backbutton='all.buttonprev'
			buttonEsc='all.buttonEsc'
			default='all.loading_screen'
			mustafar='all.toow_loading_screen'
			Name='CodeData'
			Pie='all.pie'
			screenshot='all.screenshot.shot'
			screenshotname='all.textbg.screenshotname'
			Text='all.textbg.text'
			textProgress='all.textprogress'
		/>
		<Page
			BackgroundColor='#FFFFFF'
			BackgroundOpacity='1.00'
			BackgroundTint='#F4D3B9'
			Location='-26,-23'
			MaximumSize='1064,814'
			MinimumSize='1064,814'
			Name='corners'
			PackLocation='cfc,cfc'
			PackSize='p,p'
			RStyleDefault='/Styles.space.boxes.generic7.rs_default'
			ScrollExtent='1064,814'
			Size='1064,814'
		/>
		<Page
			BackgroundColor='#FFFFFF'
			BackgroundOpacity='1.00'
			MinimumSize='1000,745'
			Name='all'
			PackLocation='cfc,cfc'
			PackSize='f,f'
			RStyleDefault='/Styles.space.boxes.generic7.rs_default'
			ScrollExtent='1024,768'
			Size='1024,768'
			UserResizable='true'
		>
			<Pie
				BackgroundColor='#FFFFFF'
				Location='698,595'
				Name='pie'
				PackLocation='fff,fff'
				PackSize='f,f'
				PieAngleStart='1.00'
				PieColor='#F4D3B9'
				PieValue='0.75'
				ScrollExtent='130,130'
				Size='130,130'
				Style='/Styles.space.Pie.Res.style'
			/>
			<Text
				Color='#F4D3B9'
				ColorCarat='#FFFFFF'
				ColorSelection='#FFFFFF'
				Enabled='false'
				Font='bold_15'
				Location='312,743'
				Name='textprogress'
				PackLocation='cfc,fff'
				PackSize='p,f'
				ScrollExtent='401,18'
				Size='401,18'
				TextAlignment='Center'
			></Text>
			<Button
				imagebottom='screenshot.shot_b'
				imagetop='screenshot.shot_a'
				LocalText='[@EXIT]'
				Location='50,736'
				Name='buttonPrev'
				PackLocation='nfn,nfn'
				PackSize='p,f'
				ScrollExtent='125,29'
				Size='125,29'
				Style='/Styles.space.buttontemp_color.style'
				TextCapital='true'
				Visible='false'
			>@exit</Button>
			<Page
				BackgroundTint='#1CFFFF'
				Location='582,144'
				Name='textbg'
				PackLocation='fff,nfn'
				PackSize='p,a'
				PalBgTint='line1'
				RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
				ScrollExtent='421,449'
				Size='421,449'
			>
				<Text
					ColorCarat='#FFFFFF'
					ColorSelection='#FFFFFF'
					Enabled='false'
					Font='bold_15'
					LocalText='XXX SCREENSHOT NAME'
					Location='5,0'
					Name='screenshotName'
					PackLocation='nfn,nfn'
					PackSize='p,f'
					ScrollExtent='401,18'
					Size='401,18'
					TextAlignment='Right'
					TextCapital='true'
					TextColor='#F4D3B9'
				>xxx ScreenShot Name</Text>
				<Text
					ColorCarat='#FFFFFF'
					Enabled='false'
					Font='bold_13'
					LocalText='Description of this attribute'
					Location='5,22'
					Name='text'
					PackLocation='nfn,fff'
					PackSize='f,a'
					RStyleDefault='rs_default'
					ScrollExtent='401,420'
					Size='401,420'
					TextColor='#F4D3B9'
				>Description of this attribute</Text>
				<Scrollbar
					BackgroundColor='#FFFFFF'
					Color='#F4D3B9'
					Control='text'
					Enabled='false'
					Location='408,22'
					Name='scroll'
					OpacityRelativeMin='0.50'
					PackLocation='fff,nfn'
					PackSize='f,a'
					ScrollExtent='13,420'
					Size='13,420'
					Style='/Styles.space.scrollbar.vHudthinner.style'
					Visible='false'
				>
				</Scrollbar>
			</Page>
			<Page
				BackgroundOpacity='1.00'
				MinimumSize='1000,745'
				Name='toow_loading_screen'
				OnShow='parent.loading_screen.visible=false'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				RStyleDefault='rs_default'
				ScrollExtent='1024,768'
				Size='1024,768'
				UserResizable='true'
				Visible='false'
			>
				<Image
					Name='nw'
					ScrollExtent='512,512'
					Size='512,512'
					SourceRect='0,0,512,512'
					SourceResource='loading/toow/ui_toow_loading_screen_nw'
				/>
				<Image
					Location='512,0'
					Name='ne'
					ScrollExtent='512,512'
					Size='512,512'
					SourceRect='0,0,512,512'
					SourceResource='loading/toow/ui_toow_loading_screen_ne'
				/>
				<Image
					Location='0,512'
					Name='sw'
					ScrollExtent='512,256'
					Size='512,256'
					SourceRect='0,0,512,256'
					SourceResource='loading/toow/ui_toow_loading_screen_sw'
				/>
				<Image
					Location='512,512'
					Name='se'
					ScrollExtent='512,256'
					Size='512,256'
					SourceRect='0,0,512,256'
					SourceResource='loading/toow/ui_toow_loading_screen_se'
				/>
			</Page>
			<Page
				MinimumSize='1000,745'
				Name='loading_screen'
				OnShow='parent.toow_loading_screen.visible=false'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='1024,768'
				Size='1024,768'
				UserResizable='true'
			>
				<Page
					BackgroundColor='#FFFFFF'
					BackgroundTint='#00D6FB'
					Location='632,574'
					MaximumSize='16324,16324'
					Name='land'
					PackLocation='fff,fff'
					PackSize='f,f'
					PalBgTint='back1'
					RStyleDefault='/Styles.space.arrow.rs_default'
					ScrollExtent='259,131'
					Size='259,131'
					Visible='false'
				>
					<Image
						Color='#1CFFFF'
						Location='109,69'
						Name='center'
						PackLocation='nfn,cfc'
						PackSize='f,f'
						PalColor='line1'
						Rotation='0.50'
						ScrollExtent='47,39'
						Size='47,39'
						SourceRect='268,408,307,441'
						SourceResource='ui_shader_add_:ui_space_hud'
					/>
					<Image
						Color='#1CFFFF'
						Location='3,91'
						Name='downLeft'
						PackLocation='nfn,cfc'
						PackSize='f,f'
						PalColor='line1'
						Rotation='0.50'
						ScrollExtent='42,30'
						Size='42,30'
						SourceRect='236,388,265,411'
						SourceResource='ui_space_hud'
					/>
					<Image
						Color='#1CFFFF'
						Location='214,91'
						Name='downRight'
						PackLocation='fff,cfc'
						PackSize='f,f'
						PalColor='line1'
						Rotation='0.50'
						ScrollExtent='42,30'
						Size='42,30'
						SourceRect='236,388,265,411'
						SourceResource='ui_space_hud'
					/>
				</Page>
				<Page
					BackgroundColor='#FFFFFF'
					Location='632,574'
					MaximumSize='16324,16324'
					Name='launch'
					PackLocation='fff,fff'
					PackSize='f,f'
					RStyleDefault='/Styles.space.arrow.rs_default'
					ScrollExtent='259,131'
					Size='259,131'
					Visible='false'
				>
					<Image
						Color='#1CFFFF'
						Location='108,68'
						Name='center'
						PackLocation='nfn,cfc'
						PackSize='f,f'
						PalColor='line1'
						ScrollExtent='47,39'
						Size='47,39'
						SourceRect='268,408,307,441'
						SourceResource='ui_shader_add_:ui_space_hud'
					/>
					<Image
						Color='#1CFFFF'
						Location='1,49'
						Name='upLeft'
						PackLocation='nfn,cfc'
						PackSize='f,f'
						PalColor='line1'
						ScrollExtent='42,30'
						Size='42,30'
						SourceRect='236,388,265,411'
						SourceResource='ui_shader_add_:ui_space_hud'
					/>
					<Image
						Color='#1CFFFF'
						Location='216,49'
						Name='upRight'
						PackLocation='fff,cfc'
						PackSize='f,f'
						PalColor='line1'
						ScrollExtent='42,30'
						Size='42,30'
						SourceRect='236,388,265,411'
						SourceResource='ui_shader_add_:ui_space_hud'
					/>
				</Page>
				<Page
					BackgroundColor='#FFFFFF'
					MaximumSize='1024,768'
					MinimumSize='1024,768'
					Name='back'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					ScrollExtent='1024,768'
					Size='1024,768'
				>
					<Image
						Location='12,522'
						Name='swg_tcg_set8_logo'
						ScrollExtent='256,237'
						Size='256,237'
						SourceRect='0,0,256,237'
						SourceResource='swg_tcg_set8_logo'
						Visible='false'
					/>
					<Image
						Location='4,4'
						Name='esb_30_logo'
						ScrollExtent='171,256'
						Size='171,256'
						SourceRect='0,0,342,512'
						SourceResource='esb_30_logo'
						Visible='false'
					/>
					<Image
						Color='#F4D3B9'
						Name='full'
						ScrollExtent='1024,768'
						Size='1024,768'
						SourceRect='0,0,1024,768'
						SourceResource='loading/large/large_load_back_grey'
					/>
				</Page>
			</Page>
			<Page
				BackgroundTint='#000000'
				Location='35,42'
				MinimumSize='512,512'
				Name='screenShot'
				PackLocation='nfn,nfn'
				PackSize='f,f'
				ScrollExtent='700,700'
				Size='700,700'
				UserResizable='true'
			>
				<Image
					Name='shot'
					PackLocation='nfn,nfn'
					PackSize='f,f'
					ScrollExtent='700,700'
					Size='700,700'
					SourceRect='0,0,512,512'
					SourceResource='loading/large/large_load_lando'
				/>
			</Page>
			<Button
				imagebottom='screenshot.shot_b'
				imagetop='screenshot.shot_a'
				IsCancelButton='true'
				LocalText='BACK'
				Location='50,736'
				Name='buttonEsc'
				Opacity='0.00'
				PackLocation='nfn,nfn'
				PackSize='p,f'
				ScrollExtent='125,29'
				Size='125,29'
				Style='/Styles.space.buttontemp_color.style'
				TextCapital='true'
			>Back</Button>
		</Page>
		<Page
			BackgroundOpacity='1.00'
			BackgroundTint='#000000'
			MinimumSize='1000,745'
			Name='back_black'
			PackLocation='nfn,nfn'
			PackSize='a,a'
			ScrollExtent='1024,768'
			Size='1024,768'
		/>
	</Page>