// 函数: sub_445f00
// 地址: 0x445f00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = data_13740b0 == 0
data_1374234 = 0xffffffff

if (cond:0 || data_1320e5c != 0xffffffff)
    return 

void* esi_1 = &data_139329c

while (true)
    int32_t ecx_1 = *esi_1
    
    if (*(ecx_1 * 0x3920 + &data_f89ba4) != 0)
        int32_t eax = sub_445dc0(ecx_1)
        data_1374234 = eax
        
        if (eax != 0xffffffff)
            data_1320e5c = 4
            break
    
    esi_1 -= 4
    
    if (esi_1 s< &data_13931a0)
        return 
