// 函数: sub_6d69d0
// 地址: 0x6d69d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* ebx = arg9
int32_t var_68 = arg7
int32_t* var_78 = ebx

if (arg6 s>= 4)
    sub_6d42e0(arg3, "Unrecognized equation type for pCAL chunk")
    noreturn

char var_64[0x50]
void* eax_5 = sub_6cf060(&var_64, arg2, arg3, &var_64)

if (eax_5 == 0)
    sub_6d42e0(arg3, "pCAL: invalid keyword")
    noreturn

void* edi_1 = eax_5 + 1
char* ecx_1 = arg8

do
    eax_5.b = *ecx_1
    ecx_1 = &ecx_1[1]
while (eax_5.b != 0)

int32_t eax_6 = var_68
void* const edx_1
edx_1.b = eax_6 != 0
void* edx_2 = edx_1 + ecx_1 - &arg8[1]
void* var_74 = edi_1 + 0xa + edx_2
void** eax_7 = sub_6d8320(arg3, eax_6 << 2)
int32_t edx_4 = var_68
void** var_84 = eax_7
void** var_7c = nullptr

if (edx_4 s> 0)
    void* esi_1 = var_74
    void** edi_2 = eax_7
    int32_t* ebx_1 = ebx - eax_7
    
    do
        char* ecx_7 = *(ebx_1 + edi_2)
        void* eax_8
        
        do
            eax_8.b = *ecx_7
            ecx_7 = &ecx_7[1]
        while (eax_8.b != 0)
        void* const eax_9
        eax_9.b = var_7c != edx_4 - 1
        void* eax_10 = eax_9 + ecx_7 - &ecx_7[1]
        *edi_2 = eax_10
        esi_1 += eax_10
        edi_2 = &edi_2[1]
        eax_7 = var_7c + 1
        var_7c = eax_7
    while (eax_7 s< var_68)
    
    ebx = var_78
    var_74 = esi_1

sub_6d4aa0(eax_7, 0x7043414c, arg3, var_74)

if (arg3 == 0 || edi_1 == 0)
    goto label_6d6b12

int32_t eax_12 = *(arg3 + 0x58)

if (eax_12 != 0)
    sub_6caa70(eax_12(arg3, &var_64, edi_1), &var_64, arg3, edi_1)
label_6d6b12:
    uint8_t var_14 = (arg4 u>> 0x18).b
    uint8_t var_13_1 = (arg4 u>> 0x10).b
    uint8_t var_12_1 = (arg4 u>> 8).b
    char var_11_1 = arg4.b
    uint8_t var_10_1 = (arg5 u>> 0x18).b
    uint8_t var_f_1 = (arg5 u>> 0x10).b
    uint8_t var_e_1 = (arg5 u>> 8).b
    char var_c_1 = arg6.b
    char var_d_1 = arg5.b
    char var_b_1 = var_68.b
    
    if (arg3 == 0)
        goto label_6d6ba5
    
    int32_t eax_28 = *(arg3 + 0x58)
    
    if (eax_28 != 0)
        sub_6caa70(eax_28(arg3, &var_14, 0xa), &var_14, arg3, 0xa)
        
        if (arg8 == 0 || edx_2 == 0)
            goto label_6d6ba5
        
        int32_t eax_30 = *(arg3 + 0x58)
        
        if (eax_30 != 0)
            sub_6caa70(eax_30(arg3, arg8, edx_2), arg8, arg3, edx_2)
        label_6d6ba5:
            int32_t result = 0
            int32_t result_1 = 0
            
            if (var_68 s> 0)
                int32_t edx_9 = var_68
                void* ecx_17 = var_84 - ebx
                void* var_80_1 = ecx_17
                int32_t* ebx_2 = ebx
                
                do
                    int32_t edi_4 = *(ecx_17 + ebx_2)
                    char* ebx_3 = *ebx_2
                    
                    if (arg3 != 0 && ebx_3 != 0 && edi_4 != 0)
                        int32_t eax_32 = *(arg3 + 0x58)
                        
                        if (eax_32 == 0)
                            goto label_6d6c9a
                        
                        sub_6caa70(eax_32(arg3, ebx_3, edi_4), ebx_3, arg3, edi_4)
                        result = result_1
                        ecx_17 = var_80_1
                        edx_9 = var_68
                    
                    result += 1
                    ebx_2 = &var_78[1]
                    result_1 = result
                    var_78 = ebx_2
                while (result s< edx_9)
            
            if (arg3 == 0)
                sub_745f2b(eax_1 ^ &__saved_ebp)
                return result
            
            if (var_84 != 0)
                int32_t eax_34 = *(arg3 + 0x258)
                
                if (eax_34 == 0)
                    _free(var_84)
                else
                    eax_34(arg3, var_84)
            
            int32_t ecx_20 = *(arg3 + 0x138)
            var_68.b = (ecx_20 u>> 0x18).b
            var_68:1.b = (ecx_20 u>> 0x10).b
            var_68:2.b = (ecx_20 u>> 8).b
            int32_t eax_41 = *(arg3 + 0x58)
            *(arg3 + 0x2a4) = 0x82
            var_68:3.b = ecx_20.b
            
            if (eax_41 != 0)
                result = eax_41(arg3, &var_68, 4)
                sub_745f2b(eax_1 ^ &__saved_ebp)
                return result

label_6d6c9a:
sub_6d42e0(arg3, "Call to NULL write function")
noreturn
