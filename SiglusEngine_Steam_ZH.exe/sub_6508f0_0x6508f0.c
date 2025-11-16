// 函数: sub_6508f0
// 地址: 0x6508f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3e40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = data_bac510
int32_t edi = result[0x42e9]

if (edi s> 0)
    result = arg1[0x11].d
    
    if (result != *(arg1 + 0x8c))
        void* esi_1 = data_bac504
        
        if ((*(esi_1 + 0xc0) - *(esi_1 + 0xbc)) s/ 0xe == edi)
            int64_t* ecx_2 = *(esi_1 + 0xbc)
            int32_t var_24_1 = ecx_2[1].d
            int32_t eax_7
            eax_7.w = *(ecx_2 + 0xc)
            int16_t var_20_1 = eax_7.w
            int64_t var_2c = *ecx_2
            sub_6513a0(esi_1 + 0xc8, &var_2c)
            int32_t* ecx_5 = data_bac504 + 0xbc
            void* var_14
            sub_6512f0(ecx_5, &var_14, *ecx_5)
        
        int32_t* eax_8
        int32_t* ecx_6
        eax_8, ecx_6 = sub_745f3f(0xa8)
        int32_t* eax_9
        
        if (eax_8 == 0)
            eax_9 = nullptr
        else
            ecx_6 = eax_8
            eax_9 = sub_633790(ecx_6)
        
        int32_t* var_1c = eax_9
        int32_t* var_18 = nullptr
        int32_t var_8_1 = 0
        int32_t* var_40_3 = &var_18
        sub_650460(eax_9, eax_9, ecx_6)
        int32_t var_8_2 = 1
        *var_1c = *arg1
        var_1c[2] = arg1[1].d
        int32_t ecx_7
        ecx_7.w = *(arg1 + 0xc)
        var_1c[3].w = ecx_7.w
        int32_t* esi_2 = var_1c
        
        if (&esi_2[4] != &arg1[2])
            sub_52e3c0(&esi_2[4], &arg1[2], 0, 0xffffffff)
            esi_2 = var_1c
        
        if (&esi_2[0xa] != &arg1[5])
            sub_52e3c0(&esi_2[0xa], &arg1[5], 0, 0xffffffff)
            esi_2 = var_1c
        
        if (&esi_2[0x10] != &arg1[8])
            sub_52e3c0(&esi_2[0x10], &arg1[8], 0, 0xffffffff)
            esi_2 = var_1c
        
        if (&esi_2[0x16] != &arg1[0xb])
            sub_52e3c0(&esi_2[0x16], &arg1[0xb], 0, 0xffffffff)
            esi_2 = var_1c
        
        if (&esi_2[0x1c] != &arg1[0xe])
            sub_52e3c0(&esi_2[0x1c], &arg1[0xe], 0, 0xffffffff)
            esi_2 = var_1c
        
        sub_5970d0(&esi_2[0x22], &arg1[0x11])
        esi_2[0x25] = *(arg1 + 0x94)
        int32_t* esi_3 = var_1c
        sub_5970d0(&esi_3[0x26], &arg1[0x13])
        void* ecx_15 = data_bac504
        esi_3[0x29] = *(arg1 + 0xa4)
        sub_651240(ecx_15 + 0xbc, arg1)
        result = sub_5b17d0(sub_651340(data_bac504 + 0xc8, arg1), &var_1c)
        int32_t var_8_3 = 0xffffffff
        int32_t* esi_4 = var_18
        
        if (esi_4 != 0)
            bool cond:0_1 = esi_4[1] != 1
            result = esi_4[1]
            esi_4[1] -= 1
            
            if (not(cond:0_1))
                (*(*esi_4 + 4))(eax_2)
                result = &esi_4[2]
                int32_t edi_3 = *result
                *result -= 1
                
                if (edi_3 == 1)
                    result = (*(*esi_4 + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
