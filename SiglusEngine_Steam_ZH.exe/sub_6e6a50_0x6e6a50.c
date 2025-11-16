// 函数: sub_6e6a50
// 地址: 0x6e6a50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg3 + 0xd138)
int32_t result = arg6
char* edi = *(arg3 + 0xd140)
void* ecx_1 = arg3 + (arg2 << 2) + 0xcb38
int32_t var_c = 0
int32_t* edx = arg5 + (arg2 << 2)
int32_t i_1 = 0
int32_t* var_18 = edx
void* var_20 = ecx_1
int32_t i

do
    int32_t j = *edx
    *(ecx_1 + 0x300) = result
    *ecx_1 = edi
    int32_t j_3 = j
    char var_138[0xfc]
    _memset(&var_138, 0, 0x100)
    int32_t edx_1 = 0
    int32_t ecx_2 = 0
    
    if (result u< j)
        void* eax_8 = arg3 + 0xc9e4
        int32_t* var_24_1 = eax_8
        
        do
            int32_t ecx_3 = ecx_2 + result
            int32_t edx_2 = edx_1 + result
            uint32_t eax_9 =
                sub_6ec760(eax_8, *(arg3 + (*(arg4 + ((var_c + 1) s>> 1 << 2)) << 2) + 0xc9f8))
            edi[eax] = eax_9.b
            edi = &edi[1]
            int32_t edx_8
            
            if (eax_9 u>= 0xf)
                edx_8 = 0
            else
                uint32_t esi = zx.d(*(eax_9 + 0xadc0a0))
                int32_t eax_11 = var_24_1[3]
                int32_t edx_5 = var_24_1[2]
                int32_t var_1c_1 = eax_11
                uint32_t edx_6
                
                if (esi != 0)
                    if (eax_11 s< esi)
                        edx_5 = sub_6ec810(var_24_1, esi)
                        var_1c_1 = *(arg3 + 0xc9f0)
                    
                    *(arg3 + 0xc9ec) = (edx_5 * 2) << (esi.b - 1)
                    *(arg3 + 0xc9f0) = var_1c_1 - esi
                    edx_6 = edx_5 u>> (0x20 - esi.b)
                else
                    edx_6 = 0
                
                edi[eax] = edx_6.b
                edi = &edi[1]
                
                if (eax_9 == 0)
                    edi[eax] = (edx_6 s>> 8).b
                    edi = &edi[1]
                
                int32_t ecx_12
                ecx_12.b = eax_9 s< 0xc
                int32_t eax_21
                eax_21.b = eax_9 s< 2
                edx_8 = edx_6 << (((neg.d(ecx_12)).b & 0x15) + ((neg.d(eax_21)).b & 0xf3))
            
            int32_t eax_25 = *((eax_9 << 2) + &data_adbd70) + edx_8
            uint32_t ecx_16 = zx.d(eax_25.b)
            result = eax_25 s>> 8 & 0xfff
            
            if (eax_25 == 0)
                result = 0x7fffffff
                ecx_2 = ecx_3
            else if (result != 0)
                ecx_2 = ecx_3
            else
                *(&var_138 + (ecx_16 << 2)) += 1
                ecx_2 = ecx_3 + 1
            
            j = j_3
            edx_1 = edx_2
            eax_8 = var_24_1
        while (ecx_2 + result u< j)
    
    result += ecx_2 - j
    int32_t j_1 = 0x3f
    int32_t var_3c = var_3c + edx_1 - ecx_2 + j
    
    do
        int32_t eax_29 = *(&var_138 + (j_1 << 2))
        j_1 -= 1
        *(&var_138 + (j_1 << 2)) += eax_29
    while (j_1 s> 0)
    
    int32_t j_2 = 0x40 - arg2
    
    if (j_2 s> 0)
        int32_t* edx_12 = arg5 + ((i_1 + j_2 + arg2) << 2)
        
        do
            edx_12 = &edx_12[-1]
            int32_t __saved_ebx
            *edx_12 -= (&__saved_ebx)[j_2]
            j_2 -= 1
        while (j_2 s> 0)
    
    i = i_1 + 0x40
    ecx_1 = var_20 + 0x100
    var_c += 1
    edx = &var_18[0x40]
    i_1 = i
    var_20 = ecx_1
    var_18 = edx
while (i s< 0xc0)
*(arg3 + 0xd140) = edi
return result
