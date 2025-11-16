// 函数: sub_683ad0
// 地址: 0x683ad0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* edi = data_bac4d0
int32_t esi = 0
int32_t result = edi[1] - *edi

if ((result & 0xfffffffc) s> 0)
    do
        void* ebx_1 = *(*edi + (esi << 2))
        
        if (*(ebx_1 + 4) != 0)
            HWND hWnd = *(ebx_1 + 4)
            
            if (hWnd != 0)
                BOOL eax_2
                eax_2.b = IsWindowEnabled(hWnd) != 0
                
                if (eax_2.b != arg1)
                    EnableWindow(*(ebx_1 + 4), zx.d(arg1))
        
        esi += 1
        result = (edi[1] - *edi) s>> 2
    while (esi s< result)

return result
