// 函数: sub_590150
// 地址: 0x590150
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b7c98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t* var_70 = esi
esi[0x2e].b = 1
int32_t var_20 = 7
int32_t var_24 = 0
int16_t var_34 = 0
sub_52e720(&var_34, u"listview", 8)
void* hDlg_3 = &esi[0x38]
int32_t var_c_1 = 0
int32_t hDlg = esi[1]
int32_t hDlg_1 = hDlg

if (hDlg_3 + 8 != &var_34)
    sub_52e3c0(hDlg_3 + 8, &var_34, 0, 0xffffffff)
    hDlg = hDlg_1

*(hDlg_3 + 0x5c) = 5
*(hDlg_3 + 0x60) = 0
HWND eax_5 = GetDlgItem(hDlg, 0x3e8)
*(hDlg_3 + 4) = eax_5
sub_6c0100(hDlg_3, eax_5)
hDlg_1 = hDlg_3
sub_530ba0(&esi[0x19], &hDlg_1)
int32_t var_c_2 = 0xffffffff

if (var_20 u>= 8)
    j__free(var_34.d)

int32_t* hWnd_4 = *(hDlg_3 + 4)
LRESULT ecx_4

if (hWnd_4 != 0)
    ecx_4 = SendMessageW(hWnd_4, 0x1037, 0, 0)
else
    ecx_4 = 0

int32_t* hWnd_5 = *(hDlg_3 + 4)

if (hWnd_5 != 0)
    SendMessageW(hWnd_5, 0x1036, 0, ecx_4 | 0x31)

int32_t i = 0
int32_t eax_7
int32_t edx
edx:eax_7 = muls.dp.d(0x4ec4ec4f, esi[0x36] - esi[0x35])
int32_t edx_1 = edx s>> 4

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    int32_t hDlg_2 = 0
    hDlg_1 = 0
    int32_t edx_5
    
    do
        void* eax_12 = esi[0x35] + hDlg_2
        int32_t ecx_8 = *(eax_12 + 0x30)
        void* esi_1 = eax_12 + 0x18
        LRESULT hWnd = *(hDlg_3 + 4)
        
        if (hWnd != 0)
            hWnd = SendMessageW(hWnd, 0x101f, 0, 0)
        
        LRESULT wParam = SendMessageW(hWnd, 0x1200, 0, 0)
        bool cond:0_1 = *(esi_1 + 0x14) u< 8
        int32_t lParam = 7
        int32_t var_5c_1 = 0
        int32_t var_58_1 = ecx_8
        
        if (not(cond:0_1))
            esi_1 = *esi_1
        
        HWND hWnd_1 = *(hDlg_3 + 4)
        void* var_54_1 = esi_1
        
        if (hWnd_1 != 0)
            SendMessageW(hWnd_1, 0x1061, wParam, &lParam)
        
        void* var_90_5 = eax_12
        void var_64
        sub_6c6920(hDlg_3 + 0x90, &var_64, *(hDlg_3 + 0x90) + wParam * 0x18, hDlg_3 + 0x90)
        esi = var_70
        i += 1
        hDlg_1 += 0x34
        int32_t eax_16
        int32_t edx_4
        edx_4:eax_16 = muls.dp.d(0x4ec4ec4f, esi[0x36] - esi[0x35])
        hDlg_2 = hDlg_1
        edx_5 = edx_4 s>> 4
    while (i s< (edx_5 u>> 0x1f) + edx_5)

sub_6c65c0(hDlg_3)
(*(*esi + 0x20))(eax_4)
int32_t* var_9c
var_9c.o = zx.o(0)
sub_6c2800(esi, var_9c)
HWND hWnd_2 = esi[1]

if (hWnd_2 != 0)
    UpdateWindow(hWnd_2)

int32_t hWnd_3 = esi[1]

if (hWnd_3 != 0 && (GetWindowLongW(hWnd_3, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(esi[1], SW_SHOW)

hWnd_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_80)
return hWnd_3
