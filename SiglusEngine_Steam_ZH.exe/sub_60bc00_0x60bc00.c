// 函数: sub_60bc00
// 地址: 0x60bc00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be606
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_b4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_6c1b50(arg1, data_bac510 + 0x1c)
int32_t* eax_5 = data_bac4b4
HWND hWnd_1 = *(arg1 + 4)

if (hWnd_1 != 0)
    SetClassLongW(hWnd_1, 0xfffffff2, *eax_5)
    eax_5 = data_bac4b4

HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    SetClassLongW(hWnd, 0xffffffde, eax_5[1])

int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e720(&var_44, u"edt_info", 8)
int32_t var_8_1 = 0
HWND hDlg_2 = *(arg1 + 4)

if (arg1 + 0xa0 != &var_44)
    sub_52e3c0(arg1 + 0xa0, &var_44, 0, 0xffffffff)

*(arg1 + 0xf4) = 5
*(arg1 + 0xf8) = 0
HWND eax_6 = GetDlgItem(hDlg_2, 0x4e9)
*(arg1 + 0x9c) = eax_6
sub_6c0100(arg1 + 0x98, eax_6)
int32_t hDlg_3 = arg1 + 0x98
sub_530ba0(arg1 + 0x64, &hDlg_3)
int32_t var_8_2 = 0xffffffff

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t var_48 = 7
int32_t var_4c = 0
int16_t var_5c = 0
sub_52e720(&var_5c, u"btn_clipboard", 0xd)
int32_t var_8_3 = 1
int32_t hDlg = *(arg1 + 4)
hDlg_3 = hDlg

if (arg1 + 0x130 != &var_5c)
    sub_52e3c0(arg1 + 0x130, &var_5c, 0, 0xffffffff)
    hDlg = hDlg_3

*(arg1 + 0x184) = 2
*(arg1 + 0x188) = 0
HWND eax_7 = GetDlgItem(hDlg, 0x4e8)
*(arg1 + 0x12c) = eax_7
sub_6c0100(arg1 + 0x128, eax_7)
hDlg_3 = arg1 + 0x128
sub_530ba0(arg1 + 0x64, &hDlg_3)
int32_t var_8_4 = 0xffffffff

if (var_48 u>= 8)
    j__free(var_5c.d)

int32_t var_60 = 7
int32_t var_64 = 0
int16_t var_74 = 0
sub_52e720(&var_74, u"btn_close", 9)
int32_t var_8_5 = 2
int32_t hDlg_1 = *(arg1 + 4)
hDlg_3 = hDlg_1

if (arg1 + 0x1c0 != &var_74)
    sub_52e3c0(arg1 + 0x1c0, &var_74, 0, 0xffffffff)
    hDlg_1 = hDlg_3

*(arg1 + 0x214) = 3
*(arg1 + 0x218) = 0
HWND eax_8 = GetDlgItem(hDlg_1, 0x3f2)
*(arg1 + 0x1bc) = eax_8
sub_6c0100(arg1 + 0x1b8, eax_8)
hDlg_3 = arg1 + 0x1b8
sub_530ba0(arg1 + 0x64, &hDlg_3)

if (var_60 u>= 8)
    j__free(var_74.d)

struct _EXCEPTION_REGISTRATION_RECORD** var_a0 = nullptr
int32_t var_9c = 0
int32_t var_98 = 0
int32_t var_8_6 = 3
int16_t* ecx_13

if (*(arg1 + 0x25c) u< 8)
    ecx_13 = arg1 + 0x248
else
    ecx_13 = *(arg1 + 0x248)

void* esi_3

if (*(arg1 + 0x25c) u< 8)
    esi_3 = arg1 + 0x248
else
    esi_3 = *(arg1 + 0x248)

int16_t var_2c

while (true)
    void* edx_1
    
    if (*(arg1 + 0x25c) u< 8)
        edx_1 = arg1 + 0x248
    else
        edx_1 = *(arg1 + 0x248)
    
    if (esi_3 == edx_1 + (*(arg1 + 0x258) << 1))
        break
    
    if (*esi_3 == 0xa)
        void* var_b8_12 = arg1
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        var_2c = 0
        sub_60c770(&var_2c, ecx_13, esi_3)
        var_8_6.b = 4
        sub_60c680(&var_a0, &var_2c)
        var_8_6.b = 3
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        ecx_13 = esi_3 + 2
    
    esi_3 += 2

void* edx_2

if (*(arg1 + 0x25c) u< 8)
    edx_2 = arg1 + 0x248
else
    edx_2 = *(arg1 + 0x248)

void* var_b8_15 = arg1
int32_t var_18_2 = 7
int32_t var_1c_2 = 0
void* eax_12 = edx_2 + (*(arg1 + 0x258) << 1)
var_2c = 0
sub_60c770(&var_2c, ecx_13, eax_12)
var_8_6.b = 5
sub_60c680(&var_a0, &var_2c)

if (var_18_2 u>= 8)
    j__free(var_2c.d)

int32_t* eax_13 = nullptr
int32_t var_18_3 = 7
int32_t var_1c_3 = 0
var_2c = 0
var_8_6.b = 6
struct _EXCEPTION_REGISTRATION_RECORD** ebx_2 = var_a0
struct _EXCEPTION_REGISTRATION_RECORD** esi_4 = ebx_2

if (ebx_2 != var_9c)
    do
        var_8_6.b = 7
        int32_t var_8c
        eax_13 =
            sub_532870(&var_2c, sub_532b80(eax_13, esi_4, &var_8c, &data_ad90c0), 0, 0xffffffff)
        var_8_6.b = 6
        int32_t var_78
        
        if (var_78 u>= 8)
            eax_13 = j__free(var_8c)
        
        esi_4 = &esi_4[6]
    while (esi_4 != var_9c)

sub_6c2db0(arg1 + 0x98, &var_2c)
SetFocus(*(arg1 + 4))

if (var_18_3 u>= 8)
    j__free(var_2c.d)

if (ebx_2 != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** esi_5 = ebx_2
    
    if (ebx_2 != var_9c)
        do
            if (esi_5[5] u>= 8)
                j__free(*esi_5)
            
            esi_5[5] = 7
            esi_5[4] = 0
            *esi_5 = nullptr
            esi_5 = &esi_5[6]
        while (esi_5 != var_9c)
    
    j__free(ebx_2)

HWND result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
