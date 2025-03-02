use twsfw_rs::{
    TwsfwAction, TwsfwAgent, TwsfwphysxAgent, TwsfwphysxMissile, TwsfwphysxWorld, twsfw_agent,
};

twsfw_agent!(RustAgent);
struct RustAgent;

impl TwsfwAgent for RustAgent {
    fn twsfw_agent_act(
        _agents: &[TwsfwphysxAgent],
        _missiles: &[TwsfwphysxMissile],
        _world: &TwsfwphysxWorld,
        _id: i32,
    ) -> TwsfwAction {
        TwsfwAction::ChangeAcceleration(1.0)
    }
}
