// 函数: sub_624440
// 地址: 0x624440
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bff10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x4a79c) != 0)
    result.b = *(arg1 + 0x56c9c)
    int32_t* ecx = data_bac458
    
    if (result.b != 0 && *(ecx + 0x381) == 0)
        sub_5cfa20(arg1 + 0x56b64)
        ecx = data_bac458
    
    int32_t* var_20
    int32_t* var_1c
    int32_t* edi_1
    
    if (*(arg1 + 0x4a684) == 0)
        int32_t eax_8 = 0
        
        if (*ecx == 0xe)
            ecx[0x20]
            eax_8 = sub_54b180(1)
        
        sub_608dd0(*(arg1 + 0x56b34) + 0x8ec, eax_8)
        void* esi_5 = *(arg1 + 0x56b34) + 0xb48
        int32_t ebx_6 = (*(esi_5 + 0xa8) - *(esi_5 + 0xa4)) s/ 0x1d4
        sub_6251a0(&var_20, ebx_6)
        int32_t ecx_19 = 0
        int32_t var_8_2 = 1
        edi_1 = var_20
        
        if (ebx_6 s> 0)
            int32_t edx_11 = 0
            
            do
                edi_1[ecx_19 * 2] = ecx_19
                edx_11 += 0x1d4
                edi_1[ecx_19 * 2 + 1] = *(*(esi_5 + 0xa4) + edx_11 - 0xa8)
                ecx_19 += 1
            while (ecx_19 s< ebx_6)
        
        if (edi_1 != var_1c)
            sub_625240(edi_1, var_1c)
        
        int32_t esi_6 = 0
        
        if (ebx_6 s> 0)
            do
                sub_5c1310(edi_1[esi_6 * 2] * 0x1d4 + *(esi_5 + 0xa4))
                esi_6 += 1
            while (esi_6 s< ebx_6)
        
    label_62467a:
        
        if (edi_1 != 0)
            j__free(edi_1)
    else
        result.b = *(arg1 + 0x630c4)
        
        if (result.b != 0)
            int32_t eax_3 = 0
            
            if (*ecx == 0xe)
                ecx[0x20]
                eax_3 = sub_54b180(1)
            
            sub_608dd0(*(arg1 + 0x62f18) + 0x8ec, eax_3)
            void* esi_2 = *(arg1 + 0x62f18) + 0xb48
            int32_t ebx_3 = (*(esi_2 + 0xa8) - *(esi_2 + 0xa4)) s/ 0x1d4
            sub_6251a0(&var_20, ebx_3)
            int32_t ecx_8 = 0
            int32_t var_8_1 = 0
            edi_1 = var_20
            
            if (ebx_3 s> 0)
                int32_t edx_5 = 0
                
                do
                    edi_1[ecx_8 * 2] = ecx_8
                    edx_5 += 0x1d4
                    edi_1[ecx_8 * 2 + 1] = *(*(esi_2 + 0xa4) + edx_5 - 0xa8)
                    ecx_8 += 1
                while (ecx_8 s< ebx_3)
            
            if (edi_1 != var_1c)
                result, ecx_8 = sub_625240(edi_1, var_1c)
            
            int32_t esi_3 = 0
            
            if (ebx_3 s> 0)
                do
                    sub_5c1310(edi_1[esi_3 * 2] * 0x1d4 + *(esi_2 + 0xa4))
                    esi_3 += 1
                while (esi_3 s< ebx_3)
            
            goto label_62467a

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
