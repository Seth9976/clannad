// 函数: sub_541000
// 地址: 0x541000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0b88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT hWnd = sub_6c34f0(arg1 + 0x920)
void* edi = data_bac4a0
int32_t ebx = *(edi + 0x6c)

if (ebx s>= 0)
    int32_t* esi_1 = data_bac4a4
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = muls.dp.d(0x77280773, esi_1[1] - *esi_1)
    int32_t edx_2 = edx_1 s>> 9
    hWnd = (edx_2 u>> 0x1f) + edx_2
    
    if (ebx s< hWnd)
        int32_t* ebx_2 = (ebx << 4) + esi_1[3]
        WPARAM wParam = 0
        int32_t ecx_3 = *ebx_2
        int32_t eax_8 = ebx_2[1] - ecx_3
        
        if ((eax_8 & 0xfffffff8) s> 0)
            int32_t ecx_4 = ecx_3
            
            do
                int32_t var_74
                int16_t* eax_9 = sub_6ada50(eax_8, *((wParam << 3) + ecx_4 + 4), &var_74, 0xa)
                int32_t var_8_1 = 0
                int16_t var_5c
                int16_t* eax_10 = sub_6ada50(eax_9, (*ebx_2)[wParam * 2], &var_5c, 0xa)
                var_8_1.b = 1
                int16_t var_44
                int16_t* eax_11 = sub_532b80(eax_10, eax_10, &var_44, 0xad7f40)
                var_8_1.b = 2
                int16_t var_2c
                int16_t* lParam = sub_5327a0(eax_11, eax_11, &var_2c, eax_9)
                
                if (*(lParam + 0x14) u>= 8)
                    lParam = *lParam
                
                HWND hWnd_1 = *(arg1 + 0x924)
                
                if (hWnd_1 != 0)
                    SendMessageW(hWnd_1, 0x14a, wParam, lParam)
                
                int32_t var_18
                
                if (var_18 u>= 8)
                    j__free(var_2c.d)
                
                var_18 = 7
                int32_t var_1c_1 = 0
                var_2c = 0
                int32_t var_30
                
                if (var_30 u>= 8)
                    j__free(var_44.d)
                
                var_30 = 7
                int32_t var_34_1 = 0
                var_44 = 0
                int32_t var_48
                
                if (var_48 u>= 8)
                    j__free(var_5c.d)
                
                int32_t var_8_2 = 0xffffffff
                var_48 = 7
                int32_t var_4c_1 = 0
                var_5c = 0
                int32_t var_60
                
                if (var_60 u>= 8)
                    j__free(var_74)
                
                wParam += 1
                ecx_4 = *ebx_2
                eax_8 = (ebx_2[1] - ecx_4) s>> 3
            while (wParam s< eax_8)
            
            edi = data_bac4a0
        
        hWnd = *(arg1 + 0x924)
        
        if (hWnd != 0)
            hWnd = SendMessageW(hWnd, 0x14e, *(edi + 0x70), 0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return hWnd
