// 函数: sub_56dfc0
// 地址: 0x56dfc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
uint32_t esi = zx.d(arg2.w)
void* edi = arg1
int32_t eax

if (esi s>= 0x469)
    if (esi s<= 0x46a)
        eax = *(arg3 + 8)
        
        if (eax == 0xffffff41)
            int32_t eax_3 = sub_6ae470(arg3 + 0x2c, 0)
            sub_56e400(edi, esi, *(arg3 + 0xc), eax_3)
        else if (eax == 0xfffffffd)
            sub_56e340(arg1, esi)
            int32_t* eax_2
            eax_2.b = 1
            return eax_2
    else if (esi == 0x4d3 && *(arg3 + 8) == 0xfffffdd9)
        HWND hWnd = *(edi + 0xbc)
        
        if (hWnd != 0)
            arg1 = SendMessageW(hWnd, 0x130b, 0, 0)
        
        void* var_18_1 = arg1
        sub_56e4b0(edi)
        int32_t eax_1
        eax_1.b = 1
        return eax_1

eax.b = 1
return eax
