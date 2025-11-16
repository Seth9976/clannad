// 函数: sub_1a91aa0
// 地址: 0x1a91aa0
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

if (arg1 u> arg2 && arg1 u< arg3 + arg2)
    if (((arg3 + arg1 - 4) & 3) != 0)
        if (arg3 u< 4)
            jump(*((arg3 << 2) + &data_1a91d80))
        
        jump(*((((arg3 + arg1 - 4) & 3) << 2) + &data_1a91c88))
    
    uint32_t ecx_4 = arg3 u>> 2
    
    if (ecx_4 u< 8)
        jump(*((neg.d(ecx_4) << 2) + &data_1a91d30))
    
    __builtin_memcpy(arg3 + arg1 - 4 - (ecx_4 << 2), arg3 + arg2 - 4 - (ecx_4 << 2), ecx_4 << 2)
    jump(*(((arg3 & 3) << 2) + &data_1a91d80))

if ((arg1 & 3) != 0)
    if (arg3 u< 4)
        jump(*(((arg3 - 4) << 2) + &data_1a91bf8))
    
    jump(*(((arg1 & 3) << 2) + &data_1a91b00))

uint32_t ecx_1 = arg3 u>> 2

if (ecx_1 u< 8)
    jump(*((ecx_1 << 2) + &data_1a91b7c))

__builtin_memcpy(arg1, arg2, ecx_1 << 2)
jump((&data_1a91be8)[arg3 & 3])
