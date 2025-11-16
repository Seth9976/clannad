// 函数: sub_4ed940
// 地址: 0x4ed940
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1b14e68 s<= 0 && data_1b14e64 == 0)
    int32_t* eax
    eax.b = 0
    return eax

if (data_1b14e6d == 0)
    return sub_4ed700()

int32_t eax_2 = data_137010c

if (eax_2 == 1)
    bool cond:1_1 = data_1b8a6ec != 0
    data_137010c = 2
    
    if (cond:1_1)
        goto label_4ed9c3
    
    data_71929c = 3
    eax_2.b = eax_2.b
    data_7192a0 = 0
    data_7192e0 = 0
    return eax_2

if (eax_2 == 2)
label_4ed9c3:
    int32_t eax_3 = data_131310c
    data_137010c = 0
    data_1bfe02c = eax_3
    data_1b8add0 = 0

int32_t eax_4 = data_703678
data_1af1794 = 1

if (eax_4 == 1)
    eax_4 = 2

data_1b14e74 += 1
data_703678 = eax_4
sub_580c90()
int32_t* ecx = sub_420620()
bool cond:3 = data_702fc0 == 0
data_1af178c = data_1bfdb10
char* eax_5

if (not(cond:3))
    bool cond:4_1 = data_1b14e6c == 0
    eax_5 = data_1b15280
    data_1333e48 = eax_5
    
    if (cond:4_1)
        char* edx = data_1b14e7c
        
        if (edx != 0)
            eax_5, ecx = sub_4cfdf0(eax_5, edx, &data_1af0b10, 0x400)
    else
        data_1af0b10 = 0

int32_t* esi = data_1b14e64
eax_5.b = 0
int32_t edi = 0
char var_9 = 0

if (data_1b14e68 s> 0)
    int32_t i_1
    
    while (true)
        eax_5.b = edi == data_1b14e70
        uint32_t var_24_1 = zx.d(eax_5.b)
        char eax_7 = data_1b14e6c
        eax_5, ecx = sub_4ed3e0(eax_7, arg2, ecx, esi.b, eax_7)
        
        if (esi[3] != 0)
            eax_5 = esi[9]
            
            if (*eax_5 != 0)
                int32_t* var_24_2 = ecx
                int32_t var_28_2 = 0
                eax_5, ecx = sub_4ed130(eax_5, arg2, ecx, esi, 1, 1)
                var_9 = 1
        
        if (data_702fc0 != 0 && (esi[3] != 0 || esi[6] != 0) && edi != data_1b14e70)
            eax_5 = data_1333e48
            
            if (eax_5 s< 0x18ffd)
                *(eax_5 + &data_1333e4c:3) = 0xa0d
                data_1333e48 = &eax_5[1]
                
                if (&eax_5[1] u>= 0x19000)
                    ___report_rangecheckfailure()
                    noreturn
                
                *(eax_5 + 0x1333e51) = 0
                data_1333e48 = &eax_5[2]
            
            if (data_1b14e6c != 0)
                sub_41bcb0()
        
        esi = &esi[0x16]
        i_1 = data_1b14e68
        
        if (edi + 1 s>= i_1)
            break
        
        edi += 1
    
    eax_5.b = var_9
    
    if (eax_5.b != 0)
        data_1b8add0 += 1
        int32_t* esi_1 = data_1b14e64
        
        if (i_1 s> 0)
            int32_t i
            
            do
                if (esi_1[3] != 0)
                    int32_t ecx_1 = *esi_1
                    
                    if (ecx_1 u<= 0x3f)
                        *(ecx_1 * 0x2d0 + 0x8fcb0c) = esi_1[0xa]
                        *(ecx_1 * 0x2d0 + 0x8fcb10) = esi_1[0xb]
                        *(ecx_1 * 0x3920 + 0xf8d324) = esi_1[0xc]
                        *(ecx_1 * 0x2d0 + 0x8fcb14) = esi_1[0xd]
                
                esi_1 = &esi_1[0x16]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (data_1b8a6ec == 0 && data_187c51f == 0)
            sub_4ec540()
        
        eax_5.b = var_9
        data_1af17bc = 1

return eax_5
