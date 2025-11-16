// 函数: sub_490290
// 地址: 0x490290
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = sub_48fa00()
int32_t ebx = data_1af1778
data_1af175c = 0
data_1af1778 = 0xffffffff
data_1af1774 = 0xffffffff
sub_490110(eax, arg2, arg3, arg4)
int32_t eax_1 = data_1bfdd70
data_1b1bccc = 0
data_1bfdd78 = 0

if (eax_1 == 0)
    eax_1 = 0xffffffff

bool cond:1 = data_702fc0 == 0
data_1bfdd70 = eax_1

if (not(cond:1))
    sub_573430(1)

bool cond:2 = data_108f488 == 0
data_1af4e80 = data_131d2cc
char* result = data_1320e58
data_1af4e7c = result

if (not(cond:2))
    if (arg4 - 1 u<= 5)
        switch (arg4)
            case 1
                data_1af1750 = 1
            case 2
                data_1af1750 = 0
            case 3
                switch (ebx)
                    case 0
                        data_1af1750 = 0
                    case 1
                        data_1af1750 = 4
                    case 2
                        data_1af1750 = 3
                    case 3
                        data_1af1750 = 5
            case 6
                data_1af1750 = 2
    
    int32_t eax_6 = data_719b6c - 1
    
    if (eax_6 u> 0x270e || data_976f94 == 0)
        data_976fb0.d = 0xffffffff
    else
        eax_6 = data_719b74 + data_976fa8
        data_976fb0.d = eax_6
    
    sub_48f4f0(eax_6, &data_976f90, &data_719b6c, data_108f480, data_108f484, 0, 7)
    result = sub_48d040(data_71929c, &data_7192a0)
    data_71929c = 4
    data_7192a0 = 0
    data_7192e0 = 0

return result
