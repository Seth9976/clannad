// 函数: sub_5411f0
// 地址: 0x5411f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0bfc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_11c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_f0 = edi
int32_t result = data_bac4a0
int32_t esi = *(result + 0x6c)

if (esi s>= 0)
    int32_t* eax_3 = data_bac4a4
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = muls.dp.d(0x77280773, eax_3[1] - *eax_3)
    int32_t edx_2 = edx_1 s>> 9
    result = (edx_2 u>> 0x1f) + edx_2
    
    if (esi s< result)
        int32_t eax_7 = sub_540e70()
        int32_t* ecx_5 = *(data_bac4a4 + 0xc) + (*(data_bac4a0 + 0x6c) << 4)
        int32_t eax_8 = ecx_5[3]
        int32_t result_1
        sub_541980(&result_1, ecx_5)
        int32_t var_8_1 = 0
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        int16_t var_2c = 0
        var_8_1.b = 1
        WPARAM wParam = 0
        int32_t result_2 = result_1
        int32_t var_100
        int32_t lParam = (var_100 - result_2) s>> 3
        int32_t lParam_3 = lParam
        
        if (lParam s> 0)
            while (true)
                int32_t var_ec
                int16_t* eax_11 = sub_6ada50(lParam, *(result_2 + (wParam << 3) + 4), &var_ec, 0xa)
                var_8_1.b = 2
                int16_t var_74
                int16_t* eax_12 = sub_6ada50(eax_11, *(result_1 + (wParam << 3)), &var_74, 0xa)
                var_8_1.b = 3
                int16_t var_5c
                int16_t* eax_13 = sub_532b80(eax_12, eax_12, &var_5c, 0xad7f40)
                var_8_1.b = 4
                int16_t var_44
                int16_t* eax_14 = sub_5327a0(eax_13, eax_13, &var_44, eax_11)
                var_8_1.b = 5
                
                if (&var_2c != eax_14)
                    sub_52e3c0(&var_2c, eax_14, 0, 0xffffffff)
                
                int32_t var_30
                
                if (var_30 u>= 8)
                    j__free(var_44.d)
                
                var_30 = 7
                int32_t var_34_1 = 0
                var_44 = 0
                int32_t var_48
                
                if (var_48 u>= 8)
                    j__free(var_5c.d)
                
                var_48 = 7
                int32_t var_4c_1 = 0
                var_5c = 0
                int32_t var_60
                
                if (var_60 u>= 8)
                    j__free(var_74.d)
                
                int32_t eax_15 = 0
                var_8_1.b = 1
                var_60 = 7
                int32_t var_64_1 = 0
                var_74 = 0
                int32_t var_d8
                
                if (var_d8 u>= 8)
                    eax_15 = j__free(var_ec)
                
                if (wParam == eax_7)
                    int16_t var_a4
                    int16_t* eax_16 = sub_532b80(eax_15, &var_2c, &var_a4, 0xad7f48)
                    var_8_1.b = 6
                    int16_t var_8c
                    int16_t* lParam_1 = sub_5327a0(eax_16, eax_16, &var_8c, &data_b6c95c)
                    
                    if (*(lParam_1 + 0x14) u>= 8)
                        lParam_1 = *lParam_1
                    
                    edi = var_f0
                    HWND hWnd = *(edi + 0x924)
                    
                    if (hWnd != 0)
                        SendMessageW(hWnd, 0x14a, wParam, lParam_1)
                    
                    HWND hWnd_1 = *(edi + 0x924)
                    
                    if (hWnd_1 != 0)
                        SendMessageW(hWnd_1, 0x144, wParam + 1, 0)
                    
                    int32_t var_78
                    
                    if (var_78 u>= 8)
                        j__free(var_8c.d)
                    
                    var_8_1.b = 1
                    var_78 = 7
                    int32_t var_7c_1 = 0
                    var_8c = 0
                    int32_t var_90
                    
                    if (var_90 u>= 8)
                        j__free(var_a4.d)
                    
                    lParam = 0
                    var_90 = 7
                    int32_t var_94_1 = 0
                    var_a4 = 0
                else if (wParam != eax_8)
                    edi = var_f0
                    lParam = &var_2c
                    
                    if (var_18_1 u>= 8)
                        lParam = var_2c.d
                    
                    HWND hWnd_4 = *(edi + 0x924)
                    
                    if (hWnd_4 != 0)
                        lParam = SendMessageW(hWnd_4, 0x14a, wParam, lParam)
                    
                    HWND hWnd_5 = *(edi + 0x924)
                    
                    if (hWnd_5 != 0)
                        lParam = SendMessageW(hWnd_5, 0x144, wParam + 1, 0)
                else
                    int16_t var_d4
                    void** eax_18 = sub_532b80(eax_15, &var_2c, &var_d4, 0xad7f48)
                    var_8_1.b = 7
                    int16_t var_bc
                    LPARAM lParam_2 = sub_5327a0(eax_18, eax_18, &var_bc, &data_b6c974)
                    
                    if (*(lParam_2 + 0x14) u>= 8)
                        lParam_2 = *lParam_2
                    
                    edi = var_f0
                    HWND hWnd_2 = *(edi + 0x924)
                    
                    if (hWnd_2 != 0)
                        SendMessageW(hWnd_2, 0x14a, wParam, lParam_2)
                    
                    HWND hWnd_3 = *(edi + 0x924)
                    
                    if (hWnd_3 != 0)
                        SendMessageW(hWnd_3, 0x144, wParam + 1, 0)
                    
                    int32_t var_a8
                    
                    if (var_a8 u>= 8)
                        j__free(var_bc.d)
                    
                    var_8_1.b = 1
                    var_a8 = 7
                    int32_t var_ac_1 = 0
                    var_bc = 0
                    int32_t var_c0
                    
                    if (var_c0 u>= 8)
                        j__free(var_d4.d)
                    
                    lParam = 0
                    var_c0 = 7
                    int32_t var_c4_1 = 0
                    var_d4 = 0
                
                wParam += 1
                
                if (wParam s>= lParam_3)
                    break
                
                result_2 = result_1
        
        HWND hWnd_6 = *(edi + 0x924)
        
        if (hWnd_6 != 0)
            SendMessageW(hWnd_6, 0x14e, *(data_bac4a0 + 0x70), 0)
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_2 = 7
        var_2c = 0
        result = result_1
        int32_t var_1c_2 = 0
        
        if (result != 0)
            result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
