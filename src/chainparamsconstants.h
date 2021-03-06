#ifndef BITCOIN_CHAINPARAMSCONSTANTS_H
#define BITCOIN_CHAINPARAMSCONSTANTS_H
/**
 * Chain params constants for each tracked chain.
 * @generated by contrib/devtools/chainparams/generate_chainparams_constants.py
 */

#include <primitives/blockhash.h>
#include <uint256.h>

namespace ChainParamsConstants {
    const BlockHash MAINNET_DEFAULT_ASSUME_VALID = BlockHash::fromHex("00000000000000000291fa14de11e33cfdcb302cd0a5a831a2c29a4b4773537c");
    const uint256 MAINNET_MINIMUM_CHAIN_WORK = uint256S("0000000000000000000000000000000000000000013c95e14d4d9db91d671020");
    const uint64_t MAINNET_ASSUMED_BLOCKCHAIN_SIZE = 204;
    const uint64_t MAINNET_ASSUMED_CHAINSTATE_SIZE = 3;

    const BlockHash TESTNET_DEFAULT_ASSUME_VALID = BlockHash::fromHex("000000000000d0b2005b4a5e00b75f1b0df432b25a3955d22b01e10630b48341");
    const uint256 TESTNET_MINIMUM_CHAIN_WORK = uint256S("00000000000000000000000000000000000000000000006956e7298fb096a1cc");
    const uint64_t TESTNET_ASSUMED_BLOCKCHAIN_SIZE = 55;
    const uint64_t TESTNET_ASSUMED_CHAINSTATE_SIZE = 2;
} // namespace ChainParamsConstants

#endif // BITCOIN_CHAINPARAMSCONSTANTS_H
