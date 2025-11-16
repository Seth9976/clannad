// 函数: sub_65dec0
// 地址: 0x65dec0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4c98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_80 = ebx
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_630a10()
*(data_bac4a0 + 0x248) = 0
sub_6304c0(1)
char* eax_4 = data_bac508
int32_t var_74
int32_t var_60
void* ecx_5

if (*eax_4 == 0)
    int16_t var_5c
    int16_t* eax_18 = sub_6893c0(&var_5c)
    int32_t var_8_3 = 1
    int32_t* ecx_11 = data_bac4d4 + 0x10
    
    if (ecx_11 != eax_18)
        sub_52e3c0(ecx_11, eax_18, 0, 0xffffffff)
    
    int32_t var_8_4 = 0xffffffff
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 7
    var_5c = 0
    int32_t var_4c_1 = 0
    void** eax_19 = sub_689420(&var_74)
    int32_t var_8_5 = 2
    ecx_5 = data_bac4d4 + 0x28
    
    if (ecx_5 != eax_19)
        ecx_5 = sub_52e3c0(ecx_5, eax_19, 0, 0xffffffff)
    
    int32_t var_8_6 = 0xffffffff
    
    if (var_60 u>= 8)
        ecx_5 = j__free(var_74)
else
    int32_t* ecx_1 = data_bac4d4 + 0x10
    
    if (ecx_1 != &eax_4[4])
        sub_52e3c0(ecx_1, &eax_4[4], 0, 0xffffffff)
    
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, u"[dummy]", 7)
    int32_t var_8_1 = 0
    void* edi_1 = data_bac4d4
    
    if (edi_1 + 0x28 != &var_2c)
        sub_52e3c0(edi_1 + 0x28, &var_2c, 0, 0xffffffff)
        edi_1 = data_bac4d4
    
    int32_t var_8_2 = 0xffffffff
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
        edi_1 = data_bac4d4
    
    void** esi_1 = data_bac50c
    var_2c = 0
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    int32_t i = 0
    ecx_5 = esi_1[1] - *esi_1
    
    if (ecx_5 s/ 0x30 s> 0)
        ebx = 0
        
        do
            void* eax_9 = edi_1 + 0x10
            int32_t edx_4 = *(eax_9 + 0x10)
            void* ecx_7 = *esi_1 + ebx
            
            if (*(eax_9 + 0x14) u>= 8)
                eax_9 = *eax_9
            
            int32_t var_90_2 = edx_4
            
            if (sub_536340(ecx_7, ecx_7, *(ecx_7 + 0x10), eax_9) == 0)
                void** eax_13 = *esi_1 + 0x18 + ebx
                
                if (edi_1 + 0x28 != eax_13)
                    sub_52e3c0(edi_1 + 0x28, eax_13, 0, 0xffffffff)
                    edi_1 = data_bac4d4
                    esi_1 = data_bac50c
            
            ecx_5 = esi_1[1] - *esi_1
            ebx += 0x30
            i += 1
        while (i s< ecx_5 s/ 0x30)

char result = sub_65d2f0(ecx_5)

if (result != 0)
    int32_t eax_22 = sub_6980b0(data_bac45c, data_bac510 + 0xa0)
    
    if (eax_22 s>= 0)
        int32_t var_30_1 = 7
        int32_t var_34_1 = 0
        int16_t var_44 = 0
        sub_52e720(&var_44, 0xaf8164, 0x12)
        int32_t var_8_8 = 4
        sub_684160(data_bac424, 5, &var_44)
        int32_t var_8_9 = 0xffffffff
        
        if (var_30_1 u>= 8)
            j__free(var_44.d)
        
        void* edx_9 = data_bac45c
        var_44 = 0
        int32_t var_30_2 = 7
        int32_t var_34_2 = 0
        int32_t edi_2 = *(data_bac510 + 0xb8)
        
        if (edi_2 u<= 0x3e7)
            *(edx_9 + 0x64) = eax_22
            void* ecx_19 = eax_22 * 0x54 + *(edx_9 + 0x54)
            *(edx_9 + 0x60) = *(*(ecx_19 + 0x10) + (edi_2 << 2)) + *(ecx_19 + 8)
        
        sub_676610(1)
        result = 1
    else
        sub_676610(0)
        int16_t* eax_23 = sub_532b80(0, data_bac510 + 0xa0, &var_74, &data_af80c4)
        int32_t var_8_7 = 3
        ebx.b = sub_684160(data_bac424, 9, eax_23)
        
        if (var_60 u>= 8)
            j__free(var_74)
        
        result = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
