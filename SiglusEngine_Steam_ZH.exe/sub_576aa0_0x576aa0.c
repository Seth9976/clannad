// 函数: sub_576aa0
// 地址: 0x576aa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b46b6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_120
int32_t eax_2 = __security_cookie ^ &var_120
int32_t __saved_edi
int32_t var_12c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT lParam_1 = arg3
HWND hWnd = *(arg1 + 0xbc)
LRESULT lParam_4 = lParam_1

if (lParam_1 != 0)
    if (hWnd != 0)
        lParam_1 = SendMessageW(hWnd, 0x110a, 1, lParam_1)
    else
        lParam_1 = 0
else if (hWnd != 0)
    lParam_1 = SendMessageW(hWnd, 0x110a, 4, arg2)

lParam_4 = lParam_1

if (lParam_1 == 0)
    int32_t var_e0
    int16_t* eax_7
    void** ecx_1
    eax_7, ecx_1 = sub_5483b0(arg4, &var_e0)
    int16_t* var_130_3 = eax_7
    lParam_4 = sub_6c36c0(arg1 + 0xb8, arg2, ecx_1)
    int32_t var_cc
    
    if (var_cc u>= 8)
        j__free(var_e0)
    
    int16_t* var_130_6 = sub_5483b0(arg4, &var_e0)
    int32_t var_134_3 = 0
    int32_t var_138_3 = 0x20
    int32_t var_c_1 = 0
    int32_t var_13c_2 = *(arg4 + 0x80)
    void var_1bc
    __builtin_memcpy(&var_1bc, arg4, 0x80)
    void var_c8
    void* eax_10 = sub_5732a0(&var_c8)
    var_c_1.b = 1
    sub_577170(sub_578390(arg1 + 0x3680, &lParam_4), eax_10)
    int32_t var_28
    int16_t var_3c
    
    if (var_28 u>= 8)
        j__free(var_3c.d)
    int32_t var_c_2 = 0xffffffff
    int32_t var_28_1 = 7
    int32_t var_2c_1 = 0
    int16_t var_3c_1 = 0
    
    if (var_cc u>= 8)
        j__free(var_e0)
    
    lParam_1 = lParam_4

if (arg5 != 0)
    HWND hWnd_1 = *(arg1 + 0xbc)
    int32_t lParam = 8
    int64_t var_104_1 = (zx.o(0)).q
    var_104_1.d = lParam_1
    var_104_1:8.d = 0x22
    int128_t var_f4
    __builtin_memset(&var_f4, 0, 0x14)
    
    if (hWnd_1 != 0)
        SendMessageW(hWnd_1, 0x113e, 0, &lParam)
        lParam_1 = lParam_4
    
    uint8_t eax_13 = (var_104_1:4.d u>> 5).b & 1
    int32_t eax_14 = *(arg4 + 0x80)
    
    if (eax_14 s> 0x47f)
        if (eax_14 s<= 0x6a4)
            if (eax_14 == 0x6a4)
                sub_576430(arg1, lParam_1, arg4, eax_13)
                lParam_1 = lParam_4
            else if (eax_14 - 0x4b1 u<= 0xfa)
                switch (eax_14)
                    case 0x4b1
                        if (arg4 == 4)
                            int32_t var_130_17 = eax_13.d
                            sub_578b00(arg1, lParam_1, 0)
                        else
                            int32_t var_130_16 = eax_13.d
                            sub_578b00(arg1, lParam_1, arg4)
                        
                        lParam_1 = lParam_4
                    case 0x4bb
                        if (arg4 == 4)
                            int32_t var_130_41 = eax_13.d
                            sub_579460(arg1, lParam_1, 0)
                        else
                            int32_t var_130_40 = eax_13.d
                            sub_579460(arg1, lParam_1, arg4)
                        
                        lParam_1 = lParam_4
                    case 0x50b
                        if (arg4 == 4)
                            int32_t var_130_35 = eax_13.d
                            sub_579190(arg1, lParam_1, 0)
                        else
                            int32_t var_130_34 = eax_13.d
                            sub_579190(arg1, lParam_1, arg4)
                        
                        lParam_1 = lParam_4
                    case 0x514
                        sub_576120(arg1, lParam_1, arg4, eax_13)
                        lParam_1 = lParam_4
                    case 0x515
                        if (arg4 == 4)
                            int32_t var_130_19 = eax_13.d
                            sub_578ce0(arg1, lParam_1, 0)
                        else
                            int32_t var_130_18 = eax_13.d
                            sub_578ce0(arg1, lParam_1, arg4)
                        
                        lParam_1 = lParam_4
                    case 0x51e
                        sub_576210(arg1, lParam_1, arg4, eax_13)
                        lParam_1 = lParam_4
                    case 0x51f
                        if (arg4 == 4)
                            int32_t var_130_22 = eax_13.d
                            sub_576980(arg1, lParam_1, 0)
                        else
                            int32_t var_130_21 = eax_13.d
                            sub_576980(arg1, lParam_1, arg4)
                        
                        lParam_1 = lParam_4
                    case 0x528
                        sub_576300(arg1, lParam_1, arg4, eax_13)
                        lParam_1 = lParam_4
                    case 0x529
                        if (arg4 == 4)
                            int32_t var_130_27 = eax_13.d
                            sub_578ec0(arg1, lParam_1, 0)
                        else
                            int32_t var_130_26 = eax_13.d
                            sub_578ec0(arg1, lParam_1, arg4)
                        
                        lParam_1 = lParam_4
                    case 0x533
                        if (arg4 == 4)
                            int32_t var_130_25 = eax_13.d
                            sub_578dd0(arg1, lParam_1, 0)
                        else
                            int32_t var_130_24 = eax_13.d
                            sub_578dd0(arg1, lParam_1, arg4)
                        
                        lParam_1 = lParam_4
                    case 0x546
                        sub_576380(arg1, lParam_1, arg4, eax_13)
                        lParam_1 = lParam_4
                    case 0x551
                        if (arg4 == 4)
                            int32_t var_130_33 = eax_13.d
                            sub_5790a0(arg1, lParam_1, 0)
                        else
                            int32_t var_130_32 = eax_13.d
                            sub_5790a0(arg1, lParam_1, arg4)
                        
                        lParam_1 = lParam_4
                    case 0x565
                        if (arg4 == 4)
                            int32_t var_130_31 = eax_13.d
                            sub_578fb0(arg1, lParam_1, 0)
                        else
                            int32_t var_130_30 = eax_13.d
                            sub_578fb0(arg1, lParam_1, arg4)
                        
                        lParam_1 = lParam_4
                    case 0x58e
                        if (arg4 == 4)
                            int32_t var_130_37 = eax_13.d
                            sub_579280(arg1, lParam_1, 0)
                        else
                            int32_t var_130_36 = eax_13.d
                            sub_579280(arg1, lParam_1, arg4)
                        
                        lParam_1 = lParam_4
                    case 0x5ab
                        if (arg4 == 4)
                            int32_t var_130_39 = eax_13.d
                            sub_579370(arg1, lParam_1, 0)
                        else
                            int32_t var_130_38 = eax_13.d
                            sub_579370(arg1, lParam_1, arg4)
                        
                        lParam_1 = lParam_4
    else if (eax_14 == 0x47f)
        if (arg4 == 4)
            int32_t var_130_15 = eax_13.d
            sub_578bf0(arg1, lParam_1, 0)
        else
            int32_t var_130_14 = eax_13.d
            sub_578bf0(arg1, lParam_1, arg4)
        
        lParam_1 = lParam_4
    else if (eax_14 s> 0x15)
        if (eax_14 == 0x3fc)
            sub_5763d0(arg1, lParam_1, arg4, eax_13)
            lParam_1 = lParam_4
        else if (eax_14 == 0x3fd)
            if (arg4 == 4)
                int32_t var_130_12 = eax_13.d
                sub_579550(arg1, lParam_1, 0)
            else
                int32_t var_130_11 = eax_13.d
                sub_579550(arg1, lParam_1, arg4)
            
            lParam_1 = lParam_4
    else if (eax_14 != 0x15 && eax_14 == 0xb)
        if (arg4 == 4)
            LRESULT lParam_3 = lParam_1
            sub_5764f0(arg1, lParam_1, nullptr)
        else
            LRESULT lParam_2 = lParam_1
            sub_5764f0(arg1, lParam_1, arg4)
        
        lParam_1 = lParam_4

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_120)
return lParam_1
