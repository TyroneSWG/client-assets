	<Page
		MinimumSize='1000,745'
		Name='HothLoading'
		PackLocation='cfc,cfc'
		PackSize='a,a'
		ScrollExtent='1024,768'
		Size='1024,768'
		Visible='false'
	>
		<Data
			backbutton='all.buttonprev'
			buttonEsc='all.buttonEsc'
			default='all.hoth_loading_screen'
			Name='CodeData'
			Pie='all.pie'
			screenshot='dummyimage'
			screenshotname='all.textbg.screenshotname'
			Text='all.textbg.text'
			textProgress='all.textprogress'
		/>
		<Page
			BackgroundColor='#FFFFFF'
			BackgroundOpacity='1.00'
			loading_screen.visible='false'
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
				Location='710,587'
				Name='pie'
				PackLocation='fff,fff'
				PackSize='f,f'
				PieAngleStart='1.00'
				PieColor='#2FD7D7'
				PieValue='0.75'
				ScrollExtent='160,150'
				Size='160,150'
				Style='/Styles.space.Pie.Res.style'
			/>
			<Text
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
				TextCapital='true'
				TextColor='#24EFFF'
			></Text>
			<Button
				imagebottom='screenshot.shot_b'
				imagetop='screenshot.shot_a'
				LocalText='[@EXIT]'
				Location='69,716'
				Name='buttonPrev'
				PackLocation='nfn,nfn'
				PackSize='p,f'
				ScrollExtent='125,29'
				Size='125,29'
				Style='/Styles.space.buttonhoth.style'
				TextCapital='true'
			>@exit</Button>
			<Page
				BackgroundTint='#1CFFFF'
				Location='580,86'
				Name='textbg'
				PackLocation='fff,nfn'
				PackSize='p,a'
				PalBgTint='line1'
				RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
				ScrollExtent='421,481'
				Size='421,481'
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
					ScrollExtent='416,18'
					Size='416,18'
					TextAlignment='Right'
					TextCapital='true'
					TextColor='#24EFFF'
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
					ScrollExtent='401,452'
					Size='401,452'
					TextColor='#24EFFF'
				>Description of this attribute</Text>
				<Scrollbar
					BackgroundColor='#FFFFFF'
					Control='text'
					Enabled='false'
					Location='408,22'
					Name='scroll'
					OpacityRelativeMin='0.50'
					PackLocation='fff,nfn'
					PackSize='f,a'
					ScrollExtent='13,452'
					Size='13,452'
					Style='/Styles.space.scrollbar.vHudHoth.style'
				>
				</Scrollbar>
			</Page>
			<Page
				BackgroundOpacity='1.00'
				MinimumSize='1000,745'
				Name='hoth_loading_screen'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				RStyleDefault='rs_default'
				ScrollExtent='1024,768'
				Size='1024,768'
				UserResizable='true'
			>
				<Image
					Name='nw'
					ScrollExtent='512,512'
					Size='512,512'
					SourceRect='0,0,512,512'
					SourceResource='loading/hoth/ui_hoth_loading_screen_nw'
				/>
				<Image
					Location='512,0'
					Name='ne'
					ScrollExtent='512,512'
					Size='512,512'
					SourceRect='0,0,512,512'
					SourceResource='loading/hoth/ui_hoth_loading_screen_ne'
				/>
				<Image
					Location='0,512'
					Name='sw'
					ScrollExtent='512,256'
					Size='512,256'
					SourceRect='0,0,512,256'
					SourceResource='loading/hoth/ui_hoth_loading_screen_sw'
				/>
				<Image
					Location='512,512'
					Name='se'
					ScrollExtent='512,256'
					Size='512,256'
					SourceRect='0,0,512,256'
					SourceResource='loading/hoth/ui_hoth_loading_screen_se'
				/>
			</Page>
			<Button
				imagebottom='screenshot.shot_b'
				imagetop='screenshot.shot_a'
				IsCancelButton='true'
				LocalText='BACK'
				Location='68,716'
				Name='buttonEsc'
				Opacity='0.00'
				PackLocation='nfn,nfn'
				PackSize='p,f'
				ScrollExtent='125,29'
				Size='125,29'
				Style='/Styles.space.buttonhoth.style'
				TextCapital='true'
				Visible='false'
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
		<Image
			AbsorbsInput='false'
			Name='dummyimage'
			Visible='false'
		/>
	</Page>