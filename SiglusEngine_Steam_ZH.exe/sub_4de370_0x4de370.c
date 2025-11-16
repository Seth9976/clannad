// 函数: sub_4de370
// 地址: 0x4de370
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_53c = edi

if (arg3 s< 0 || arg3 s>= 4)
    void* eax_1 = *arg1
    *(eax_1 + 0x14) = 0x32
    *(eax_1 + 0x18) = arg3
    (*eax_1)(arg1)

int32_t var_110
int32_t esi

if (arg2 == 0)
    int32_t ecx_1 = arg1[arg3 + 0x32]
    var_110 = ecx_1
    esi = ecx_1
else
    esi = arg1[arg3 + 0x2e]
    var_110 = esi

if (esi == 0)
    void* eax_3 = *arg1
    *(eax_3 + 0x14) = 0x32
    *(eax_3 + 0x18) = arg3
    (*eax_3)(arg1)

if (*arg4 == 0)
    *arg4 = (*arg1[1])(arg1, 1, 0x590)

int32_t edx_2 = *arg4
int32_t edi_2 = 0
void* ebx_2 = 1
int32_t var_120 = edx_2
*(edx_2 + 0x8c) = esi
int32_t var_118 = 0
void* var_114 = 1
int32_t __saved_ebp
int32_t eax_5

while (true)
    uint32_t esi_1 = zx.d(*(ebx_2 + esi))
    
    if (esi_1 s< 0 || esi_1 + edi_2 s> 0x100)
        void* eax_6 = *arg1
        *(eax_6 + 0x14) = 8
        (*eax_6)(arg1)
        edx_2 = var_120
    
    if (esi_1 != 0)
        ebx_2:1.b = ebx_2.b
        eax_5.w = ebx_2.w
        ebx_2 = var_114
        int32_t ecx_5
        int32_t edi_4
        edi_4, ecx_5 = __memfill_u32(&__saved_ebp + edi_2 - 0x108, eax_5, esi_1 u>> 2)
        edx_2 = var_120
        int32_t ecx_8
        int32_t edi_5
        edi_5, ecx_8 = __memfill_u8(edi_4, eax_5.b, esi_1 & 3)
        edi_2 = var_118 + esi_1
        var_118 = edi_2
    
    ebx_2 += 1
    var_114 = ebx_2
    
    if (ebx_2 s> 0x10)
        break
    
    esi = var_110

char var_10c
(&var_10c)[edi_2] = 0
eax_5.b = var_10c
int32_t edi_7 = 0
int32_t esi_2 = 0
int32_t ebx_3 = sx.d(eax_5.b)
int32_t var_530[0x101]

if (eax_5.b != 0)
    char* eax_8 = &var_10c
    
    do
        if (sx.d(*eax_8) == ebx_3)
            int32_t ecx_9
            
            do
                char var_10b[0x103]
                ecx_9 = sx.d(var_10b[esi_2])
                var_530[esi_2] = edi_7
                esi_2 += 1
                edi_7 += 1
            while (ecx_9 == ebx_3)
        
        if (edi_7 s>= 1 << ebx_3.b)
            void* eax_11 = *arg1
            *(eax_11 + 0x14) = 8
            (*eax_11)(arg1)
            edx_2 = var_120
        
        eax_8 = &__saved_ebp + esi_2 - 0x108
        edi_7 <<= 1
        ebx_3 += 1
    while ((&var_10c)[esi_2] != 0)

int32_t ecx_12 = 0
int32_t esi_3

for (char* i = 1; i s<= 0x10; i = &i[1])
    esi_3 = var_110
    ebx_3.b = i[esi_3]
    
    if (ebx_3.b == 0)
        *(edx_2 + (i << 2)) = 0xffffffff
    else
        *(edx_2 + (i << 2) + 0x48) = ecx_12 - var_530[ecx_12]
        ecx_12 += zx.d(ebx_3.b)
        int32_t __saved_ebx
        *(edx_2 + (i << 2)) = (&__saved_ebx)[ecx_12]

*(edx_2 + 0x44) = 0xfffff
__builtin_memset(edx_2 + 0x90, 0, 0x400)
int32_t edx_4 = 0
int32_t ecx_13 = 7
int32_t var_118_1 = 0
void* ebx_4 = 1
int32_t var_11c_1 = 7
int32_t temp1_1

do
    uint32_t eax_12 = zx.d(*(ebx_4 + esi_3))
    
    if (eax_12 s>= 1)
        char* esi_4 = edx_4 + esi_3 + 0x11
        int32_t i_3 = 1 << ecx_13.b
        char* var_114_1 = esi_4
        uint32_t var_128_1 = eax_12
        bool cond:4_1
        
        do
            int32_t eax_14 = var_530[edx_4] << ecx_13.b
            
            if (i_3 s> 0)
                ecx_13.b = *esi_4
                char* edx_5 = eax_14 + var_120 + 0x490
                void** eax_15 = var_120 + (eax_14 << 2) + 0x90
                int32_t i_2 = i_3
                int32_t i_1
                
                do
                    *eax_15 = ebx_4
                    eax_15 = &eax_15[1]
                    *edx_5 = ecx_13.b
                    edx_5 = &edx_5[1]
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                edx_4 = var_118_1
                ecx_13 = var_11c_1
            
            edx_4 += 1
            esi_4 = &var_114_1[1]
            cond:4_1 = var_128_1 != 1
            var_118_1 = edx_4
            var_114_1 = esi_4
            var_128_1 -= 1
        while (cond:4_1)
        esi_3 = var_110
    
    ebx_4 += 1
    temp1_1 = ecx_13
    ecx_13 -= 1
    var_11c_1 = ecx_13
while (temp1_1 - 1 s>= 0)
uint32_t result = arg2

if (result != 0)
    int32_t esi_7 = 0
    
    if (edi_2 s> 0)
        do
            result = zx.d(*(var_110 + esi_7 + 0x11))
            
            if (result s< 0 || result s> 0xf)
                void* eax_18 = *arg1
                *(eax_18 + 0x14) = 8
                result = (*eax_18)(arg1)
            
            esi_7 += 1
        while (esi_7 s< edi_2)

sub_745f2b(__security_cookie_1)
return result
