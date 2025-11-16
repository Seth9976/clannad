// 函数: sub_670c90
// 地址: 0x670c90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c69e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_bac458
sub_62f9b0(ecx, ecx[0x57] - 0x158)
void* esi = data_bac458
sub_54ae40(*(esi + 0x15c) - 0xcc)
*(esi + 0x15c) -= 0x158
int32_t* esi_2 = data_bac46c + 0xa4
int32_t i = 0
int32_t eax_5
int32_t edx
edx:eax_5 = muls.dp.d(0x30c30c31, esi_2[1] - *esi_2)
int32_t edx_1 = edx s>> 6

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    int32_t edi_1 = 0
    int32_t edx_3
    
    do
        void* esi_4 = *esi_2 + edi_1
        HWND hWnd = *(esi_4 + 0xc0)
        
        if (hWnd != 0 && (GetWindowLongW(hWnd, 0xfffffff0) & 0x10000000) s> 0)
            ShowWindow(*(esi_4 + 0xc0), SW_HIDE)
        
        HWND hWnd_1 = *(esi_4 + 0xc0)
        
        if (hWnd_1 != 0)
            DestroyWindow(hWnd_1)
        
        HGDIOBJ ho = *(esi_4 + 0xb8)
        
        if (ho != 0)
            DeleteObject(ho)
            *(esi_4 + 0xb8) = 0
        
        i += 1
        *(esi_4 + 0xa0) = 0
        edi_1 += 0x150
        esi_2 = data_bac46c + 0xa4
        int32_t eax_10
        int32_t edx_2
        edx_2:eax_10 = muls.dp.d(0x30c30c31, esi_2[1] - *esi_2)
        edx_3 = edx_2 s>> 6
    while (i s< (edx_3 u>> 0x1f) + edx_3)

void* esi_6 = data_bac468
int32_t ecx_7 = *(esi_6 + 0xd4)
int32_t eax_15 = *(data_bac510 + 0x10bd4)

if (ecx_7 s>= 0)
    int32_t* ecx_9 = ecx_7 * 0x15c + *(esi_6 + 0xc8)
    
    if (eax_15 s> 0)
        int32_t* var_48_3 = ecx_9
        sub_6defc0(ecx_9, eax_15)
    else
        sub_6de670(ecx_9, 1)

bool cond:0 = *(esi_6 + 0xb4) u< 8
void* eax_16 = esi_6 + 0xa0
*(eax_16 + 0x10) = 0

if (not(cond:0))
    eax_16 = *eax_16

*eax_16 = 0
int32_t var_48_4 = 0
*(esi_6 + 0xc4) = 0
sub_6defc0(*(data_bac468 + 0x178), 0x64)
sub_601a10(data_bac468 + 0x194, 0x64)
int32_t* esi_8 = data_bac468 + 0x2f0
int32_t i_3 = 0
int32_t i_1 = esi_8[1] - *esi_8

if (i_1 s/ 0x250 s> 0)
    void* edi_2 = nullptr
    
    do
        int32_t esi_9 = *esi_8
        int32_t i_2 = i_1
        sub_6defc0(edi_2 + 0xf4 + esi_9, 0x64)
        i_3 += 1
        edi_2 += 0x250
        *(esi_9 + edi_2 - 0x164) = 0
        esi_8 = data_bac468 + 0x2f0
        i_1 = i_3
    while (i_1 s< (esi_8[1] - *esi_8) s/ 0x250)

int32_t var_48_5 = 0x7fffffff
int32_t var_4c_4 = 0x7fffffff
int32_t var_34
__builtin_memset(&var_34, 0, 0x20)
void* eax_25 = data_bac510
sub_6a65f0(2, 1, *(eax_25 + 0x10bd0), *(eax_25 + 0x10bd4), 0, nullptr, &var_34, 1, 0, i_1, 0, 
    0x80000000, 0x80000000)
*(data_bac4a0 + 0x1a4) = 1
void* result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
