// 函数: sub_5367d0
// 地址: 0x5367d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_9b02a3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1d8
int32_t eax_2 = __security_cookie ^ &var_1d8
int32_t __saved_edi
int32_t var_1e4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void* var_1a4 = esi
void* eax_5 = *(esi + 4)
RECT rect_2
__builtin_memset(&rect_2, 0, 0x10)
GetClientRect(*(eax_5 + 4), &rect_2)
int32_t var_b4 = 7
int32_t var_b8 = 0
int16_t var_c8 = 0
sub_52e720(&var_c8, &data_ad7c90, nullptr)
int32_t var_14_1 = 0
void* edx = esi + 0x19fc
void* eax_6 = *(esi + 4)
void* var_168 = edx
int32_t hDlg = *(eax_6 + 4)
int32_t var_1d4 = hDlg

if (edx + 8 != &var_c8)
    sub_52e3c0(edx + 8, &var_c8, 0, 0xffffffff)
    hDlg = var_1d4
    edx = esi + 0x19fc

*(edx + 0x5c) = 3
*(edx + 0x60) = 0
HWND eax_7 = GetDlgItem(hDlg, 0x3f4)
*(esi + 0x1a00) = eax_7
sub_6c0100(esi + 0x19fc, eax_7)
var_1d4 = esi + 0x19fc
sub_530ba0(eax_6 + 0x64, &var_1d4)
int32_t var_14_2 = 0xffffffff

if (var_b4 u>= 8)
    j__free(var_c8.d)

int32_t var_cc = 7
int32_t var_d0 = 0
int16_t var_e0 = 0
sub_52e720(&var_e0, &data_ad7c90, nullptr)
int32_t var_14_3 = 1
void* edx_1 = esi + 0x1a8c
void* eax_9 = *(esi + 4)
void* var_164 = edx_1
int32_t hDlg_1 = *(eax_9 + 4)
var_1d4 = hDlg_1

if (edx_1 + 8 != &var_e0)
    sub_52e3c0(edx_1 + 8, &var_e0, 0, 0xffffffff)
    hDlg_1 = var_1d4
    edx_1 = esi + 0x1a8c

*(edx_1 + 0x5c) = 3
*(edx_1 + 0x60) = 0
HWND eax_10 = GetDlgItem(hDlg_1, 0x3f3)
*(esi + 0x1a90) = eax_10
sub_6c0100(esi + 0x1a8c, eax_10)
var_1d4 = esi + 0x1a8c
sub_530ba0(eax_9 + 0x64, &var_1d4)
int32_t var_14_4 = 0xffffffff

if (var_cc u>= 8)
    j__free(var_e0.d)

HWND hWnd = *(esi + 0x1a00)
RECT rect_1
__builtin_memset(&rect_1, 0, 0x10)
GetClientRect(hWnd, &rect_1)
HWND hWnd_1 = *(esi + 0x1a90)
RECT rect_3
__builtin_memset(&rect_3, 0, 0x10)
GetClientRect(hWnd_1, &rect_3)

if (*(esi + 0x12) != 0)
    sub_6c2db0(esi + 0x1a8c, &data_b679c4)

HGDIOBJ wParam = GetStockObject(DEFAULT_GUI_FONT)
int32_t (__fastcall* var_1e8_9)(int32_t* arg1) = sub_538150
void var_54
sub_74675f(&var_54, 0xc, 4, PDBStream::PDBStream)
int32_t var_14_5 = 2
void* var_1bc = esi + 0x874
void* edi = &var_54
int32_t var_1ac = 0
int32_t var_1a8 = 0
int32_t var_1d0 = 0
void* var_1c8 = &var_54
void* var_1b8 = esi + 0x634
int32_t var_1b0
char* var_180
int16_t var_148
int32_t var_134_2
int16_t rect
int16_t var_118
int32_t var_90
int32_t var_80
int32_t var_70
int32_t eax_68

do
    int32_t var_134_1 = 7
    int32_t var_138_1 = 0
    var_148 = 0
    sub_52e720(&var_148, &data_ad7c90, nullptr)
    var_14_5.b = 3
    int32_t var_11c_1 = 7
    int32_t var_120_1 = 0
    rect = 0
    sub_52e720(&rect, &data_ad7c90, nullptr)
    var_14_5.b = 4
    
    if (*(var_1b8 + 0x10) != 0)
        sub_6bfcd0(var_1b8 - 0x78, &rect, var_1b8, &var_148, 0, 0, 0xa, 0xa, 0, 0x50020007, 
            WS_EX_LEFT, 0, 0, *(esi + 8))
    
    if (var_11c_1 u>= 8)
        j__free(rect.d)
    
    var_14_5.b = 2
    int32_t var_11c_2 = 7
    int32_t var_120_2 = 0
    rect = 0
    
    if (var_134_1 u>= 8)
        j__free(var_148.d)
    
    void* esi_1 = *(esi + 4)
    *(var_1b8 - 0x1c) = 5
    void* var_188 = var_1b8 - 0x78
    *(var_1b8 - 0x18) = 0
    int32_t ecx_15 = *(esi_1 + 0x68)
    int32_t edx_2
    
    if (&var_188 u< ecx_15)
        edx_2 = *(esi_1 + 0x64)
    
    if (&var_188 u>= ecx_15 || edx_2 u> &var_188)
        if (ecx_15 == *(esi_1 + 0x6c))
            int32_t var_1e8_14 = ecx_15
            sub_530c10(esi_1 + 0x64)
        
        void** eax_21 = *(esi_1 + 0x68)
        
        if (eax_21 != 0)
            *eax_21 = var_188
    else
        var_1d4 = (&var_188 - edx_2) s>> 2
        
        if (ecx_15 == *(esi_1 + 0x6c))
            int32_t var_1e8_13 = ecx_15
            sub_530c10(esi_1 + 0x64)
        
        int32_t* ecx_18 = *(esi_1 + 0x68)
        
        if (ecx_18 != 0)
            *ecx_18 = *(*(esi_1 + 0x64) + (var_1d4 << 2))
    
    *(esi_1 + 0x68) += 4
    SendMessageW(*(var_1b8 - 0x74), 0x30, wParam, 1)
    sub_6c2db0(var_188, data_bac510 + 0x10518 + var_1d0)
    sub_5382a0(edi, 8)
    void* edi_1 = var_1bc
    int32_t i = 0
    int32_t i_9 = 0
    int32_t var_1c0_1 = var_1d0
    int32_t ecx_58
    
    do
        int32_t esi_3 = 0
        var_134_2 = 7
        int32_t var_138_2 = 0
        
        if (i == 0)
            esi_3 = 0x20000
        
        var_148 = 0
        sub_52e720(&var_148, &data_ad7c90, nullptr)
        var_14_5.b = 5
        int32_t var_11c_3 = 7
        int32_t var_120_3 = 0
        rect = 0
        sub_52e720(&rect, &data_ad7c90, nullptr)
        var_14_5.b = 6
        
        if (*(edi_1 + 0x10) != 0)
            sub_6bfcd0(edi_1 - 0x78, &rect, edi_1, &var_148, 0, 0, 0xa, 0xe, 0, esi_3 | 0x50010009, 
                WS_EX_LEFT, 0, 0, *(var_1a4 + 8))
        
        if (var_11c_3 u>= 8)
            j__free(rect.d)
        
        var_14_5.b = 2
        int32_t var_11c_4 = 7
        int32_t var_120_4 = 0
        rect = 0
        
        if (var_134_2 u>= 8)
            j__free(var_148.d)
        
        void* var_184 = edi_1 - 0x78
        void* esi_5 = *(var_1a4 + 4)
        *(edi_1 - 0x1c) = 7
        *(edi_1 - 0x18) = 0
        int32_t eax_29 = *(esi_5 + 0x68)
        int32_t ecx_26
        
        if (&var_184 u< eax_29)
            ecx_26 = *(esi_5 + 0x64)
        
        void** ecx_35
        
        if (&var_184 u>= eax_29 || ecx_26 u> &var_184)
            int32_t edx_9 = *(esi_5 + 0x6c)
            
            if (eax_29 == edx_9 && (edx_9 - eax_29) s>> 2 u< 1)
                int32_t eax_38 = (eax_29 - *(esi_5 + 0x64)) s>> 2
                
                if (0x3fffffff - eax_38 u< 1)
                    sub_743191("vector<T> too long")
                    noreturn
                
                int32_t edx_11 = (edx_9 - *(esi_5 + 0x64)) s>> 2
                var_1d4 = eax_38 + 1
                uint32_t ecx_41 = edx_11 u>> 1
                int32_t edx_12
                
                if (0x3fffffff - ecx_41 u>= edx_11)
                    edx_12 = edx_11 + ecx_41
                else
                    edx_12 = 0
                
                if (edx_12 u< var_1d4)
                    edx_12 = var_1d4
                
                sub_530c80(esi_5 + 0x64, edx_12)
            
            ecx_35 = *(esi_5 + 0x68)
            
            if (ecx_35 != 0)
                *ecx_35 = edi_1 - 0x78
        else
            int32_t edx_5 = *(esi_5 + 0x6c)
            
            if (eax_29 == edx_5 && (edx_5 - eax_29) s>> 2 u< 1)
                int32_t eax_31 = (eax_29 - *(esi_5 + 0x64)) s>> 2
                
                if (0x3fffffff - eax_31 u< 1)
                    sub_743191("vector<T> too long")
                    noreturn
                
                int32_t edx_7 = (edx_5 - *(esi_5 + 0x64)) s>> 2
                var_1d4 = eax_31 + 1
                uint32_t ecx_32 = edx_7 u>> 1
                int32_t edx_8
                
                if (0x3fffffff - ecx_32 u>= edx_7)
                    edx_8 = edx_7 + ecx_32
                else
                    edx_8 = 0
                
                if (edx_8 u< var_1d4)
                    edx_8 = var_1d4
                
                sub_530c80(esi_5 + 0x64, edx_8)
            
            ecx_35 = *(esi_5 + 0x68)
            
            if (ecx_35 != 0)
                *ecx_35 = *(*(esi_5 + 0x64) + ((&var_184 - ecx_26) s>> 2 << 2))
        void* eax_41 = data_bac510
        *(esi_5 + 0x68) += 4
        int32_t var_1e8_22 = sub_6c2db0(edi_1 - 0x78, eax_41 + var_1c0_1 + 0x10538)
        int32_t cx = sub_6c3030(edi_1 - 0x78, 0x14)
        HWND hWnd_2 = *(edi_1 - 0x74)
        RECT rect_4
        __builtin_memset(&rect_4, 0, 0x10)
        GetWindowRect(hWnd_2, &rect_4)
        HWND hWnd_9 = *(edi_1 - 0x74)
        
        if (hWnd_9 != 0)
            SetWindowPos(hWnd_9, nullptr, 0, 0, cx, rect_4.bottom - rect_4.top, 0x16)
        
        rect.o = zx.o(0)
        GetWindowRect(*(edi_1 - 0x74), &rect)
        uint128_t xmm1_1 = *(edi_1 - 0x50)
        int32_t var_128
        int32_t ecx_49 = var_128 - rect.d
        int32_t xmm0_2 = _mm_bsrli_si128(xmm1_1, 4)
        int32_t eax_45 = xmm1_1
        int32_t var_6c_1 = xmm0_2
        var_70 = eax_45
        int32_t var_68_1 = ecx_49 + eax_45
        int32_t var_12c
        int32_t var_124
        int32_t var_64_1 = var_124 - var_12c + xmm0_2
        HWND hWnd_3 = *(edi_1 - 0x74)
        *(edi_1 - 0x50) = var_70.o
        rect.o = zx.o(0)
        GetWindowRect(hWnd_3, &rect)
        uint128_t xmm1_2 = *(edi_1 - 0x40)
        void* ecx_52 = var_128 - rect.d
        int32_t xmm0_5 = _mm_bsrli_si128(xmm1_2, 4)
        char* eax_46 = xmm1_2
        int32_t var_17c_1 = xmm0_5
        var_180 = eax_46
        void* var_178_1 = ecx_52 + eax_46
        int32_t var_174_1 = var_124 - var_12c + xmm0_5
        HWND hWnd_4 = *(edi_1 - 0x74)
        *(edi_1 - 0x50) = var_180.o
        rect.o = zx.o(0)
        GetWindowRect(hWnd_4, &rect)
        uint128_t xmm1_3 = *(edi_1 - 0x30)
        int32_t ecx_55 = var_128 - rect.d
        int32_t xmm0_8 = _mm_bsrli_si128(xmm1_3, 4)
        int32_t eax_47 = xmm1_3
        int32_t var_15c_1 = xmm0_8
        int32_t var_158_1 = ecx_55 + eax_47
        int32_t var_154_1 = var_124 - var_12c + xmm0_8
        *(edi_1 - 0x30) = eax_47.o
        SendMessageW(*(edi_1 - 0x74), 0x30, wParam, 1)
        int32_t eax_48 = data_bac510
        char var_1c9_1
        int32_t i_11
        
        if (*(var_1d0 + eax_48 + 0x10514) != 0 || *(var_1a4 + 0x11) != 0)
            i_11 = i_9
            
            if (i_11 s>= *(var_1d0 + eax_48 + 0x10534))
                var_1c9_1 = 0
            else
                var_1c9_1 = 1
        else
            i_11 = i_9
            var_1c9_1 = 0
        
        ecx_58 = i_11 << 3
        i_11.b = var_1c9_1
        var_1c0_1 += 0x18
        *(ecx_58 + *var_1c8) = i_11.b
        void* esi_18 = edi_1 - 0x78
        edi_1 += 0x90
        i = i_9 + 1
        i_9 = i
        *(*var_1c8 + ecx_58 + 4) = esi_18
        esi = var_1a4
    while (i s< 8)
    
    int32_t var_1e8_27 = ecx_58
    int32_t var_1c0_2 = 0
    int32_t edx_17 = var_1a8
    int32_t i_1 = 0
    *(&var_118 + (edx_17 << 2)) = sub_6c3030(var_188, 0) + 0x10
    int32_t ecx_60 = *var_1c8
    
    if (((*(var_1c8 + 4) - ecx_60) & 0xfffffff8) s> 0)
        do
            if (*(ecx_60 + (i_1 << 3)) == 0)
                int32_t eax_58 = *(ecx_60 + (i_1 << 3) + 4)
                var_1d4 = eax_58
                HWND hWnd_5 = *(eax_58 + 4)
                
                if (hWnd_5 != 0)
                    if ((GetWindowLongW(hWnd_5, 0xfffffff0) & 0x10000000) s> 0)
                        ShowWindow(*(var_1d4 + 4), SW_HIDE)
                    
                    edx_17 = var_1a8
            else
                int32_t var_1e8_28 = ecx_60
                edx_17 = var_1a8
                int32_t eax_57 = sub_6c3030(*(ecx_60 + (i_1 << 3) + 4), 0) + 0x14
                
                if (*(&var_118 + (edx_17 << 2)) s< eax_57)
                    *(&var_118 + (edx_17 << 2)) = eax_57
                
                var_1c0_2 += 1
            
            i_1 += 1
            ecx_60 = *var_1c8
        while (i_1 s< (*(var_1c8 + 4) - ecx_60) s>> 3)
        
        esi = var_1a4
    
    (&var_80)[edx_17] = 0x14
    (&var_90)[edx_17] = 0x21
    
    if (var_1c0_2 s<= 0)
        HWND hWnd_6 = *(var_1b8 - 0x74)
        
        if (hWnd_6 != 0)
            if ((GetWindowLongW(hWnd_6, 0xfffffff0) & 0x10000000) s> 0)
                ShowWindow(*(var_1b8 - 0x74), SW_HIDE)
            
            edx_17 = var_1a8
        
        eax_68 = var_1d0
        
        if (eax_68 u>= 0x390)
            ___report_rangecheckfailure()
            noreturn
        
        *(&var_1b0 + edx_17) = 0
    else
        int32_t eax_65 = *(&var_118 + (edx_17 << 2)) + 0x14
        *(&var_1b0 + edx_17) = 1
        (&var_80)[edx_17] = eax_65
        var_1ac += 1
        (&var_90)[edx_17] = var_1c0_2 * 0x15 + 0x1a
        eax_68 = var_1d0
    
    var_1bc += 0x480
    var_1b8 += 0x90
    edi = var_1c8 + 0xc
    var_1a8 = edx_17 + 1
    var_1d0 = eax_68 + 0xe4
    var_1c8 = edi
while (eax_68 + 0xe4 s< 0x390)
char var_1ae
int32_t var_18c_1

if (var_1ae == 0)
    var_18c_1 = 0x17

char var_1ad

if (var_1ae != 0 || var_1ad != 0)
    var_18c_1 = 0x16

int32_t var_104 = 7
int32_t var_108 = 0
var_118 = 0
sub_52e720(&var_118, &data_ad7c90, nullptr)
var_14_5.b = 7
sub_52e820(&var_148, &data_ad7c90)
var_14_5.b = 8

if (*(esi + 0xa4) != 0)
    sub_6bfcd0(esi + 0x1c, &var_148, esi + 0x94, &var_118, 0, 0, 0xa, 0xa, 0, 0x50020007, 
        WS_EX_LEFT, 0, 0, *(esi + 8))

if (var_134_2 u>= 8)
    j__free(var_148.d)

var_14_5.b = 2
int32_t var_134_3 = 7
int32_t var_138_3 = 0
var_148 = 0

if (var_104 u>= 8)
    j__free(var_118.d)

void* ecx_66 = *(esi + 4)
*(esi + 0x78) = 5
var_1d4 = esi + 0x1c
*(esi + 0x7c) = 0
sub_530ba0(ecx_66 + 0x64, &var_1d4)
SendMessageW(*(esi + 0x20), 0x30, wParam, 1)
sub_52e820(&var_148, "]0n0")
var_14_5.b = 9
sub_6c2db0(esi + 0x1c, &var_148)
var_14_5.b = 2

if (var_134_3 u>= 8)
    j__free(var_148.d)

sub_52e820(&var_118, &data_ad7c90)
var_14_5.b = 0xa
sub_52e820(&var_148, &data_ad7c90)
var_14_5.b = 0xb

if (*(esi + 0x134) != 0)
    sub_6bfcd0(esi + 0xac, &var_148, esi + 0x124, &var_118, 0, 0, 0xa, 0xe, 0, 0x50030003, 
        WS_EX_LEFT, 0, 0, *(esi + 8))

if (var_134_3 u>= 8)
    j__free(var_148.d)

var_14_5.b = 2
int32_t var_134_4 = 7
int32_t var_138_4 = 0
var_148 = 0

if (var_104 u>= 8)
    j__free(var_118.d)

void* ecx_73 = *(esi + 4)
*(esi + 0x108) = 7
var_1d4 = esi + 0xac
*(esi + 0x10c) = 0
sub_530ba0(ecx_73 + 0x64, &var_1d4)
sub_6c2db0(esi + 0xac, data_bac510 + 0x10410)
sub_6c30e0(esi + 0xac)
SendMessageW(*(esi + 0xb0), 0x30, wParam, 1)
int32_t i_6 = 0
void* edi_6 = esi + 0x13c
int32_t i_2

do
    sub_52e820(&var_118, &data_ad7c90)
    var_14_5.b = 0xc
    sub_52e820(&var_148, &data_ad7c90)
    var_14_5.b = 0xd
    
    if (*(edi_6 + 0x88) != 0)
        sub_6bfcd0(edi_6, &var_148, edi_6 + 0x78, &var_118, 0, 0, 0xa, 0xe, 0, 0x50030003, 
            WS_EX_LEFT, 0, 0, *(esi + 8))
    
    if (var_134_4 u>= 8)
        j__free(var_148.d)
    
    var_14_5.b = 2
    var_134_4 = 7
    int32_t var_138_5 = 0
    var_148 = 0
    
    if (var_104 u>= 8)
        j__free(var_118.d)
    
    void* ecx_80 = *(esi + 4)
    *(edi_6 + 0x5c) = 7
    var_1d4 = edi_6
    *(edi_6 + 0x60) = 0
    sub_530ba0(ecx_80 + 0x64, &var_1d4)
    sub_6c2db0(edi_6, data_bac510 + i_6 + 0x10430)
    sub_6c30e0(edi_6)
    SendMessageW(*(edi_6 + 4), 0x30, wParam, 1)
    edi_6 += 0x90
    i_2 = i_6 + 0x1c
    i_6 = i_2
while (i_2 s< 0x70)
int32_t i_7 = 0x104a4
void* edi_7 = esi + 0x37c
int32_t i_3

do
    sub_52e820(&var_118, &data_ad7c90)
    var_14_5.b = 0xe
    sub_52e820(&var_148, &data_ad7c90)
    var_14_5.b = 0xf
    
    if (*(edi_7 + 0x88) != 0)
        sub_6bfcd0(edi_7, &var_148, edi_7 + 0x78, &var_118, 0, 0, 0xa, 0xe, 0, 0x50030003, 
            WS_EX_LEFT, 0, 0, *(esi + 8))
    
    if (var_134_4 u>= 8)
        j__free(var_148.d)
    
    var_14_5.b = 2
    var_134_4 = 7
    int32_t var_138_6 = 0
    var_148 = 0
    
    if (var_104 u>= 8)
        j__free(var_118.d)
    
    void* ecx_89 = *(esi + 4)
    *(edi_7 + 0x5c) = 7
    var_1d4 = edi_7
    *(edi_7 + 0x60) = 0
    sub_530ba0(ecx_89 + 0x64, &var_1d4)
    sub_6c2db0(edi_7, data_bac510 + i_7)
    sub_6c30e0(edi_7)
    SendMessageW(*(edi_7 + 4), 0x30, wParam, 1)
    edi_7 += 0x90
    i_3 = i_7 + 0x1c
    i_7 = i_3
while (i_3 s< 0x10514)
var_180 = nullptr
int32_t var_17c_2 = 0
int32_t var_178_2 = 0
var_14_5.b = 0x10
sub_5382a0(&var_180, 9)
void* edx_19 = data_bac510
char* ecx_94 = var_180
var_1d4 = &ecx_94[4]
*ecx_94 = *(edx_19 + 0x1040c)
*(ecx_94 + 4) = esi + 0xac
void* eax_84

if (*(edx_19 + 0x10428) s<= 0)
    eax_84.b = 0
else
    eax_84.b = *(edx_19 + 0x1042c)

ecx_94[8] = eax_84.b
*(ecx_94 + 0xc) = esi + 0x13c
void* eax_85

if (*(edx_19 + 0x10428) s<= 1)
    eax_85.b = 0
else
    eax_85.b = *(edx_19 + 0x10448)

ecx_94[0x10] = eax_85.b
*(ecx_94 + 0x14) = esi + 0x1cc
void* eax_86

if (*(edx_19 + 0x10428) s<= 2)
    eax_86.b = 0
else
    eax_86.b = *(edx_19 + 0x10464)

ecx_94[0x18] = eax_86.b
*(ecx_94 + 0x1c) = esi + 0x25c
void* eax_87

if (*(edx_19 + 0x10428) s<= 3)
    eax_87.b = 0
else
    eax_87.b = *(edx_19 + 0x10480)

ecx_94[0x20] = eax_87.b
*(ecx_94 + 0x24) = esi + 0x2ec
void* eax_88

if (*(edx_19 + 0x1049c) s<= 0)
    eax_88.b = 0
else
    eax_88.b = *(edx_19 + 0x104a0)

ecx_94[0x28] = eax_88.b
*(ecx_94 + 0x2c) = esi + 0x37c
void* eax_89

if (*(edx_19 + 0x1049c) s<= 1)
    eax_89.b = 0
else
    eax_89.b = *(edx_19 + 0x104bc)

ecx_94[0x30] = eax_89.b
*(ecx_94 + 0x34) = esi + 0x40c
void* eax_90

if (*(edx_19 + 0x1049c) s<= 2)
    eax_90.b = 0
else
    eax_90.b = *(edx_19 + 0x104d8)

ecx_94[0x38] = eax_90.b
*(ecx_94 + 0x3c) = esi + 0x49c
void* eax_91

if (*(edx_19 + 0x1049c) s<= 3)
    eax_91.b = 0
else
    eax_91.b = *(edx_19 + 0x104f4)

ecx_94[0x40] = eax_91.b
*(ecx_94 + 0x44) = esi + 0x52c

if (*(esi + 0x11) != 0)
    *ecx_94 = 1

char* var_1e8_50 = ecx_94
int32_t var_1bc_1 = 0
int32_t eax_93
int32_t ecx_96
eax_93, ecx_96 = sub_6c3030(esi + 0x1c, 0)
int32_t edi_9 = eax_93 + 0x10
int32_t i_10 = (var_17c_2 - var_180) s>> 3

if (i_10 s> 0)
    int32_t esi_20 = var_1d4
    int32_t i_8 = i_10
    int32_t i_4
    
    do
        if (*(esi_20 - 4) == 0)
            void* eax_98 = *esi_20
            HWND hWnd_7 = *(eax_98 + 4)
            
            if (hWnd_7 != 0)
                int32_t eax_99
                eax_99, ecx_96 = GetWindowLongW(hWnd_7, 0xfffffff0)
                
                if ((eax_99 & 0x10000000) s> 0)
                    ecx_96 = ShowWindow(*(eax_98 + 4), SW_HIDE)
        else
            int32_t var_1e8_51 = ecx_96
            int32_t eax_96
            eax_96, ecx_96 = sub_6c3030(*esi_20, 0)
            
            if (edi_9 s< eax_96 + 0x14)
                edi_9 = eax_96 + 0x14
            
            var_1bc_1 += 1
        
        esi_20 += 8
        i_4 = i_8
        i_8 -= 1
    while (i_4 != 1)
    esi = var_1a4

int32_t ecx_98 = 0x21
int32_t var_1c0_4 = 0x14
int32_t var_1a0_1 = 0x21
char edx_20

if (var_1bc_1 s<= 0)
    HWND hWnd_8 = *(esi + 0x20)
    
    if (hWnd_8 != 0)
        if ((GetWindowLongW(hWnd_8, 0xfffffff0) & 0x10000000) s> 0)
            ShowWindow(*(esi + 0x20), SW_HIDE)
        
        ecx_98 = 0x21
    
    edx_20 = 0
else
    edx_20 = 1
    var_1c0_4 = edi_9 + 0x14
    ecx_98 = (var_1bc_1 - 1) * var_18c_1 + 0x2f
    var_1a0_1 = ecx_98

char var_195 = 0
int32_t var_19c_3 = 0
int32_t eax_103
eax_103.b = edx_20 != 0
int32_t var_1ac_1 = 0

if (eax_103 + var_1ac s<= 1 && *(esi + 0xc) != 0)
    var_19c_3 = 0xb
    var_1ac_1 = rect_1.bottom - rect_1.top + 9
    var_195 = 1
    var_1a0_1 = ecx_98 + rect_1.bottom - rect_1.top + 0x15
    var_90.o =
        _mm_add_epi32(var_90.o, _mm_shuffle_epi32(zx.o(rect_1.bottom - rect_1.top + 0x15), 0))

int16_t eax_109 = var_1b0.w
int32_t edx_21 = 0
int32_t ecx_103 = 0
int32_t var_1b8_1 = 0
int32_t edi_10 = 0
int32_t var_194_1 = 0

if (eax_109.b != 0)
    int32_t ecx_104 = var_80
    edx_21 = var_90
    
    if (ecx_104 s> 0)
        edi_10 = ecx_104
    
    var_1b8_1 = edx_21
    ecx_103 = 1
    var_194_1 = 1

int32_t var_8c

if (eax_109:1.b != 0)
    int32_t var_7c
    
    if (edi_10 s< var_7c)
        edi_10 = var_7c
    
    edx_21 += var_8c
    ecx_103 = var_194_1 + 1
    var_1b8_1 = edx_21
    var_194_1 = ecx_103

if (ecx_103 s> 0)
    int32_t edx_22 = edx_21 + ecx_103 * 0xa
    ecx_103 = var_194_1
    var_1b8_1 = edx_22 - 0xa

bool cond:14 = ecx_103 != 0
var_80 = edi_10
int32_t var_7c_1 = edi_10
int32_t ecx_107 = 0
int32_t edx_24 = 0
int32_t var_1c8_1 = 0
int32_t var_1a8_1 = 0
int32_t var_1d0_1 = 0
int32_t var_88

if (var_1ae != 0)
    var_1d0_1 = 1
    int32_t var_78
    
    if (var_78 s> 0)
        edx_24 = var_78
    
    ecx_107 = var_88
    var_1a8_1 = edx_24
    var_1c8_1 = ecx_107

int32_t var_84

if (var_1ad != 0)
    int32_t var_74
    
    if (edx_24 s< var_74)
        edx_24 = var_74
    
    ecx_107 = var_1c8_1 + var_84
    var_1d0_1 += 1
    var_1a8_1 = edx_24
    var_1c8_1 = ecx_107

if (edx_20 != 0)
    if (edx_24 s< var_1c0_4)
        edx_24 = var_1c0_4
    
    ecx_107 += var_1a0_1
    var_1d0_1 += 1
    var_1a8_1 = edx_24
    var_1c8_1 = ecx_107

if (var_1d0_1 s> 0)
    int32_t esi_23 = var_1c8_1 + var_1d0_1 * 0xa - 0xa
    var_1c8_1 = esi_23
    ecx_107 = esi_23

bool cond:17 = var_1d0_1 != 0
int32_t var_78_1 = edx_24
int32_t esi_25 = var_1b8_1 - ecx_107
int32_t var_74_1 = edx_24

if (var_1b8_1 s>= ecx_107)
    if (edx_20 != 0)
        var_1a0_1 += esi_25
    else if (var_1ad != 0)
        var_84 += esi_25
    else if (var_1ae != 0)
        var_88 += esi_25
else if (eax_109:1.b != 0)
    var_8c -= esi_25
else if (eax_109.b != 0)
    var_90 -= esi_25

int32_t ecx_121 = 0
int32_t var_1d0_3 = 0

if (cond:14 != 0)
    var_1d0_3 = edi_10
    ecx_121 = 1

if (cond:17 != 0)
    var_1d0_3 += edx_24
    ecx_121 += 1

if (ecx_121 s> 0)
    var_1d0_3 = var_1d0_3 + ecx_121 * 0xc - 0xc

int32_t ecx_123 = 0

if (cond:14 != 0 && var_1b8_1 s> 0)
    ecx_123 = var_1b8_1

if (cond:17 != 0 && ecx_123 s< var_1c8_1)
    ecx_123 = var_1c8_1

int32_t var_1b8_2 = var_1d0_3 + 0x15
int32_t var_1c0_5 = var_1d0_3 + 0x15
void* esi_28 = var_1a4
int32_t var_1c8_4
int32_t var_1bc_2
int32_t edx_29

if (var_195 == 0)
    var_1c8_4 = ecx_123 + 0x17
    int32_t ecx_127 = ecx_123 + 0x17 - rect_1.top + rect_1.bottom + 8
    edx_29 = var_1a8_1
    var_1bc_2 = ecx_127
    
    if (*(esi_28 + 0xc) == 0)
        var_1bc_2 = ecx_127 + 0x18
else
    var_1c8_4 = ecx_123 - var_1ac_1 + 0xb
    edx_29 = var_1a8_1
    var_1bc_2 = ecx_123 + 0x17

int32_t ecx_129 = rect_2.right - rect_2.left
int32_t ecx_130 = var_1b8_2

if (ecx_130 s< ecx_129)
    int32_t esi_30 = ecx_129 - ecx_130
    
    if (cond:17 != 0)
        int32_t edx_32 = edx_29 + esi_30
        var_1a8_1 = edx_32
        int32_t var_78_2 = edx_32
        int32_t var_74_2 = edx_32
    else if (cond:14 != 0)
        int32_t ecx_132 = esi_30 + edi_10
        var_80 = ecx_132
        int32_t var_7c_2 = ecx_132
        ecx_130 = var_1b8_2
    
    esi_28 = var_1a4
    var_1b8_2 = ecx_130 + esi_30
    var_1c0_5 = ecx_129

int32_t bottom = rect_2.bottom
int32_t edx_34 = bottom - rect_2.top
int32_t edx_35 = var_1bc_2

if (edx_35 s< edx_34)
    int32_t ecx_136 = bottom - edx_35 - rect_2.top
    
    if (eax_109:1.b != 0)
        int32_t var_8c_1 = var_8c + ecx_136
    else if (eax_109.b != 0)
        var_90 += ecx_136
    
    if (edx_20 != 0)
        var_1a0_1 += ecx_136
    else if (var_1ad != 0)
        var_84 += ecx_136
    else if (var_1ae != 0)
        var_88 += ecx_136
    
    var_1c8_4 += ecx_136
    edx_35 = edx_34

sub_6c1150(*(esi_28 + 4), var_1c0_5, edx_35)
sub_6c13f0(*(esi_28 + 4))
bool cond:21 = var_1b0.b == 0
rect.d = 0xb
int32_t var_12c_1 = 0xb
var_70 = 0xb
int32_t var_68_2 = 0xb

if (cond:21)
    int32_t var_6c_3 = 0xb
else
    int32_t var_6c_2 = var_90 + 0x15

int32_t ecx_139 = edi_10 + 0x17

if (cond:14 == 0)
    ecx_139 = 0xb

int32_t var_124_1 = ecx_139
int32_t eax_113

if (var_1ae == 0)
    eax_113 = 0xb
else
    eax_113 = var_88 + 0x15

int32_t var_64_2 = eax_113
int32_t var_1ac_4 = eax_113

if (var_1ad != 0)
    eax_113 += var_84 + 0xa
    var_1ac_4 = eax_113

int32_t edx_38 = ecx_139 + 0xa
int32_t edi_11 = 0
int32_t var_1c0_7 = edx_38

if (i_10 s> 0)
    char* eax_115 = var_180
    int32_t esi_31 = eax_113 + 0x15
    int32_t i_12 = i_10
    
    do
        if (eax_115[edi_11 << 3] != 0)
            sub_6c16e0(*(var_1d4 + (edi_11 << 3)), edx_38, esi_31)
            esi_31 += var_18c_1
            eax_115 = var_180
            i_12 = i_10
            edx_38 = var_1c0_7
        
        edi_11 += 1
    while (edi_11 s< i_12)
    
    esi_28 = var_1a4

sub_6c1650(esi_28 + 0x1c, var_1a8_1, var_1a0_1)
sub_6c16e0(esi_28 + 0x1c, ecx_139, var_1ac_4)
void* edx_39 = &var_54
void* var_18c_2 = esi_28 + 0x5bc
int32_t i_5 = 0
void* var_190_1 = &var_54
var_1d4 = 0

do
    int32_t eax_117 = *(&rect + i_5)
    int32_t j = 0
    int32_t ecx_143 = *edx_39
    int32_t edi_13 = *(&var_70 + i_5) + 0x15
    
    if (((*(edx_39 + 4) - ecx_143) & 0xfffffff8) s> 0)
        do
            if (*(ecx_143 + (j << 3)) != 0)
                sub_6c16e0(*(ecx_143 + (j << 3) + 4), eax_117 + 0xa, edi_13)
                edx_39 = var_190_1
                edi_13 += 0x15
            
            j += 1
            ecx_143 = *edx_39
        while (j s< (*(edx_39 + 4) - ecx_143) s>> 3)
    
    int32_t esi_33 = var_1d4
    sub_6c1650(var_18c_2, *(&var_80 + esi_33), *(&var_90 + esi_33))
    sub_6c16e0(var_18c_2, *(&rect + esi_33), *(&var_70 + esi_33))
    i_5 = esi_33 + 4
    edx_39 = var_190_1 + 0xc
    var_1d4 = i_5
    var_190_1 = edx_39
    var_18c_2 += 0x90
while (i_5 s< 0x10)

edx_39.b = var_1ad
void* eax_126

if (edx_20 != 0 || var_1ae != edx_20 || edx_39.b != 0)
    eax_126 = var_1a4
    
    if (var_1b0:1.b == 0)
        *(eax_126 + 0x618) = 4
    else
        *(eax_126 + 0x618) = 7
        *(eax_126 + 0x6a8) = 4
    
    if (edx_20 != 0 || edx_39.b != 0)
        *(eax_126 + 0x738) = 8
        
        if (edx_20 == 0)
            *(eax_126 + 0x7c8) = 5
        else
            *(eax_126 + 0x7c8) = 8
    else
        *(eax_126 + 0x738) = 5
        *(eax_126 + 0x7c8) = 5
else
    eax_126 = var_1a4
    
    if (var_1b0:1.b == edx_39.b)
        *(eax_126 + 0x618) = 5
    else
        *(eax_126 + 0x618) = 8
        *(eax_126 + 0x6a8) = 5
    
    *(eax_126 + 0x738) = 5
    *(eax_126 + 0x7c8) = 5

int32_t var_1e8_60
int32_t eax_129

if (*(eax_126 + 0xc) != 0)
    var_1e8_60 = var_1c8_4
    eax_129 = rect_1.left - 0xa + var_1b8_2 - rect_1.right
else
    int32_t esi_36 = rect_3.left - 0xa + var_1b8_2 - rect_3.right
    sub_6c16e0(var_164, esi_36, var_1c8_4)
    eax_129 = rect_1.left - 6 + esi_36 - rect_1.right
    var_1e8_60 = var_1c8_4

sub_6c16e0(var_168, eax_129 - var_19c_3, var_1e8_60)
j__free(var_180)
int32_t var_14_6 = 0xffffffff
int32_t result = `eh vector vbase constructor iterator'(&var_54, 0xc, 4, sub_538150)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_1d8)
return result
