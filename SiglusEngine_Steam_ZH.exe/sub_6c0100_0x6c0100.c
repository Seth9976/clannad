// 函数: sub_6c0100
// 地址: 0x6c0100
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1

if (arg2 != 0)
    void* var_3c_1 = arg1
    wchar16 const* const var_40_1 = u"this"
    *(arg1 + 4) = arg2
    SetPropW()
    int32_t var_3c_2 = 0xfffffff8
    wchar16 const* const var_3c_3 = u"this"
    HANDLE eax_3 = GetPropW(GetWindowLongW(*(arg1 + 4), 0xfffffff8), u"this")
    
    if (eax_3 != 0)
        HWND hWnd = *(arg1 + 4)
        RECT rect
        __builtin_memset(&rect, 0, 0x10)
        GetWindowRect(hWnd, &rect)
        int32_t var_2c[0x4]
        *(arg1 + 0x48) = *sub_6c1cb0(eax_3, &var_2c, rect.bottom, arg2)
    
    int32_t var_3c_5 = 4
    bool ecx_1 = GetWindowLongW(*(arg1 + 4), 0x4) != 0
    *(arg1 + 0x24) = ecx_1
    int32_t eax_6
    eax_6.b = ecx_1 != 0
    
    if (GetWindowLongW(*(arg1 + 4), (eax_6 << 3) + 0xfffffffc) != sub_6bfec0)
        LRESULT (__stdcall* var_3c_7)(int32_t arg1, uint32_t arg2, WPARAM arg3, int32_t* arg4) =
            sub_6bfec0
        int32_t eax_8
        eax_8.b = *(arg1 + 0x24) != 0
        void* var_40_6 = (eax_8 << 3) + 0xfffffffc
        int32_t var_44_2 = *(arg1 + 4)
        *(arg1 + 0x20) = SetWindowLongW()

int32_t result
result.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
