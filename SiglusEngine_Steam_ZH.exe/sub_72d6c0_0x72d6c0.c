// 函数: sub_72d6c0
// 地址: 0x72d6c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t eax_1
eax_1.b = arg2
char var_511 = eax_1.b

if (arg4 s< 0 || arg4 s>= 4)
    *(*arg3 + 0x14) = 0x34
    *(*arg3 + 0x18) = arg4
    (**arg3)(arg3)
    eax_1.b = var_511

void* eax_6

if (eax_1.b == 0)
    eax_6 = arg3[arg4 + 0x2c]
else
    eax_6 = arg3[arg4 + 0x28]

if (eax_6 == 0)
    *(*arg3 + 0x14) = 0x34
    *(*arg3 + 0x18) = arg4
    (**arg3)(arg3)

if (*arg5 == 0)
    *arg5 = (*arg3[1])(arg3, 1, 0x590)

int32_t eax_14 = *arg5
void* i = 1
void* ecx = eax_6
int32_t edi_1 = 0
int32_t var_528 = 0
*(eax_14 + 0x8c) = ecx
void* i_4 = 1
char var_10c
int32_t eax_15

do
    uint32_t esi_1 = zx.d(*(i + ecx))
    
    if (esi_1 s< 0 || esi_1 + edi_1 s> 0x100)
        *(*arg3 + 0x14) = 9
        (**arg3)(arg3)
        i = i_4
    
    if (esi_1 != 0)
        eax_15.b = i.b
        eax_15 = zx.d(eax_15.b) * 0x1010101
        i = i_4
        int32_t ecx_3
        int32_t edi_3
        edi_3, ecx_3 = __memfill_u32(&(&var_10c)[edi_1], eax_15, esi_1 u>> 2)
        int32_t ecx_6
        int32_t edi_4
        edi_4, ecx_6 = __memfill_u8(edi_3, eax_15.b, esi_1 & 3)
        edi_1 = var_528 + esi_1
        var_528 = edi_1
    
    ecx = eax_6
    i += 1
    i_4 = i
while (i s<= 0x10)

if (edi_1 u>= 0x101)
    ___report_rangecheckfailure()
    noreturn

(&var_10c)[edi_1] = 0
int32_t esi_2 = 0
eax_15.b = var_10c
int32_t edi_6 = 0
int32_t ebx_1 = sx.d(eax_15.b)
int32_t var_510[0x101]

if (eax_15.b != 0)
    char* eax_20 = &var_10c
    int32_t edx = rol.d(1, ebx_1.b)
    int32_t var_518 = edx
    int32_t ebx_2 = ebx_1
    
    do
        if (sx.d(*eax_20) == ebx_2)
            int32_t eax_22
            
            do
                char var_10b[0x103]
                eax_22 = sx.d(var_10b[esi_2])
                var_510[esi_2] = edi_6
                esi_2 += 1
                edi_6 += 1
            while (eax_22 == ebx_2)
        
        if (edi_6 s>= edx)
            *(*arg3 + 0x14) = 9
            (**arg3)(arg3)
            edx = var_518
        
        edx = rol.d(edx, 1)
        eax_20 = &(&var_10c)[esi_2]
        var_518 = edx
        edi_6 *= 2
        ebx_2 += 1
    while (*eax_20 != 0)

void* edi_7 = eax_6
int32_t edx_1 = 0

for (void* i_1 = 1; i_1 s<= 0x10; i_1 += 1)
    if (*(i_1 + edi_7) == 0)
        *(eax_14 + (i_1 << 2)) = 0xffffffff
    else
        *(eax_14 + (i_1 << 2) + 0x48) = edx_1 - var_510[edx_1]
        edx_1 += zx.d(*(i_1 + edi_7))
        void var_514
        *(eax_14 + (i_1 << 2)) = *(&var_514 + (edx_1 << 2))

*(eax_14 + 0x44) = 0xfffff
char* j = _memset(eax_14 + 0x90, 0, 0x400)
int32_t esi_3 = 0
int32_t var_520_2 = 7
int32_t var_518_1 = 0
char* ebx_4 = 1
int32_t ecx_9 = 7
int32_t temp0_1

do
    if (*(ebx_4 + edi_7) u>= 1)
        int32_t i_2 = 1
        j = 1 << ecx_9.b
        char* j_1 = j
        char* edi_9 = edi_7 + 0x11 + esi_3
        int32_t i_3 = 1
        
        do
            int32_t esi_5 = var_510[esi_3] << ecx_9.b
            
            if (j s> 0)
                void* edx_3 = eax_14 + 0x490 + esi_5
                char** esi_7 = eax_14 + ((esi_5 + 0x24) << 2)
                
                do
                    *esi_7 = ebx_4
                    esi_7 = &esi_7[1]
                    int32_t ecx_10
                    ecx_10.b = *edi_9
                    edx_3 += 1
                    j -= 1
                    *(edx_3 - 1) = ecx_10.b
                while (j s> 0)
                
                i_2 = i_3
                ecx_9 = var_520_2
            
            i_2 += 1
            edi_9 = &edi_9[1]
            esi_3 = var_518_1 + 1
            i_3 = i_2
            var_518_1 = esi_3
            j = j_1
        while (i_2 s<= zx.d(*(ebx_4 + eax_6)))
        
        edi_7 = eax_6
    
    ebx_4 = &ebx_4[1]
    temp0_1 = ecx_9
    ecx_9 -= 1
    var_520_2 = ecx_9
while (temp0_1 - 1 s>= 0)

if (var_511 != 0)
    int32_t esi_9 = 0
    
    if (var_528 s> 0)
        do
            j = zx.d(*(edi_7 + esi_9 + 0x11))
            
            if (j s< 0 || j s> 0xf)
                *(*arg3 + 0x14) = 9
                j = (**arg3)(arg3)
            
            esi_9 += 1
        while (esi_9 s< var_528)

sub_745f2b(var_8 ^ &__saved_ebp)
return j
