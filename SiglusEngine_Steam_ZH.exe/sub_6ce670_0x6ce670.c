// 函数: sub_6ce670
// 地址: 0x6ce670
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* ebx = arg3
void* var_e8 = arg2
void* var_fc = ebx

if (ebx == 0 || arg2 == 0 || arg4 == 0)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return 0

int32_t* ecx = *(arg2 + 0x80)

if (*(arg2 + 0x84) - ecx s>= 1)
    goto label_6ce749

int32_t* eax_4 = 0x7fffffff - ecx
void* ecx_14
char* edx_4
char const* const var_114_2
char var_e0[0xd8]

if (eax_4 s< 1)
label_6ce7f9:
    
    if ((*(ebx + 0x74) & 0x8000) != 0)
        var_114_2 = "too many text chunks"
    label_6cea46:
        sub_6d4690(eax_4, &var_e0, ebx, var_114_2)
        sub_6d4470(ebx, &var_e0)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return 1
    
    edx_4 = "too many text chunks"
    
    if ((*(ebx + 0x78) & &__dos_header) != 0)
    label_6cea81:
        sub_6d4470(ebx, edx_4)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return 1
else
    void* esi_3
    
    if (ecx + 1 s>= 0x7ffffff7)
        esi_3 = 0x7fffffff
    else
        esi_3 = (ecx + 9) & 0xfffffff8
    
    void* eax_6 = esi_3 - ecx
    int32_t var_114_1 = 0x1c
    eax_4 = sub_6d8290(eax_6, *(arg2 + 0x88), ebx, ecx, eax_6)
    
    if (eax_4 == 0)
        goto label_6ce7f9
    
    sub_6d83a0(ebx, *(var_e8 + 0x88))
    arg2 = var_e8
    *(arg2 + 0xe8) |= 0x4000
    *(arg2 + 0x88) = eax_4
    *(arg2 + 0x84) = esi_3
label_6ce749:
    int32_t* esi_4 = arg4 + 0x14
    int32_t var_f4_2 = 0
    int32_t* var_e4_1 = esi_4
    
    while (true)
        int32_t ecx_3 = *(arg2 + 0x80)
        int32_t eax_9 = ecx_3 * 7
        int32_t* edx_3 = *(arg2 + 0x88) + (eax_9 << 2)
        char* ecx_5 = esi_4[-4]
        int32_t* var_f0_1 = edx_3
        
        if (ecx_5 == 0)
            arg2 = var_e8
        else
            void* edi_1 = esi_4[-5]
            
            if (edi_1 s< 0xffffffff || edi_1 s>= 3)
                ecx_14 = ebx
                
                if ((*(ebx + 0x74) & 0x8000) == 0)
                    edx_4 = "text compression mode is out of range"
                    
                    if ((*(ebx + 0x78) & &__dos_header) == 0)
                        goto label_6ceab0
                else
                    sub_6d4690(eax_9, &var_e0, ecx_14, "text compression mode is out of range")
                    edx_4 = &var_e0
                    ecx_14 = ebx
                
                sub_6d4470(ecx_14, edx_4)
                arg2 = var_e8
            else
                char* ecx_6 = ecx_5
                
                do
                    eax_9.b = *ecx_6
                    ecx_6 = &ecx_6[1]
                while (eax_9.b != 0)
                
                void* ecx_7 = ecx_6 - &ecx_5[1]
                void* var_100_1 = ecx_7
                char* ebx_2
                char* edi_2
                
                if (edi_1 s> 0)
                    char* ebx_3 = *esi_4
                    
                    if (ebx_3 == 0)
                        ebx_2 = nullptr
                    else
                        do
                            eax_9.b = *ebx_3
                            ebx_3 = &ebx_3[1]
                        while (eax_9.b != 0)
                        
                        ebx_2 = ebx_3 - &ebx_3[1]
                    
                    char* edi_4 = esi_4[1]
                    
                    if (edi_4 == 0)
                        edi_2 = nullptr
                    else
                        void* eax_12
                        
                        do
                            eax_12.b = *edi_4
                            edi_4 = &edi_4[1]
                        while (eax_12.b != 0)
                        edi_2 = edi_4 - &edi_4[1]
                else
                    ebx_2 = nullptr
                    edi_2 = nullptr
                
                char* esi_5 = esi_4[-3]
                void* eax_11
                void* esi_6
                
                if (esi_5 == 0 || *esi_5 == 0)
                    esi_6 = nullptr
                    int32_t eax_13
                    eax_13.b = edi_1 s> 0
                    eax_11 = (eax_13 << 1) + 0xffffffff
                else
                    void* eax_10
                    
                    do
                        eax_10.b = *esi_5
                        esi_5 = &esi_5[1]
                    while (eax_10.b != 0)
                    esi_6 = esi_5 - &esi_5[1]
                    eax_11 = edi_1
                
                *edx_3 = eax_11
                void* eax_16 = &edi_2[4] + esi_6 + ebx_2
                
                if (eax_16 == neg.d(ecx_7))
                    eax_4 = nullptr
                else
                    eax_4 = sub_6d8210(var_fc, eax_16 + ecx_7)
                    ecx_7 = var_100_1
                    edx_3 = var_f0_1
                
                edx_3[1] = eax_4
                
                if (eax_4 == 0)
                    break
                
                sub_748840(eax_4, var_e4_1[-4], ecx_7)
                *(var_100_1 + var_f0_1[1]) = 0
                void* eax_30
                int32_t* ebx_4
                
                if (var_e4_1[-5] s<= 0)
                    ebx_4 = var_f0_1
                    void* eax_32 = ebx_4[1] + 1
                    ebx_4[5] = 0
                    ebx_4[6] = 0
                    eax_30 = eax_32 + var_100_1
                else
                    void* eax_22 = var_f0_1[1] + var_100_1 + 1
                    var_f0_1[5] = eax_22
                    sub_748840(eax_22, *var_e4_1, ebx_2)
                    ebx_2[var_f0_1[5]] = 0
                    void* eax_26 = var_f0_1[5] + 1 + ebx_2
                    ebx_4 = var_f0_1
                    ebx_4[6] = eax_26
                    sub_748840(eax_26, var_e4_1[1], edi_2)
                    edi_2[ebx_4[6]] = 0
                    eax_30 = ebx_4[6] + 1 + edi_2
                
                ebx_4[2] = eax_30
                
                if (esi_6 != 0)
                    sub_748840(ebx_4[2], var_e4_1[-3], esi_6)
                
                *(esi_6 + ebx_4[2]) = 0
                
                if (*ebx_4 s<= 0)
                    ebx_4[3] = esi_6
                    ebx_4[4] = 0
                else
                    ebx_4[3] = 0
                    ebx_4[4] = esi_6
                
                arg2 = var_e8
                ebx = var_fc
                esi_4 = var_e4_1
                *(arg2 + 0x80) = ecx_3 + 1
        
        esi_4 = &esi_4[7]
        int32_t eax_38 = var_f4_2 + 1
        var_e4_1 = esi_4
        var_f4_2 = eax_38
        
        if (eax_38 s>= 1)
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return 0
    
    ebx = var_fc
    
    if ((*(ebx + 0x74) & 0x8000) != 0)
        var_114_2 = "text chunk: out of memory"
        goto label_6cea46
    
    edx_4 = "text chunk: out of memory"
    
    if ((*(ebx + 0x78) & &__dos_header) != 0)
        goto label_6cea81
ecx_14 = ebx
label_6ceab0:
sub_6d42e0(ecx_14, edx_4)
noreturn
