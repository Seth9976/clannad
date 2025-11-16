// 函数: sub_596060
// 地址: 0x596060
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MBE?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AAVios_base@2@_W_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_b4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT result = *(arg2 + 4)
void var_cc
int32_t var_a4
int32_t var_9c
int32_t var_98
WPARAM var_94
int32_t var_90
void var_5c
void var_44
void var_2c

if (result == 0x47e)
    result = *(arg2 + 8)
    
    if (result == 0xffffff9b)
        *(arg1 + 0x8f8) = *(arg2 + 0xc)
    else if (result == 0xfffffffd)
        HWND eax_3 = sub_6c4c40(arg1 + 0xb8)
        WPARAM eax_4 = sub_6c4be0(arg1 + 0xb8)
        int32_t* eax_5 = sub_6b1d50(&var_a4)
        int32_t var_b8_1 = eax_5[1]
        int32_t var_bc_1 = *eax_5
        sub_6c1c80(arg1 + 0xb8, &var_9c)
        sub_6c4ed0(arg1 + 0xb8, var_9c, var_98, &var_94, &var_90)
        
        if (eax_3 == 1 && eax_4 == var_94)
            void* eax_6 = data_bac4e4
            
            if (*(eax_6 + 0x1b0) == 0 || *(eax_6 + 0x1c8) == 0)
                sub_60e260()
            else
                int32_t var_8_1 = 0
                int16_t* eax_8 = sub_532b80(sub_698170(data_bac45c, &var_2c, eax_4), 
                    data_bac4e4 + 0x1a0, &var_5c, &data_ad900c)
                var_8_1.b = 1
                int16_t* eax_9 = sub_5327a0(eax_8, eax_8, &var_44, &var_2c)
                var_8_1.b = 2
                void var_74
                sub_532b80(eax_9, eax_9, &var_74, &data_af0494)
                sub_52e8a0(&var_44)
                var_8_1.b = 5
                sub_52e8a0(&var_5c)
                sub_6b53f0(sub_536170(&var_cc, &var_74), data_bac4e4 + 0x1b8, eax_3)
                sub_52e8a0(&var_74)
                sub_52e8a0(&var_2c)
else if (result == 0x47c)
    result = *(arg2 + 8)
    
    if (result == 0xffffff9b)
        uint32_t ecx_15 = *(arg2 + 0x18) u>> 0xc
        bool cond:0_1 = ecx_15 u<= 1
        
        if (ecx_15 != 1)
            goto label_596235
        
        if ((*(arg2 + 0x14) & 0xfffff000) u<= 0x1000)
            cond:0_1 = ecx_15 u<= 1
        label_596235:
            
            if (not(cond:0_1) && (*(arg2 + 0x14) & 0xfffff000) == 0x1000)
                (*(*data_bac48c + *(arg1 + 0x8f8) * 0xc))[*(arg2 + 0xc)] = 0
        else
            (*(*data_bac48c + *(arg1 + 0x8f8) * 0xc))[*(arg2 + 0xc)] = 1
    else if (result == 0xfffffffd)
        HWND eax_19 = sub_6c4c40(arg1 + 0x3ec)
        var_94 = sub_6c4be0(arg1 + 0x3ec)
        int32_t* eax_21 = sub_6b1d50(&var_9c)
        int32_t var_b8_7 = eax_21[1]
        int32_t var_bc_4 = *eax_21
        sub_6c1c80(arg1 + 0x3ec, &var_a4)
        int32_t var_a0
        sub_6c4ed0(arg1 + 0x3ec, var_a4, var_a0, &var_90, &var_98)
        
        if (eax_19 == 1)
            WPARAM edi_2 = var_94
            
            if (edi_2 == var_90)
                void* eax_22 = data_bac4e4
                
                if (*(eax_22 + 0x1b0) == 0 || *(eax_22 + 0x1c8) == 0)
                    sub_60e260()
                else
                    int32_t esi_3 = *(arg1 + 0x8f8)
                    void* ecx_25 = data_bac45c
                    int32_t edi_3 = *(*(*(ecx_25 + 0x54) + esi_3 * 0x54 + 0x40) + (edi_2 << 2))
                    int32_t var_8_2 = 6
                    void var_8c
                    int16_t* eax_26 = sub_532b80(sub_698170(ecx_25, &var_2c, esi_3), 
                        data_bac4e4 + 0x1a0, &var_8c, &data_ad900c)
                    var_8_2.b = 7
                    int16_t* eax_27 = sub_5327a0(eax_26, eax_26, &var_5c, &var_2c)
                    var_8_2.b = 8
                    sub_532b80(eax_27, eax_27, &var_44, &data_af0494)
                    sub_52e8a0(&var_5c)
                    var_8_2.b = 0xb
                    sub_52e8a0(&var_8c)
                    sub_6b53f0(sub_536170(&var_cc, &var_44), data_bac4e4 + 0x1b8, edi_3)
                    sub_52e8a0(&var_44)
                    sub_52e8a0(&var_2c)
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
