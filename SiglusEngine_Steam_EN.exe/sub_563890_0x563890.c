// 函数: sub_563890
// 地址: 0x563890
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result

if (arg2 s< 0x10)
    int32_t var_48 = 0
    int32_t eax_2 = arg2 << 5
    bool cond:0_1 = *(eax_2 + &data_976b50) == 0
    int32_t var_38 = 0
    int32_t var_40_1 = eax_2
    int32_t ebx_4
    uint32_t h_1
    int32_t SrcWidth
    
    if (cond:0_1)
        ebx_4 = data_20cc8d0
        SrcWidth = data_70300c
        h_1 = data_7030dc
    else
        h_1 = *(eax_2 + &data_976b5c)
        SrcWidth = *(eax_2 + &data_976b58)
        
        if (*((arg2 << 2) + &data_20cc8e0) == 0)
            int32_t ebx_2 = h_1 * SrcWidth
            char* eax_4 = *(eax_2 + &data_976b54) + 3
            int32_t ecx = 0
            *((arg2 << 2) + &data_20cc8e0) = 1
            
            if (ebx_2 s> 0)
                do
                    if (*eax_4 != 0xff)
                        *((arg2 << 2) + &data_20cc8e0) = 2
                        break
                    
                    ecx += 1
                    eax_4 = &eax_4[4]
                while (ecx s< ebx_2)
            
            eax_2 = var_40_1
        
        if (*((arg2 << 2) + &data_20cc8e0) != 1)
            int32_t eax_7 = (h_1 * SrcWidth) << 2
            sub_4d6960(eax_7, &var_38, &var_48, eax_7, "AVG_GRP_STATUS_TMP1")
            uint32_t h_2 = h_1
            int32_t ebx_5 = 0
            
            if (h_2 s> 0)
                do
                    for (int32_t i = sx.d(ebx_5.b) & 8; i s< SrcWidth; i += 0x10)
                        int32_t var_58_1 = 0
                        int32_t var_5c_2 = 0xff
                        int32_t var_60_1 = 0
                        int32_t var_64_1 = 0
                        int32_t var_88_1 = 0
                        int32_t var_8c_1 = 0
                        int32_t var_90_1 = 0
                        int32_t var_94_1 = 0
                        sub_586580(i + 7, SrcWidth, var_38, h_2, i, ebx_5, i + 7, ebx_5 + 7, 0x40, 
                            0x40, 0x40, 0xffffffff, 0xff, 0xffffffff, 0xffffffff, h_2, 0, 0, 0, 0)
                        h_2 = h_1
                    
                    ebx_5 += 8
                while (ebx_5 s< h_2)
            
            int32_t var_58_2 = 0
            int32_t var_5c_3 = 0xff
            int32_t var_60_2 = 0
            int32_t var_64_2 = 0
            int32_t var_68_1 = 0
            ebx_4 = var_38
            sub_584980(var_40_1, SrcWidth, ebx_4, h_2, *(var_40_1 + &data_976b54), SrcWidth, h_2, 
                0, 0, 1, 0, 0, 0xffffffff, 0xff, 0xffffffff, 0xffffffff, h_2, 0, 0, 0, 0, 0, 0, 0, 
                0, 0, 0, 0, 0, 0, 0, nullptr)
        else
            ebx_4 = *(eax_2 + &data_976b54)
    
    BITMAPINFO lpbmi
    lpbmi.bmiHeader.biSize = 0x28
    lpbmi.bmiHeader.biWidth = SrcWidth
    lpbmi.bmiHeader.biPlanes = 1
    lpbmi.bmiHeader.biBitCount = 0x20
    lpbmi.bmiHeader.biCompression = 0
    lpbmi.bmiHeader.biXPelsPerMeter = 0
    lpbmi.bmiHeader.biYPelsPerMeter = 0
    lpbmi.bmiHeader.biClrUsed = 0
    lpbmi.bmiHeader.biClrImportant = 0
    
    if (arg8 == 0)
        lpbmi.bmiHeader.biHeight = neg.d(h_1)
        lpbmi.bmiHeader.biSizeImage = (h_1 * SrcWidth) << 2
        StretchDIBits(arg3, arg4, arg5, arg6, arg7, 0, 0, SrcWidth, h_1, ebx_4, &lpbmi, 
            DIB_RGB_COLORS, SRCCOPY)
    else
        uint32_t w = SrcWidth
        uint32_t h = h_1
        
        if (arg6 s< SrcWidth)
            w = arg6
        
        if (arg7 s< h_1)
            h = arg7
        
        lpbmi.bmiHeader.biHeight = neg.d(h_1)
        lpbmi.bmiHeader.biSizeImage = (h_1 * SrcWidth) << 2
        SetDIBitsToDevice(arg3, arg4, arg5, w, h, data_20cc8d4, 0, data_20cc8d8 - h_1 + h, h_1, 
            ebx_4, &lpbmi, DIB_RGB_COLORS)
    
    result = sub_4d6c40(&var_48, &var_38)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
