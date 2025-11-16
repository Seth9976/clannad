// 函数: sub_41bcf0
// 地址: 0x41bcf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg1

if (esi == 0)
    return 

char i = *esi

if (i == 0)
    return 

void* eax_2 = data_1333e48 - 1
data_1333e48 = eax_2

do
    if (i u< 0x80)
    label_41bd3a:
        
        if (eax_2 s< 0x18ffe)
            *(eax_2 + &data_1333e50) = i
            esi = &esi[1]
            eax_2 += 1
            data_1333e48 = eax_2
    else
        if (i u< 0xa0)
            if (i u>= 0xfe)
                goto label_41bd3a
            
            goto label_41bd1c
        
        if (i u<= 0xdf || i u>= 0xfe)
            goto label_41bd3a
        
    label_41bd1c:
        
        if (eax_2 s< 0x18ffd)
            *(eax_2 + &data_1333e50) = i
            arg1.b = esi[1]
            esi = &esi[2]
            *(eax_2 + 0x1333e51) = arg1.b
            eax_2 += 2
            data_1333e48 = eax_2
    
    i = *esi
while (i != 0)

if (eax_2 u>= 0x19000)
    ___report_rangecheckfailure()
    noreturn

*(eax_2 + &data_1333e50) = i
data_1333e48 = eax_2 + 1
