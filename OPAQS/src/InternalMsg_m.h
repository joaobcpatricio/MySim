//
// Generated file, do not edit! Created by nedtool 5.4 from InternalMsg.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __INTERNALMSG_M_H
#define __INTERNALMSG_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>InternalMsg.msg:13</tt> by nedtool.
 * <pre>
 * // Message to register an application
 * packet RegisterAppMsg
 * {
 *     string appName;
 *     string prefixName;
 * }
 * </pre>
 */
class RegisterAppMsg : public ::omnetpp::cPacket
{
  protected:
    ::omnetpp::opp_string appName;
    ::omnetpp::opp_string prefixName;

  private:
    void copy(const RegisterAppMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RegisterAppMsg&);

  public:
    RegisterAppMsg(const char *name=nullptr, short kind=0);
    RegisterAppMsg(const RegisterAppMsg& other);
    virtual ~RegisterAppMsg();
    RegisterAppMsg& operator=(const RegisterAppMsg& other);
    virtual RegisterAppMsg *dup() const override {return new RegisterAppMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * getAppName() const;
    virtual void setAppName(const char * appName);
    virtual const char * getPrefixName() const;
    virtual void setPrefixName(const char * prefixName);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RegisterAppMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RegisterAppMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>InternalMsg.msg:19</tt> by nedtool.
 * <pre>
 * // Message to provide the current neighbour list
 * packet NeighbourListMsg
 * {
 *     string neighbourNameList[];
 *     int neighbourNameCount;
 * 
 *     //double neighPos[];
 * }
 * </pre>
 */
class NeighbourListMsg : public ::omnetpp::cPacket
{
  protected:
    ::omnetpp::opp_string *neighbourNameList; // array ptr
    unsigned int neighbourNameList_arraysize;
    int neighbourNameCount;

  private:
    void copy(const NeighbourListMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NeighbourListMsg&);

  public:
    NeighbourListMsg(const char *name=nullptr, short kind=0);
    NeighbourListMsg(const NeighbourListMsg& other);
    virtual ~NeighbourListMsg();
    NeighbourListMsg& operator=(const NeighbourListMsg& other);
    virtual NeighbourListMsg *dup() const override {return new NeighbourListMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual void setNeighbourNameListArraySize(unsigned int size);
    virtual unsigned int getNeighbourNameListArraySize() const;
    virtual const char * getNeighbourNameList(unsigned int k) const;
    virtual void setNeighbourNameList(unsigned int k, const char * neighbourNameList);
    virtual int getNeighbourNameCount() const;
    virtual void setNeighbourNameCount(int neighbourNameCount);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const NeighbourListMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, NeighbourListMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>InternalMsg.msg:26</tt> by nedtool.
 * <pre>
 * // Message to provide the graph from neighLayer when it receives the NeighList
 * packet GraphUpdtMsg
 * {
 *     string graph;
 *     bool noNeighs;
 *     simtime_t sentTime;	//timeStamp
 * }
 * </pre>
 */
class GraphUpdtMsg : public ::omnetpp::cPacket
{
  protected:
    ::omnetpp::opp_string graph;
    bool noNeighs;
    ::omnetpp::simtime_t sentTime;

  private:
    void copy(const GraphUpdtMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const GraphUpdtMsg&);

  public:
    GraphUpdtMsg(const char *name=nullptr, short kind=0);
    GraphUpdtMsg(const GraphUpdtMsg& other);
    virtual ~GraphUpdtMsg();
    GraphUpdtMsg& operator=(const GraphUpdtMsg& other);
    virtual GraphUpdtMsg *dup() const override {return new GraphUpdtMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * getGraph() const;
    virtual void setGraph(const char * graph);
    virtual bool getNoNeighs() const;
    virtual void setNoNeighs(bool noNeighs);
    virtual ::omnetpp::simtime_t getSentTime() const;
    virtual void setSentTime(::omnetpp::simtime_t sentTime);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GraphUpdtMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GraphUpdtMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>InternalMsg.msg:33</tt> by nedtool.
 * <pre>
 * // Message to inform a packet has been sent
 * packet PcktIsSentMsg
 * {
 *     string ownAddr;
 *     double bit_size;
 *     bool to_Gw;
 *     bool is_sent;
 *     double distance;
 *     simtime_t sentTime;	//timeStamp
 * }
 * </pre>
 */
class PcktIsSentMsg : public ::omnetpp::cPacket
{
  protected:
    ::omnetpp::opp_string ownAddr;
    double bit_size;
    bool to_Gw;
    bool is_sent;
    double distance;
    ::omnetpp::simtime_t sentTime;

  private:
    void copy(const PcktIsSentMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PcktIsSentMsg&);

  public:
    PcktIsSentMsg(const char *name=nullptr, short kind=0);
    PcktIsSentMsg(const PcktIsSentMsg& other);
    virtual ~PcktIsSentMsg();
    PcktIsSentMsg& operator=(const PcktIsSentMsg& other);
    virtual PcktIsSentMsg *dup() const override {return new PcktIsSentMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * getOwnAddr() const;
    virtual void setOwnAddr(const char * ownAddr);
    virtual double getBit_size() const;
    virtual void setBit_size(double bit_size);
    virtual bool getTo_Gw() const;
    virtual void setTo_Gw(bool to_Gw);
    virtual bool getIs_sent() const;
    virtual void setIs_sent(bool is_sent);
    virtual double getDistance() const;
    virtual void setDistance(double distance);
    virtual ::omnetpp::simtime_t getSentTime() const;
    virtual void setSentTime(::omnetpp::simtime_t sentTime);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PcktIsSentMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PcktIsSentMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>InternalMsg.msg:43</tt> by nedtool.
 * <pre>
 * // Message to provide the table from neighLayer 
 * packet EnerTableMsg
 * {
 *     string table;
 *     //bool noNeighs;
 *     simtime_t sentTime;	//timeStamp
 * }
 * </pre>
 */
class EnerTableMsg : public ::omnetpp::cPacket
{
  protected:
    ::omnetpp::opp_string table;
    ::omnetpp::simtime_t sentTime;

  private:
    void copy(const EnerTableMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EnerTableMsg&);

  public:
    EnerTableMsg(const char *name=nullptr, short kind=0);
    EnerTableMsg(const EnerTableMsg& other);
    virtual ~EnerTableMsg();
    EnerTableMsg& operator=(const EnerTableMsg& other);
    virtual EnerTableMsg *dup() const override {return new EnerTableMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * getTable() const;
    virtual void setTable(const char * table);
    virtual ::omnetpp::simtime_t getSentTime() const;
    virtual void setSentTime(::omnetpp::simtime_t sentTime);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EnerTableMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EnerTableMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>InternalMsg.msg:59</tt> by nedtool.
 * <pre>
 * //*****************************************************************************************************  /
 * // \@author : João Patrício (castanheirapatricio\@ua.pt)
 * // \@date   : 26-june-2019
 * //
 * //               addrs | Prob 		| myProb	 |	MyPosX 	 | MyPosY	| SSI	    |neighGraph |  neighEner | numberVert | total  |
 * //               s & d | (4 byte)   |  (4 byte)  | (4 byte)  | (4 bytes)| (4 bytes) | (bytes)   |			 |            |        |
 * // Routing	 ->   6 + 6      4             4           4         4			4		    64            64		  1	          97
 * //
 * // Message that sends Beacon received information to routing layer
 * packet BeaconInfoMsg
 * {
 *     string sourceAddress;
 *     string destinationAddress;
 *     int realPacketSize;	//Hardcoded in NeighboringLayer.cc
 *     double Prob;
 *     double myProb;
 *     double MyPosX;
 *     double MyPosY;
 *     double SSI;
 *     //int Nic; //0=wifi, 1=Bt,
 *     string neighGraph;
 *     string neighEner;
 *     int numberVert;
 *     simtime_t sentTime;	//timeStamp
 *     simtime_t receivedTime;	//timeStamp
 *     simtime_t injectedTime;	//timeStamp	, generation time on neighboring 
 * }
 * </pre>
 */
class BeaconInfoMsg : public ::omnetpp::cPacket
{
  protected:
    ::omnetpp::opp_string sourceAddress;
    ::omnetpp::opp_string destinationAddress;
    int realPacketSize;
    double Prob;
    double myProb;
    double MyPosX;
    double MyPosY;
    double SSI;
    ::omnetpp::opp_string neighGraph;
    ::omnetpp::opp_string neighEner;
    int numberVert;
    ::omnetpp::simtime_t sentTime;
    ::omnetpp::simtime_t receivedTime;
    ::omnetpp::simtime_t injectedTime;

  private:
    void copy(const BeaconInfoMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BeaconInfoMsg&);

  public:
    BeaconInfoMsg(const char *name=nullptr, short kind=0);
    BeaconInfoMsg(const BeaconInfoMsg& other);
    virtual ~BeaconInfoMsg();
    BeaconInfoMsg& operator=(const BeaconInfoMsg& other);
    virtual BeaconInfoMsg *dup() const override {return new BeaconInfoMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * getSourceAddress() const;
    virtual void setSourceAddress(const char * sourceAddress);
    virtual const char * getDestinationAddress() const;
    virtual void setDestinationAddress(const char * destinationAddress);
    virtual int getRealPacketSize() const;
    virtual void setRealPacketSize(int realPacketSize);
    virtual double getProb() const;
    virtual void setProb(double Prob);
    virtual double getMyProb() const;
    virtual void setMyProb(double myProb);
    virtual double getMyPosX() const;
    virtual void setMyPosX(double MyPosX);
    virtual double getMyPosY() const;
    virtual void setMyPosY(double MyPosY);
    virtual double getSSI() const;
    virtual void setSSI(double SSI);
    virtual const char * getNeighGraph() const;
    virtual void setNeighGraph(const char * neighGraph);
    virtual const char * getNeighEner() const;
    virtual void setNeighEner(const char * neighEner);
    virtual int getNumberVert() const;
    virtual void setNumberVert(int numberVert);
    virtual ::omnetpp::simtime_t getSentTime() const;
    virtual void setSentTime(::omnetpp::simtime_t sentTime);
    virtual ::omnetpp::simtime_t getReceivedTime() const;
    virtual void setReceivedTime(::omnetpp::simtime_t receivedTime);
    virtual ::omnetpp::simtime_t getInjectedTime() const;
    virtual void setInjectedTime(::omnetpp::simtime_t injectedTime);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BeaconInfoMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BeaconInfoMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>InternalMsg.msg:82</tt> by nedtool.
 * <pre>
 * //*****************************************************************************************************  /
 * // \@author : João Patrício (castanheirapatricio\@ua.pt)
 * // \@date   : 23-july-2019
 * // Message to provide the current neighbour list by Bluetooth
 * packet NeighbourListMsgBT
 * {
 *     string neighbourNameList[];
 *     int neighbourNameCount;
 * 
 *     //double neighPos[];
 * }
 * </pre>
 */
class NeighbourListMsgBT : public ::omnetpp::cPacket
{
  protected:
    ::omnetpp::opp_string *neighbourNameList; // array ptr
    unsigned int neighbourNameList_arraysize;
    int neighbourNameCount;

  private:
    void copy(const NeighbourListMsgBT& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NeighbourListMsgBT&);

  public:
    NeighbourListMsgBT(const char *name=nullptr, short kind=0);
    NeighbourListMsgBT(const NeighbourListMsgBT& other);
    virtual ~NeighbourListMsgBT();
    NeighbourListMsgBT& operator=(const NeighbourListMsgBT& other);
    virtual NeighbourListMsgBT *dup() const override {return new NeighbourListMsgBT(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual void setNeighbourNameListArraySize(unsigned int size);
    virtual unsigned int getNeighbourNameListArraySize() const;
    virtual const char * getNeighbourNameList(unsigned int k) const;
    virtual void setNeighbourNameList(unsigned int k, const char * neighbourNameList);
    virtual int getNeighbourNameCount() const;
    virtual void setNeighbourNameCount(int neighbourNameCount);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const NeighbourListMsgBT& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, NeighbourListMsgBT& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>InternalMsg.msg:89</tt> by nedtool.
 * <pre>
 * // Message to provide the graph from neighLayer when it receives the NeighList
 * packet GraphUpdtMsgBT
 * {
 *     string graph;
 *     bool noNeighs;
 *     simtime_t sentTime;	//timeStamp
 * }
 * </pre>
 */
class GraphUpdtMsgBT : public ::omnetpp::cPacket
{
  protected:
    ::omnetpp::opp_string graph;
    bool noNeighs;
    ::omnetpp::simtime_t sentTime;

  private:
    void copy(const GraphUpdtMsgBT& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const GraphUpdtMsgBT&);

  public:
    GraphUpdtMsgBT(const char *name=nullptr, short kind=0);
    GraphUpdtMsgBT(const GraphUpdtMsgBT& other);
    virtual ~GraphUpdtMsgBT();
    GraphUpdtMsgBT& operator=(const GraphUpdtMsgBT& other);
    virtual GraphUpdtMsgBT *dup() const override {return new GraphUpdtMsgBT(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * getGraph() const;
    virtual void setGraph(const char * graph);
    virtual bool getNoNeighs() const;
    virtual void setNoNeighs(bool noNeighs);
    virtual ::omnetpp::simtime_t getSentTime() const;
    virtual void setSentTime(::omnetpp::simtime_t sentTime);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GraphUpdtMsgBT& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GraphUpdtMsgBT& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>InternalMsg.msg:97</tt> by nedtool.
 * <pre>
 * //*****************************************************************************************************  /
 * // Message of routing commands: indicate the chosen Nic
 * packet routingDecisionsMsg
 * {
 *     bool sendWifiFirst;
 * }
 * </pre>
 */
class routingDecisionsMsg : public ::omnetpp::cPacket
{
  protected:
    bool sendWifiFirst;

  private:
    void copy(const routingDecisionsMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const routingDecisionsMsg&);

  public:
    routingDecisionsMsg(const char *name=nullptr, short kind=0);
    routingDecisionsMsg(const routingDecisionsMsg& other);
    virtual ~routingDecisionsMsg();
    routingDecisionsMsg& operator=(const routingDecisionsMsg& other);
    virtual routingDecisionsMsg *dup() const override {return new routingDecisionsMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual bool getSendWifiFirst() const;
    virtual void setSendWifiFirst(bool sendWifiFirst);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const routingDecisionsMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, routingDecisionsMsg& obj) {obj.parsimUnpack(b);}


#endif // ifndef __INTERNALMSG_M_H

