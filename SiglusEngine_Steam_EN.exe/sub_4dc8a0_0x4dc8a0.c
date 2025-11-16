// 函数: sub_4dc8a0
// 地址: 0x4dc8a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* var_58 = arg2
enum WIN32_ERROR result

if (arg2 != 0)
    *arg2 = 0
    
    if (*(arg1 + 0x8c) != 0)
        goto label_4dca62
    
    int32_t* i_1 = nullptr
    int32_t* i_3 = nullptr
    HGDIOBJ h = GetStockObject(DEFAULT_GUI_FONT)
    
    if (h != 0)
    label_4dc908:
        int32_t pv
        GetObjectA(h, 0x3c, &pv)
        uint8_t var_28
        uint8_t* ecx_1 = &var_28
        struct FONTDESC fontDesc
        fontDesc.cbSizeofstruct = 0x20
        uint8_t i
        
        do
            i = *ecx_1
            ecx_1 = &ecx_1[1]
        while (i != 0)
        void var_27
        void* eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(ecx_1 - &var_27 + 1)
        void* edi_2 = eax_4 * 2
        int32_t edx_3 = adc.d(edx_1 << 1 | eax_4 u>> 0xffffffe1, 0, edi_2 u>= 0x80000000)
        int32_t var_50_1 = edx_3
        
        if (edx_3 != 0 || edi_2 - 0x80000000 u> 0xffffffff)
            fontDesc.lpstrName = 0
        else
            char eax_7
            
            if (edi_2 s<= 0x400)
                eax_7 = sub_4d9150(edi_2)
            
            int32_t* eax_9
            
            if (edi_2 s> 0x400 || eax_7 == 0)
                eax_9 = sub_4ded10(&i_3, edi_2)
                i_1 = i_3
            else
                __alloca_probe_16(edi_2)
                int32_t __saved_edi
                eax_9 = &__saved_edi
            
            fontDesc.lpstrName = sub_4d9200(eax_9, &var_28, edi_2 u>> 1, 3)
        
        int32_t pv_1 = pv
        int16_t var_34
        fontDesc.sWeight = var_34
        char var_2d
        fontDesc.sCharset = zx.w(var_2d)
        char var_30
        fontDesc.fItalic = zx.d(var_30)
        char var_2f
        fontDesc.fUnderline = zx.d(var_2f)
        char var_2e
        fontDesc.fStrikethrough = zx.d(var_2e)
        
        if (pv_1 s< 0)
            pv_1 = neg.d(pv_1)
        
        HWND hWnd_1 = *(arg1 - 0x48)
        HWND hWnd
        HDC hDC
        int32_t esi_1
        
        if (hWnd_1 != 0)
            HDC hdc = GetDC(hWnd_1)
            
            if (hdc == 0)
                goto label_4dc9f9
            
            hDC = hdc
            esi_1 = GetDeviceCaps(hdc, 0x5a)
            hWnd = *(arg1 - 0x48)
            goto label_4dca2c
        
        HDC hdc_1 = GetDC(GetDesktopWindow())
        
        if (hdc_1 == 0)
            goto label_4dc9f9
        
        hDC = hdc_1
        esi_1 = GetDeviceCaps(hdc_1, 0x5a)
        hWnd = GetDesktopWindow()
    label_4dca2c:
        ReleaseDC(hWnd, hDC)
        fontDesc.cySize..__offset(0x4).d = 0
        fontDesc.cySize..d = divs.dp.d(sx.q(pv_1 * 0xafc80), esi_1)
        OleCreateFontIndirect(&fontDesc, &data_61d3c0, arg1 + 0x8c)
        sub_4ded60(&i_3)
    label_4dca62:
        *var_58 = *(arg1 + 0x8c)
        int32_t* ecx_8 = *(arg1 + 0x8c)
        
        if (ecx_8 != 0)
            (*(*ecx_8 + 4))(ecx_8)
        
        result = NO_ERROR
    else
        h = GetStockObject(SYSTEM_FONT)
        
        if (h != 0)
            goto label_4dc908
        
    label_4dc9f9:
        enum WIN32_ERROR result_1 = sub_4d9430()
        
        while (i_1 != 0)
            int32_t* i_2 = i_1
            i_1 = *i_1
            _free(i_2)
        
        result = result_1
else
    result = 0x80004003

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
