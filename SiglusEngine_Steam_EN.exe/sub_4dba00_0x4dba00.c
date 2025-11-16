// 函数: sub_4dba00
// 地址: 0x4dba00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg5 == 0)
    return 0x80004003

void* esi = arg1
HRESULT result = 0x1
*arg5 = 0
char var_41 = 0
int32_t* eax_2 = esi - 0x24
sub_4db140(eax_2)
HWND hWnd_2 = *(esi - 0x20)
void* eax_3 = esi - 0x20
HWND hWnd = arg3

if (hWnd_2 != 0 && hWnd_2 != hWnd)
    RedrawWindow(hWnd_2, nullptr, nullptr, 
        RDW_INVALIDATE | RDW_INTERNALPAINT | RDW_ERASE | RDW_UPDATENOW | RDW_FRAME)
    sub_4ddba0(esi - 0x24)
    hWnd = arg3

BOOL eax_4
int32_t edx
eax_4, edx = IsWindow(hWnd)

if (eax_4 != 0)
    void* eax_5 = esi - 0x20
    
    if (*eax_5 != arg3)
        int32_t eax_6
        eax_6, edx = sub_4dfbe0(esi - 0x24, arg3)
        var_41 = 1
        *(esi + 0xa4) ^= (eax_6 << 4 ^ *(esi + 0xa4)) & 0x10
        eax_5 = esi - 0x20
    
    if (*(esi + 0xa8) == 0)
        enum SYS_COLOR_INDEX nIndex
        
        if (sub_4da3f0(eax_5) == 0)
            nIndex = COLOR_WINDOW
        else
            nIndex = COLOR_BTNFACE
        
        uint32_t eax_11
        eax_11, edx = GetSysColor(nIndex)
        *(esi + 0xa8) = eax_11
    
    char var_42 = 0
    result = sub_4da5b0(&var_42, edx, arg2, arg5, &var_42, arg8)
    struct IStream ppstm = result
    
    if (result s>= 0)
        int32_t var_54_3 = arg4
        int32_t var_58_2 = 0
        int32_t* eax_15 = sub_4dd6b0(esi - 0x24, *arg5)
        result = eax_15
        ppstm = eax_15
    
    *(esi + 0x5c) = *arg6
    
    if (result s< 0)
    label_4dbda5:
        sub_4db140(eax_2)
        HWND hWnd_1 = *eax_3
        
        if (hWnd_1 != 0)
            RedrawWindow(hWnd_1, nullptr, nullptr, 
                RDW_INVALIDATE | RDW_INTERNALPAINT | RDW_ERASE | RDW_UPDATENOW | RDW_FRAME)
            
            if (result s< 0 && var_41 != 0)
                sub_4ddba0(eax_2)
    else
        int32_t* eax_17 = arg5
        int32_t* ecx_7 = *eax_17
        
        if (ecx_7 != 0 && arg7 != 0)
            sub_4d9830(ecx_7, arg7, esi + 0x5c, esi + 0x70)
            eax_17 = arg5
        
        if (var_42 != 0 && *eax_17 != 0)
            if ((GetWindowLongA(*(esi - 0x20), 0xfffffff0) & 0x300000) != 0)
                int32_t dwNewLong = GetWindowLongA(*eax_3, 0xfffffff0) & 0xffcfffff
                SetWindowLongA(*eax_3, 0xfffffff0, dwNewLong)
                SetWindowPos(*eax_3, nullptr, 0, 0, 0, 0, 0x37)
            else
                *(esi + 0xbc) |= 8
            
            int32_t* esi_2 = *arg5
            
            if (esi_2 != 0)
                (*(*esi_2 + 4))(esi_2)
            
            int16_t* eax_24 = arg2
            uint32_t ecx_8 = zx.d(*eax_24)
            void* dwBytes_1
            
            if (ecx_8 == 0x4d || ecx_8 == 0x6d)
                uint32_t ecx_9 = zx.d(eax_24[1])
                
                if (ecx_9 != 0x53 && ecx_9 != 0x73)
                    goto label_4dbcf3
                
                uint32_t ecx_10 = zx.d(eax_24[2])
                
                if (ecx_10 != 0x48 && ecx_10 != 0x68)
                    goto label_4dbcf3
                
                uint32_t ecx_11 = zx.d(eax_24[3])
                
                if (ecx_11 != 0x54 && ecx_11 != 0x74)
                    goto label_4dbcf3
                
                uint32_t ecx_12 = zx.d(eax_24[4])
                
                if (ecx_12 != 0x4d && ecx_12 != 0x6d)
                    goto label_4dbcf3
                
                uint32_t ecx_13 = zx.d(eax_24[5])
                
                if ((ecx_13 != 0x4c && ecx_13 != 0x6c) || eax_24[6] != 0x3a)
                    goto label_4dbcf3
                
                void* dwBytes = (sub_4d9240(eax_24) << 1) + 0xfffffff2
                dwBytes_1 = dwBytes
                HGLOBAL eax_26 = GlobalAlloc(GHND, dwBytes)
                
                if (eax_26 == 0)
                    result = E_OUTOFMEMORY
                else
                    ppstm = 0
                    char* eax_27 = GlobalLock(eax_26)
                    void* dwBytes_7 = dwBytes_1
                    sub_4d9360(_memcpy_s(eax_27, dwBytes_7, &arg2[7], dwBytes_7))
                    GlobalUnlock(eax_26)
                    result = CreateStreamOnHGlobal(eax_26, 1, &ppstm)
                    
                    if (result s>= 0)
                        int32_t eax_30 = *esi_2
                        dwBytes_1 = nullptr
                        result = (*eax_30)(esi_2, 0x61d6c0, &dwBytes_1)
                        
                        if (result s>= 0)
                            void* dwBytes_2 = dwBytes_1
                            result = (*(*dwBytes_2 + 0x14))(dwBytes_2, ppstm)
                        
                        void* dwBytes_3 = dwBytes_1
                        
                        if (dwBytes_3 != 0)
                            (*(*dwBytes_3 + 8))(dwBytes_3)
                    
                    struct IStream ppstm_1 = ppstm
                    
                    if (ppstm_1 != 0)
                        (*(*ppstm_1 + 8))(ppstm_1)
            else
            label_4dbcf3:
                int32_t eax_33 = *esi_2
                dwBytes_1 = nullptr
                (*eax_33)(esi_2, 0x61d3f0, &dwBytes_1)
                
                if (dwBytes_1 != 0)
                    VARIANT pvarg
                    __builtin_memset(&pvarg, 0, 0x10)
                    VariantInit(&pvarg)
                    int16_t pvarg_1 = 0
                    sub_4d94c0(&pvarg_1, arg2)
                    void* dwBytes_4 = dwBytes_1
                    (*(*dwBytes_4 + 0xa4))(dwBytes_4, 0xffffffff)
                    void* dwBytes_5 = dwBytes_1
                    (*(*dwBytes_5 + 0xd0))(dwBytes_5, &pvarg_1, &pvarg, &pvarg, &pvarg, &pvarg)
                    VariantClear(&pvarg_1)
                    VariantClear(&pvarg)
                    void* dwBytes_6 = dwBytes_1
                    
                    if (dwBytes_6 != 0)
                        (*(*dwBytes_6 + 8))(dwBytes_6)
                    
                    result = ppstm
            
            if (esi_2 != 0)
                (*(*esi_2 + 8))(esi_2)
            
            esi = arg1
        
        if (result s< 0 || *(esi + 0x3c) == 0)
            goto label_4dbda5

return result
