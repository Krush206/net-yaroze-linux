OUTPUT_FORMAT("ecoff-littlemips", "ecoff-bigmips", "ecoff-littlemips")
SEARCH_DIR(/usr/local/mips-sony-psx/lib)
ENTRY(_start)
SECTIONS {
	. = 0x80100000 ;	/* TEXT_START_ADDR */
	.text : {
		_ftext = . ;
		*(.init)
		eprol = . ;
		*(.text)
		PROVIDE(__runtime_reloc_start = .) ;
		*(.rel.sdata)
		PROVIDE(__runtime_reloc_stop = .) ;
		*(.fini)
		etext = . ;
		_etext = . ;
	}
	. = . ;			/* DATA_ADDR */
	.rdata : {
		*(.rdata)
	}
	_fdata = ALIGN(16) ;
	.data : {
		*(.data)
		CONSTRUCTORS	/* CONTRUCTORS */
	}
	_gp = ALIGN(16)+0x8000 ;
	.lit8 : {
		*(.lit8)
	}
	.lit4 : {
		*(.lit4)
	}
	.sdata : {
		*(.sdata)
	}
	edata = . ;
	_edata = . ;
	_fbss = . ;
	.sbss : {
		*(.sbss)
		*(.scommon)
	}
	.bss : { 
		*(.bss)
		*(COMMON)
	}
	end = . ;
	_end = . ;
}
