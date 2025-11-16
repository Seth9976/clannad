// 函数: sub_626200
// 地址: 0x626200
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bffb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_4ebe2ec
int32_t edx_1 = arg1 * 6
int32_t edi = edx_1 * 2
void* result

if (ecx[1] * 2 s>= edi)
    result.b = 1
else
    char eax_4
    int32_t ecx_1
    eax_4, ecx_1 = sub_6fde50(ecx, edx_1)
    int32_t var_5c
    int16_t var_2c
    int16_t* eax_6
    
    if (eax_4 != 0)
        int32_t var_98_5 = ecx_1
        int32_t var_78
        int32_t* var_9c_1 = &var_78
        
        if (sub_6fdf20(data_4ebe2ec, ecx_1, edi) == 0)
            void** eax_8 = sub_6b9ed0(&var_5c)
            int32_t var_8_2 = 2
            eax_6 = sub_548cb0(eax_8, 0xaf4434, &var_2c, eax_8)
            var_8_2.b = 3
            goto label_626288
        
        int32_t ebx_1 = 0
        
        if (arg1 s> 0)
            int32_t edi_1 = 0
            
            do
                int16_t esi_1 = (ebx_1 << 2).w
                ebx_1 += 1
                edi_1 += 0xc
                *(edi_1 + var_78 - 0xc) = esi_1
                *(edi_1 + var_78 - 0xa) = esi_1 + 1
                *(edi_1 + var_78 - 8) = esi_1 + 2
                *(edi_1 + var_78 - 6) = esi_1 + 2
                *(edi_1 + var_78 - 4) = esi_1 + 1
                *(edi_1 + var_78 - 2) = esi_1 + 3
            while (ebx_1 s< arg1)
        
        if (sub_6fe040(data_4ebe2ec) != 0)
            *(data_bac4a0 + 0x21c) = edi
            result.b = 1
        else
            int32_t var_74
            int16_t* eax_16 = sub_6b9ed0(&var_74)
            int32_t var_8_3 = 4
            int16_t var_44
            int16_t* eax_17 = sub_548cb0(eax_16, 0xaf4470, &var_44, eax_16)
            var_8_3.b = 5
            sub_684160(data_bac424, 2, eax_17)
            int32_t var_30
            
            if (var_30 u>= 8)
                j__free(var_44.d)
            
            int32_t var_30_1 = 7
            int32_t var_34_1 = 0
            var_44 = 0
            int32_t var_60
            
            if (var_60 u< 8)
                result.b = 0
            else
                j__free(var_74)
                result.b = 0
    else
        int16_t* eax_5 = sub_6b9ed0(&var_5c)
        int32_t var_8_1 = 0
        eax_6 = sub_548cb0(eax_5, 0xaf43f8, &var_2c, eax_5)
        var_8_1.b = 1
    label_626288:
        sub_684160(data_bac424, 2, eax_6)
        int32_t var_18
        
        if (var_18 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        var_2c = 0
        int32_t var_48
        
        if (var_48 u>= 8)
            j__free(var_5c)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
